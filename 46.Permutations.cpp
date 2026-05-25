#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    vector<vector<int>> permute;
    
    int i = 0, n = 3;
    vector <int> nums(3);
    nums = {1, 2, 3};

    sort(nums.begin(), nums.end());
    // the first permutation
    do {
        permute.push_back(nums);
    }
    while (next_permutation(nums.begin(), nums.end()));
    // complexity = O(n! * m)
    
    return 0;
}