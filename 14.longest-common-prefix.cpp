#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    vector <string> strs;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        string aux;
        cin>>aux;
        strs.push_back(aux);
    }

    if(strs.size() == 1){
        cout<<strs[0]<<endl;
    }

    string palabra = strs[0];
    string r = "";
    int x = 0;

    for(char c: palabra){
        
        bool encontro = false;

        for(int i=1; i<strs.size(); i++){

            if( strs[i][x] == c ){
                encontro = true;
            }
            else{
                encontro = false;
                break;
            }

        }

        if(encontro){
            r.push_back(c);
        }
        else{
            break;
        }

        x++;

    }

    cout<<r<<endl;
    
    return 0;
}