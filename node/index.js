const path = require('path')
const {installPlugin} = require('./utils/install')
const plugins = new Map()
const ids = fs.readdirSync(path.resolve(__dirname, 'libs'))
for (const id of ids) {
  plugins.set(id, installPlugin(path.resolve(__dirname, 'libs', id)))
}
module.exports = exports = {
  addon: plugins.get('addon')
}
