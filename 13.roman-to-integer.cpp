#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    string s;
    cin>>s;

    long long r = 0;

    map<char, int> nums;

    nums['I'] = 1;
    nums['V'] = 5;
    nums['X'] = 10;
    nums['L'] = 50;
    nums['C'] = 100;
    nums['D'] = 500;
    nums['M'] = 1000;

    for(long long unsigned int i=1; i<=s.size(); i++){
        if( nums[ s[i-1] ] < nums[ s[i] ] ){
            r += nums[s[i]] - nums [ s [i-1] ];
            i++;
        }
        else{
            r += nums[s[i-1]];
        }
    }

    cout<<r<<endl;
    
    return 0;
}