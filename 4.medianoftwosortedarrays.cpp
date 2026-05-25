#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    vector <int> nums1 = {1,2};
    vector <int> nums2 = {3,4};
    vector <int> x;

    merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(x));

    //impar
    if(x.size() % 2 != 0){
        int y;
        y = (x.size() / 2);
        cout<<x[y]<<endl;
    }
    //par
    else{
        double a, b;
        a = (x.size() / 2) - 1;
        b = a + 1;

        double r = x[a] + x[b] ;

        cout<<x[a]<<endl;
        cout<<x[b]<<endl;

        cout<< r/2 << endl;
        
    }


    return 0;
}