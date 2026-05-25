var citations = [3,0,6,1,5];
var h=1;
var max = 0;
var r=0;

for (let i = 0; i < citations.length; i++) {
    for (let p = 0; p < citations.length; p++) {
        let element = citations[p];
        if(element >= h){
            max++;
        }
        if(max == h){
            break;
        }
    }
    r=Math.max(max, r);
    max=0;
    h++;
}

console.log(r);







