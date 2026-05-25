#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
        stack <char> p;

        string s;
        cin>>s;

        for(char c: s){
            if(p.empty()){
                p.push(c);
            }
            else{
                char x = p.top();
                if(c == '(' or c=='[' or c=='{'){
                    p.push(c);
                }
                else{
                    if(c == ')' and x == '('){
                        p.pop();
                    }
                    else if(c == ']' and x == '['){
                        p.pop();
                    }
                    else if(c == '}' and x == '{'){
                        p.pop();
                    }
                    else{
                        p.push(c);
                    }
                    
                }

            }
        }
        
        if(p.empty()){
            cout<<" true "<<endl; 
        }
        else{
            cout<<" false "<<endl;
        }
        
    
    return 0;
}