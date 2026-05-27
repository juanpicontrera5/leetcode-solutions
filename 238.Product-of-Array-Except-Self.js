
var nums = [1, 2, 3, 4, 5];
let r = [];

if (nums.length === 0) return;

r[0] = 1;

//prefix
for (let i = 1; i < nums.length; i++) {
    r[i] = r[i - 1] * nums[i-1];
}

let m = 1;

//posfix
for (let i = nums.length - 1; i >= 0; i--) {
    r[i] *= m;
    m *= nums[i]
}
  
console.log(r);
