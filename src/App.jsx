import React, { useState, useRef } from 'react';
import './App.css';
import FileExplorer from './components/FileExplorer';
import CodeEditor from './components/CodeEditor';
import ComparisonComponent from './components/ComparisonComponent.jsx';

function App() {
  const [files, setFiles] = useState([]);
  const [selectedFile, setSelectedFile] = useState(null);
  const [searchQuery, setSearchQuery] = useState('');
  const [searchResults, setSearchResults] = useState([]);
  const [comparisonResult, setComparisonResult] = useState('');
  const [history, setHistory] = useState([]);


  const fileInputRef = useRef(null);

  const handleButtonClick = () => {
    fileInputRef.current.click();
  };

  const handleNewComparison = (resultString, comparisonKey, label) => {
    setComparisonResult(resultString);

    setHistory(h => {
      // if we've already seen this key, do nothing
      if (h.some(item => item.id === comparisonKey)) return h;
      // else append
      return [...h, { id: comparisonKey, label, result: resultString }];
    });
  };

  const handleFilesInput = async (event) => {
    const files = event.target.files;
    const newFiles = [];

    for (let i = 0; i < files.length; i++) {
      const file = files[i];
      const reader = new FileReader();
      reader.readAsText(file);
      await new Promise(resolve => {
        reader.onload = (e) => {
          newFiles.push({ name: file.name, content: e.target.result });
          resolve();
        };
      });
    }

    setFiles(prevFiles => [...prevFiles, ...newFiles]);
    if (newFiles.length > 0) setSelectedFile(newFiles[0]);

    await fetch('http://localhost:3002/upload', {
      method: 'POST',
      headers: { 'Content-Type': 'application/json' },
      body: JSON.stringify({ files: newFiles })
    });
  };

  const handleFileDelete = (fileToDelete) => {
    setFiles(prevFiles => {
      const updatedFiles = prevFiles.filter(file => file !== fileToDelete);
      if (selectedFile === fileToDelete) {
        setSelectedFile(updatedFiles.length > 0 ? updatedFiles[0] : null);
      }
      return updatedFiles;
    });
  };

  const handleFileSelect = (file) => {
    setSelectedFile(file);
    setComparisonResult('');
  };

  const runTerminalCommandPlaceholder = async (command) => {
    console.log(`Attempting to run terminal command: ${command}`);
    return '';
  };


  return (
    <div className="app-container">
      <div className="sidebar">
        <FileExplorer
          files={files}
          onFileSelect={handleFileSelect}
          onFileDelete={handleFileDelete}
        />
        <ComparisonComponent
          filePaths={files.map(f => f.name)}
          onComparisonResult={handleNewComparison}
        />
        <div className="file-input-area">
          <input
            type="file"
            multiple
            ref={fileInputRef}
            onChange={handleFilesInput}
            style={{ display: 'none' }}
          />
          <button onClick={handleButtonClick} className="button">Load Files</button>
        </div>
      </div>

      <div className="main-content">
        <CodeEditor
          content={comparisonResult || (selectedFile ? selectedFile.content : '')}
          searchResults={searchResults}
        />
      </div>

      <div className="comparison-history">
        <h2>Comparisons</h2>
        {history.length === 0 ? (
          <p>No comparisons yet.</p>
        ) : (
          <ul>
            {history.map((item, i) => (
              <li key={item.id} className="history-item">
                <button
                  className="history-btn"
                  onClick={() => setComparisonResult(item.result)}
                >
                  {item.label}
                </button>
              </li>
            ))}
          </ul>
        )}
      </div>
    </div>
  );
}

export default App;
