import * as fs from 'fs';

const info = fs.readFileSync('./package.json');
// 添加debuger
debugger;
console.log(info.toString());