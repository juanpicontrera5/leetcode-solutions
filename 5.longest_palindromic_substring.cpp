#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;

int main() {

        ios_base::sync_with_stdio(false); cin.tie(NULL);
        
        string longest = "";
        string s = "";
        cin>>s;
        string mismo = s;

        reverse(mismo.begin(), mismo.end());

        if(mismo == s){
            cout<< s << endl;
        }
        else if(s.size() == 2){
            s.pop_back();
            cout<< s << endl;
        }
        else if(s.size() == 3){

            if(s[0] == s[1]){
                s.pop_back();
                cout<< s << endl;
            }
            else{
                s.erase(0, 1);
                cout<< s << endl;
            }

        }
        else{

            for(int i=1; i<s.size(); i++){

                string aux = "";

                //para impar (letra en el centro)
                if(s[i-1] == s [i+1]){

                    aux.push_back(s[i]);
                    int x = i-1;
                    int y = i+1;

                    if(y<=s.size() and x>=0){

                        while(true){

                            if(s[x] == s[y]){
                                aux.insert(0, 1, s[x]);
                                aux.push_back(s[y]);
                            }
                            else{
                                break;
                            }
                            if(x==0 or y>=s.size()){
                                break;
                            }
                            else{
                                x--;
                                y++;
                            }
                        }
                    }
                    
                }
                
                if(aux.size() > longest.size()) longest = aux;
                //para par (dos letras)
                aux = "";
                if(s[i] == s[i+1]){
                    aux.push_back(s[i]);
                    aux.push_back(s[i]);

                    int x = i-1;
                    int y = i+2;

                    if(y<=s.size() and x>=0){
                    
                        while(true){
                            
                            if(s[x] == s[y]){
                                aux.insert(0, 1, s[x]);
                                aux.push_back(s[y]);
                            }
                            else{
                                break;
                            }
                            
                            if(x==0 or y>=s.size()){
                                break;
                            }
                            else{
                                x--;
                                y++;
                            }   
                        }   
                    }
                }

                if(aux.size() > longest.size()) longest = aux;

            }

        }   

        cout<< longest << endl;

    return 0;
}   