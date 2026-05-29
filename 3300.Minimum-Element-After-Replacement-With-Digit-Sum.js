var nums = [999,19,199];

for(let i = 0; i<nums.length; i++){

    var digits = nums[i].toString().split('').map(Number);
    var digitSum = 0;
    for (let i = 0; i < digits.length; i++) {
        digitSum += digits[i];
    }   
    nums[i] = digitSum;

}


console.log(Math.min(...nums));
