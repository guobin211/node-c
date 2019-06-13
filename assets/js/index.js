window.onload = function () {
    console.log(EventSource)
    const index = new Index(); 
    console.log(index);
}

function Index() {
    this.sse = new EventSource('http://192.168.100.108/live', {
        withCredentials: false
    });
}