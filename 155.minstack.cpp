#include <bits/stdc++.h>

using namespace std;

using ll = long long; using ld = long double;
using vi = vector<int>; using vll = vector<ll>;
using pi = pair<int,int>; using pll = pair<ll,ll>;


const int INF = 1e9;
const ll LINF = 1e18;

class MinStack {

    public:

        vector <pair <int, int>> stack;

        MinStack() {
            
        }
        
        void push(int val) {

            if(stack.empty()){
                stack.push_back({val, val});
            }
            else{
                stack.push_back({val, min(val, stack.back().second)});
            }

        }
        
        void pop() {
            stack.pop_back();    
        }
        
        int top() {
            
            return stack.back().first;

        }
        
        int getMin() {
            return stack.back().second;
        }


};



int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    MinStack minStack;
    
    int x = 0;

    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    x = minStack.getMin(); // return -3
    minStack.pop();
    x = minStack.top();    // return 0
    x = minStack.getMin(); // return -2
    
    
    return 0;
}