// function main() {
//   return new Promise((resolve, reject) => {
//     console.log("node js ready");
//     resolve('node start')
//   })
// }

// main().then(res => {
//   console.log(res);
// });


function testMap(num) {
  console.time();
  const map = new Map();
  for (let i = 0; i < num; i++) {
    map.set('k' + i, i + 'val')
  }
  console.timeEnd();
  console.time();
  const iter = map.values();
  const arr = Array.from(iter);
  for (let j = 0; j < map.size; j++) {
    console.log(map.get('k'+ j));
  }
  console.timeEnd();
}

// testMap(500);

function testArr(num) {
  console.time();
  const map = {};
  for (let i = 0; i < num; i++) {
    const key = 'k' + i;
    map[key] = [i];
  }
  console.timeEnd();
  console.time();
  for(const [key, value] in Object.entries(map)) {
    console.log(`${key}: ${value}`);
  }
  console.timeEnd();
}

testArr(500000);
