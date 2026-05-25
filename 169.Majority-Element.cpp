#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    vector<int> nums = {2,2,1,1,1,2,2};

    int majority = nums.size() / 2;

    sort(nums.begin(), nums.end());

    int r = 1;

    for(int i=1; i<nums.size(); i++){
        
        if(nums[i] == nums[i-1]){
            r++;
            if( r > majority ){
                cout<<nums[i-1]<<endl;
            }
        }
        else{
            r=1;
        }

    }

    
    return 0;
}