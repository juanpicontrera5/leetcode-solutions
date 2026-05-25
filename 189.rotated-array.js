let nums = [1,2,3,4,5,6,7];
let k = 3;

nums.reverse();

 c = k-1;

for (let i = 0; i < k-1; i++) {
    let aux = nums[i];
    nums[i] = nums[c];
    nums[c] = aux;
    c--;
}



c=nums.length-1;



for (let i = k; i < k + Math.floor(c / 2); i++) {
    let aux = nums[i];
    nums[i] = nums[c];
    nums[c] = aux;
    c--;
}

console.log(nums)





