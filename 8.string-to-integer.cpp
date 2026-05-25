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
    getline(cin, s);

    string r = "";

    bool num = false;
    bool neg = false;
    bool zero = false;
    //to have a good string
    for(char c: s){


        if(c == ' ' and r.size() == 0){
            continue;
        }
        else if((c == '-' and neg == false and r.size() == 0))
        {
            r.push_back(c);
            neg = true;
        }
        else if(c == '+' and neg == false and r.size() == 0){
            r.push_back(c);
            neg = true;
        }
        else if(c=='0' and num == false and zero == false){
            r.push_back(c);
            zero = true;
        }
        else if(c=='0' and num == false and zero == true){
            continue;
        }
        else if((!isdigit(c) and num == true) or (!isdigit(c) and r.size()==0)){
            break;
        }
        else if(!isdigit(c) and neg == true){
            break;
        }
        // else if((c == '-' and neg == false and r.size() == 0) or (c == '+' and neg == false and r.size() == 0))
        // {
        //     r.push_back(c);
        //     neg = true;
        // }

        // else if((!isdigit(c) and num == true) or (!isdigit(c) and r.size()==0) or (!isdigit(c) and neg == true)){
        //     break;
        // }

        else {
            r.push_back(c);
            num = true;
        } 
    }

    if(r.size() == 0 or (r[0] == '-' and r.size() == 1) or (r[0] == '+' and r.size() == 1) ){
        cout<<0<<endl;
    }    
    else if(r.size() > 11 and r[0] == '-'){
        cout<<-2147483647<<endl;
    }
    else if(r.size() > 11){
        cout<<2147483647<<endl;
    }

    else{
        long long int x;
        x = stoll(r);
        if(x >= 2147483648){
            cout<<2147483648<<endl;
        }
        else if(x <= -2147483648){
            cout<<-2147483648<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
    
    return 0;
}