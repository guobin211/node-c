const express = require('express');
const app = express();

const options = {
    dotfiles: 'ignore',
    etag: false,
    extensions: ['htm', 'html'],
    index: false,
    maxAge: 0,
    redirect: false,
    setHeaders: function (res, path, stat) {
        res.set('x-timestamp', Date.now())
    }
}

app.use(express.static('assets', options))

app.get('/', (req, res, next) => {
    res.redirect('/index.html');
})

app.listen(9000, () => {
    console.log('http://127.0.0.1:9000');
})

app.on('error', (error) => {
    console.error(error);
})