const net = require('net');

const rtmp = net.createConnection('rtmp://192.168.100.108/live/rtsp10.stream');

rtmp.on('connect', (camera) => {
    console.log('连上了')
})

rtmp.on('close', (camera) => {
    console.log('关闭')
})

rtmp.on('error', (error) => {
    console.log(error)
})

rtmp.on('data', (data) => {
    console.log(typeof data);
})