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
    int numRows = 0;

    cin>>s;
    cin>>numRows;

    int aux = 0;
    
    if(numRows == 1){
        cout<<s<<endl;
    }
    else{

        vector<string> z (numRows);

            
        bool cambio = false;

        for(int i=0; i<s.length(); i++){
            
            if(cambio == false){
                z[aux].push_back(s[i]);
                if(aux == numRows-1){
                    cambio = true;
                    aux--;
                    continue;
                }
                aux++;
            }

            else{
                z[aux].push_back(s[i]);
                if(aux == 0){
                    cambio = false;
                    aux++;
                    continue;
                }
                aux--;
            }
        }
        string x = "";
        
        for(int i=0; i<z.size(); i++){
            x+=z[i];
        }
        
        cout<<x<<endl;
    }
    
    return 0;
}
