#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    vi nums = {4,5,6,7,0,1,2};
    int target = 0;

    map<int, int> rev; //again de reverse values

    //populate the fot

    for(int i=0; i<nums.size(); i++){
        rev[nums[i]] = i;
    }

    int i = -1;

    if(rev.count(target)){
        i = rev[target];
    }
    
    cout<<i<<endl;

    return 0;
}