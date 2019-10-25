module.exports = exports = {
  installPlugin: function (name) {
    const body = 'c++ body'
    return new Function('args', body)
  }
}
