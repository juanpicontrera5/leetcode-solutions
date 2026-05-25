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

        bool a, b, c;
        a = b = c = false;

        for(int i=0; i<s.size(); i++){

            if(s[i] == '('){
                if(i+1 >= s.size()){
                    cout<<" false "<<endl;
                }
                else if(s[i+1] == ')'){
                    i++;
                }
                else{
                    a = true;
                }
            }

            else if(s[i] == '['){
                if(i+1 >= s.size()){
                    cout<<" false "<<endl;
                }
                else if(s[i+1] == ']'){
                    i++;
                }
                else{
                    b = true;
                }
            }

            else if(s[i] == '{'){
                if(i+1 >= s.size()){
                    cout<<" false "<<endl;
                }
                else if(s[i+1] == '}'){
                    i++;
                }
                else{
                    c = true;
                }
            }

            else if(s[i] == ')'){

                if(a and b or a and c){
                    cout<< " false "<<endl;
                }
                else{
                    a = false;
                }

            }

            

        }
        
        cout<< " true "<<endl;
    
    return 0;
}