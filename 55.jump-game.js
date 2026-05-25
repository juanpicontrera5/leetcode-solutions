


var canJump = function (nums) {
    
    let target = nums.length-1;

    for(let i = nums.length-1; i>=0; i--){

        if(i+nums[i] >= target) target = i;

    }

    return target === 0;
};


// let nums = [3,2,1,0,4]
let nums = [2,3,1,1,4]
// let nums = [3,0,8,2,0,0,1]

console.log( canJump(nums) );
