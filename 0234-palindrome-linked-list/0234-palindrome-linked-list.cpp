/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        vector<int> check;
        vector<int> check1;

        while(temp){
            check.push_back(temp->val);
            check1.push_back(temp->val);
            temp=temp->next;
        }
        reverse(check1.begin(),check1.end());
        return check1==check;
         
         
        
    }
};