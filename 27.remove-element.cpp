#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;

    int k = 0;
    for(int i=0; i<nums.size(); i++){
        if (nums[i] != val){
            nums[k] = nums[i];
            k++;
        } 
    }

}