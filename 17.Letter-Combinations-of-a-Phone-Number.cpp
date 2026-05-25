#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //digits can be 4
    map<int, string> m;
    m[2] = "abc";
    m[3] = "def";
    m[4] = "ghi";
    m[5] = "jkl";
    m[6] = "mno";
    m[7] = "pqrs";
    m[8] = "tuv";
    m[9] = "wxyz";
    set<string> r;
    //for every position on the array were having a full combination 
    string digits = "";
    cin >> digits;
    if(digits.size() == 1){
        string a = m[digits[0] - '0'];
        for(int i=0; i<a.size(); i++){
            string y = "";
            y.push_back(a[i]);
            r.insert(y);
        }
    }
    else if(digits.size() == 2){
        //for 2 digits
        string a = m[ digits[0] - '0' ];
        string b = m[ digits[1] - '0' ];
        for(int i=0; i<a.size(); i++){
            for(int j=0; j<b.size(); j++){
                string y = "";
                y.push_back(a[i]);
                y.push_back(b[j]);
                r.insert(y);
            }  
        }
    }
    else if(digits.size() == 3){
        string a = m[ digits[0] - '0' ];
        string b = m[ digits[1] - '0' ];
        string c = m[ digits[2] - '0' ];
        for(int i=0; i<a.size(); i++){
            for(int j=0; j<b.size(); j++){
                for(int k=0; k<c.size(); k++){
                    string y = "";
                    y.push_back(a[i]);
                    y.push_back(b[j]);
                    y.push_back(c[k]);
                    r.insert(y);
                }  
            }       
        }
    }
    // worst case
    else{
        string a = m[ digits[0] - '0' ];
        string b = m[ digits[1] - '0' ];
        string c = m[ digits[2] - '0' ];
        string d = m[ digits[3] - '0' ];
        for(int i=0; i<a.size(); i++){
            for(int j=0; j<b.size(); j++){
                for(int k=0; k<c.size(); k++){
                    
                    for(int m=0; m<d.size(); m++){
                        string y = "";
                        y.push_back(a[i]);
                        y.push_back(b[j]);
                        y.push_back(c[k]);
                        y.push_back(d[m]);
                        r.insert(y);
                    }
                }
            }   
        }
    }

    vector<string> result;
    
    for(string s: r){
        result.push_back(s);
    }

    
    return 0;
}