#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;
//al final no hizo falta el main map lol 

const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin>>t;
    
    vector <int> nums(t);

    for(int i=0; i<t; i++){
        cin>>nums[i];
    }

    int target; cin>>target;

    map<int, int> m;

    map<int, vector<int>> rev; //reverse values for the first map

    auto hint = m.end();
    for (int i = 0; i < nums.size(); i++) {
        int val = nums[i];
        // main map
        hint = m.emplace_hint(hint, i, val);
        //reverse map 
        rev[val].push_back(i);
    }

    vector<int> x;
    vector<int> r;

    if(rev.count(target)){
        for(int i: rev[target]){
            x.push_back(i);
        }
        r.push_back(x[0]);
        r.push_back(x[x.size()-1]);
    }
    else{  
        r.push_back(-1);
        r.push_back(-1);
    }
    



    return 0;
}