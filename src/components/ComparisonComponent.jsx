import React, { useState } from 'react';

export default function ComparisonComponent({ filePaths, onComparisonResult }) {
  const [comparisonCount, setComparisonCount] = useState(0); // Track the comparison count

  const handleCompareClick = async () => {
    const res = await fetch('http://localhost:3002/compare-files', {
      method: 'POST',
      headers: { 'Content-Type': 'application/json' },
      body: JSON.stringify({ fileNames: filePaths })
    });
    if (!res.ok) {
      console.error('compare failed', await res.text());
      return;
    }
    const output = await res.text();

    // Increment the comparison count
    const newCount = comparisonCount + 1;
    setComparisonCount(newCount);

    // Create a descriptive label: "Comparison 1", "Comparison 2", etc.
    const label = `Comparison ${newCount}`;

    // Pass result, key, and label back to App
    onComparisonResult(output, newCount, label);
  };

  return (
    <button onClick={handleCompareClick} className="button">
      Compare Files
    </button>
  );
}