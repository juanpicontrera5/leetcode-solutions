#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;
//using the two pointer strategy
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    
    int k=2;

    for(int i=2; i<nums.size(); i++){
        if(nums[i] != nums[k-2]){
            nums[k] = nums[i];
            k++;
        }
    }
    
    return 0;
}