import * as fs from 'fs';

const info = fs.readFileSync('./package.json');

console.log(info.toString());