#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    string s = "";

    cin >> s;

    set<char> y;

    int cont = 0, contmax = 0;

    for(long long unsigned i=0; i<s.size(); i++){

        for(char c: s){
            y.insert(c);
            cont++;
            if(cont != (int)y.size()){
                break;
            }
        }
        
        contmax = max(contmax, (int)y.size());
        s.erase(0, 1);
        y.clear();
        cont = 0;

    }
    
    cout<<contmax<<endl;

    return 0;
}