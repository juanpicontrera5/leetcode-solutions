let prices = [1,2,3,4,5]
//usaremos two pointers
let l = 0;
let r = 1;
let maxProfit = 0;
while (r <= prices.length) {
    let profit = prices[r] - prices[l];
    
    if(profit > 0){
        maxProfit+=profit;
        l=r
        r++;
    }
    else{
        l=r;
        r++;
    }
}

console.log(maxProfit);
