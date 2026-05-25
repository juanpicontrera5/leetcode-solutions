#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;

void reverseString(string& str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
}


int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    long long int x;
    cin>>x;

    if(x==0){
        cout << 0 << endl;
    }

    bool neg = false;
    
    if(x < 0){
        neg = true;
    }

    string s = to_string(x);

    reverseString(s);
    if(neg == true){
        s.pop_back();
    }
    string aux = s;
    for(char c: aux){
        if (c == '0'){
            s.erase(0, 1);
        }
        else{
            break;
        }
    }

    if(neg){
        s.insert(0, "-");
    }
    
    long long r = stoll(s);
    
    if(r > 2147483647 or r < -2147483647){
        cout << 0 << endl;
    }
    else {
        cout << r << endl;
    }
    
    return 0;
}