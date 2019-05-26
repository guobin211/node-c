const arr = [1, 2, 3, 4, 5, 6, 4, 5, 6, 1, 2, 3];

console.log(arr.filter(e => e > 4));

function sumNumber() {
    let a = 3.1415926, b = 2.178;
    for (let i = 0; i < 100000000; i++) {
        a+=b;
    }
    let total = a;
    console.log(total);
}

console.time('js');
sumNumber();
console.timeEnd('js');
