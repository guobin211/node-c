const fs = require('fs')
const path = require('path')

module.exports = exports = {
  getAllProjects: function () {
    const dirs = fs.readdirSync(path.resolve(__dirname, '..', 'src'))
    const projectMap = {};
    for (const dirName of dirs) {
      projectMap[dirName] = path.resolve(__dirname,'..', 'src', dirName)
    }
    return projectMap;
  }
}
