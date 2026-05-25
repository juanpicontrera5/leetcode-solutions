#include <bits/stdc++.h>

using namespace std;

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    bool isPalindrome(int x) {

        string num = to_string(x);
        string num2 = num;
        reverse(num2.begin(), num2.end());

        if(num == num2){
            return true;
        }
        else{
            false;
        }
        return 0;
    }
};