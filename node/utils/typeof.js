const getAge = () => {
    return 22;
}
// object
const dict = new Map();
// object
const dictSet = new Set();
// symbol
const symb = Symbol('tom');
const arr = [0, false, undefined, null, getAge, 'jack', dict, dictSet, symb];
for (let i = 0; i < arr.length; i++) {
    const el = arr[i];
    console.log(typeof el);
}
