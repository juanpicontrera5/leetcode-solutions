#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int m;
    cin>>m;
    vector <int> nums(m);

    for(int i=0; i<m; i++){
        cin >> nums[i];
    }

    set <int> n;

    for(int x : nums) {
        if (n.insert(x).second == false) {
            cout << x << endl;
            break;
        }
    }
    
    return 0;

}