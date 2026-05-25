#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;

const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n, k;
    cin>>n>>k;
    
    int r = 0;

    for(int i=0; i<n; i++){
      
      bool kgood = true;
      string a;
      getline(cin>>ws, a);

      for(int j=0; j<=k; j++){
        char target = static_cast<char>(j);
        int x = count(a.begin(), a.end(), target);
        if(x == 0){
          kgood = false;
          break;
        }
      }


      if(kgood) r++;

    }
    
    cout<<r<<endl;

    return 0;
}
