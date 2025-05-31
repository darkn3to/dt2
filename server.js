const fs = require('fs');
const express = require('express');
const bodyParser = require('body-parser');
const { spawn } = require('child_process');
const path = require('path');
const app = express();
const PORT = 8080;
const cors = require('cors');

const constPath = path.join(__dirname, 'uploads');

// 🔧 Ensure the same path is used for both creation and writing
if (!fs.existsSync(constPath)) {
  fs.mkdirSync(constPath, { recursive: true });
  console.log('Created uploads directory at', constPath);
}

app.use(cors());
app.use(bodyParser.json());

// Utility: Normalize Windows paths (if needed)
const normalizePath = p => p.replace(/\\/g, '/');

app.post('/upload', (req, res) => {
  const { files } = req.body;
  try {
    files.forEach(f => {
      const filePath = path.join(constPath, f.name);
      console.log(`Writing to file: ${filePath}`);
      fs.writeFileSync(filePath, f.content);
    });
    res.sendStatus(200);
  } catch (e) {
    console.error(e);
    res.status(500).send('Upload failed');
  }
});

app.post('/compare-files', (req, res) => {
  const { fileNames } = req.body;

  if (!fileNames || !Array.isArray(fileNames)) {
    return res.status(400).send('Invalid file list.');
  }

  // Pass only the filenames to a.exe
  const relativePaths = fileNames.map(fileName => path.basename(fileName)); // Extract only the filename
  console.log('compare-files got:', relativePaths);

  const exePath = path.join('E:', 'compiler_frontend', 'a.exe');
  console.log('exePath is:', exePath);

  const proc = spawn(exePath, relativePaths, { shell: true });
  let out = '', err = '';

  proc.stdout.on('data', d => out += d);
  proc.stderr.on('data', d => err += d);

  proc.on('close', code => {
    console.log(`a.exe exited with code=${code}`);
    if (err) console.error('stderr from a.exe:', err);
    if (code === 0) return res.send(out);
    res.status(500).send(`Executable error:\n${err}`);
  });
});

app.listen(PORT, () => {
  console.log(`Server running on http://localhost:${PORT}`);
});
