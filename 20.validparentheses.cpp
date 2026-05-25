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
            p.push(c);
        }
        
        bool a, b, c;
        a = b = c = false;

        while(!p.empty()){

            char x;
            x = p.top();

            if(x == ')'){
                a = true;
                p.pop();
            }
            else if (x == ']'){
                b = true;
                p.pop();
            }
            else if(x == '}'){
                c = true;
                p.pop();
            }
            else if (x == '(' and b or x == '(' and c or x == '(' and !a){
                
                p.pop();
                if(p.empty()) cout<<" false "<<endl;
                else{
                    char m = p.top();
                    if(m != '('){
                        cout<<" false "<<endl;
                    }
                    else{
                        a = false;
                    }
                }

            }
            else if (x == '[' and a or x == '[' and c or x == '[' and !b){
                p.pop();
                if(p.empty()) cout<<" false "<<endl;
                else{
                    
                    char m = p.top();
                    if(m != '['){
                        cout<<" false "<<endl;
                    }
                    else{
                        b = false;
                    }
                }
            }
            else if (x == '{' and b or x == '{' and a or x == '{' and !c){
                p.pop();
                if(p.empty()) cout<<" false "<<endl;
                
                else{

                    char m = p.top();
                    if(m != '{'){
                        cout<<" false "<<endl;
                    }
                    else{
                        c = false;
                    }
                }
            }
            else{
                if(x == '('){
                    a = false;
                    p.pop();
                }
                else if (x == '['){
                    b = false;
                    p.pop();
                }
                else if(x == '{'){
                    c = false;
                    p.pop();
                }
                else{
                    p.pop();
                }
            }
        }

        cout<<"true"<<endl;
    
    return 0;
}