const test = require('./test.js');
const Square = require('./classes/Square');
const Ess = require('./classes/Es');

console.log('start');

test.sumNumber();

console.log('end');

const square = new Square(4);

console.log(square.area());

console.log(square.width);

console.log(square._state);

console.log(square.state);

square.state = 'active';

console.log(square.state);

console.log(square._state);

const ess = new Ess();

ess.say();