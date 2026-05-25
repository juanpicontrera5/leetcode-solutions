#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;


vector<vector<int>> ans;

void finder(int i, int n, vector<int>&temp, vector<int>&nums){

    if(i == n){
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    finder (i+1, n, temp, nums);
    temp.pop_back();
    finder(i+1, n, temp, nums);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    

    vector <int> nums;
    vector <int> temp;
    int n = nums.size();
    
    finder(0, n, temp, nums);


    
    return 0;
}