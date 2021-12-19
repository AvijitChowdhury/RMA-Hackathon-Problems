
/*
Team Name: Coding Warriors

team Leader:Kashfi uddin
team member2: Avijit Chowdhury
team member3: Shakiruzzaman
*/
// var min = 10000;
// var max = 99999;
// var num = Math.floor(Math.random() * (max - min + 1)) + min;


var generateRandomNDigits = (n) => {
  return Math.floor(Math.random() * (9 * (Math.pow(10, n)))) + (Math.pow(10, n));
}

generateRandomNDigits(5)


console.log(5);
let a = new Array();
for(var i=0 ;i < 5;i++){
 a[i] = generateRandomNDigits(5);
}
console.log(a);


