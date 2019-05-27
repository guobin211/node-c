module.exports = {
    sumNumber() {
        let a = 3.1415926, b = 2.178;
        for (let i = 0; i < 1000000; i++) {
            a += b;
        }
        let total = a;
        console.log(total);
    }
}