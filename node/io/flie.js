const fs = require('fs');
const Path = require('../utils/path');
const path = new Path();
const stream = require('stream');
const CONFIG = require('../config');

console.log(__dirname);
console.log(__filename);
console.log(path.getDir());

console.log(CONFIG.csv_path);

const list = fs.readdirSync(CONFIG.csv_path);
console.log(list);

