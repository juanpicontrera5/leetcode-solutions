#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    vector<int> nums = {1,3,5,6};
    int target; cin>>target;

    auto it = find(nums.begin(), nums.end(), target);

    if(it != nums.end()){

        int a = 0, b = nums.size()-1;
        while (a <= b) {
            int k = (a+b)/2;
                if (nums[k] == target) {
                    cout<<k<<endl;
                }
                if (nums[k] > target) b = k-1;
                else a = k+1;
        }

    }
    else{

        nums.push_back(target);
        sort(nums.begin(), nums.end());
        int a = 0, b = nums.size()-1;
        while (a <= b) {
            int k = (a+b)/2;
                if (nums[k] == target) {
                    cout<<k<<endl;
                }
                if (nums[k] > target) b = k-1;
                else a = k+1;
        }

    }
    
    return 0;
}