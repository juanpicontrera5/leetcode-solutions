/**
 * Definition for singly-linked list.
 */

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        string x = "";
        string y = "";

        while(l1!=NULL){
            x.push_back(l1->val + '0');
            l1 = l1 -> next;
        }
        while(l2!=NULL){
            y.push_back(l2->val + '0');
            l2 = l2 -> next;
        }

        // reverse(x.begin(), x.end());
        // reverse(y.begin(), y.end());
        
        if(x.size() < y.size()){
            swap(x, y);
        }

        int n=x.size(), m=y.size();

        int i=0, j=0;
        int carry = 0;
        while(i<n and j<m){
            carry += (x[i] - '0') + (y[i] - '0');
            x[i] = '0'+(carry%10);
            carry/=10;
            i++, j++;
        }

        while(i<n){
            carry+=(x[i] - '0');
            x[i] = '0' + (carry%10);
            carry/=10;
            i++;
        }
        while(carry){
            x.push_back('0' + (carry%10));
            carry/=10;
        }

        while(x.size() and x.back() == '0'){
            x.pop_back();
        }

        if(x.size() == 0 or x[0] == 0){

            ListNode* head = new ListNode(0);
            ListNode* tail = head;

            ListNode* newNode = new ListNode(0);
            tail->next = newNode;
            tail = tail->next;

            ListNode* answerList = head->next;

            return answerList;
        }

        ListNode* head = new ListNode(0);
        ListNode* tail = head;
        
        for (char c : x) {

            long long unsigned int val = c - '0';

            ListNode* newNode = new ListNode(val);
            tail->next = newNode;
            tail = tail->next;
        }

        ListNode* answerList = head->next;

        return answerList;

    }
};