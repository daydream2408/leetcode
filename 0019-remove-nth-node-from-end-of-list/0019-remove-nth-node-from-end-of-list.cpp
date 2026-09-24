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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp= head;

        int len=1;

        while(temp->next!=nullptr){
            temp=temp->next;
            len++;
        }
        
        ListNode* curr= head;

        for(int i=0; i<(len-n); i++){
            curr=curr->next;
        }

        if(curr==head){
            head=curr->next;
            curr->next=nullptr;
           // delete curr;

        }

       else  if(curr->next==nullptr){

            ListNode* prev=head;
             for(int i=0; i<(len-n-1); i++){
                prev=prev->next;
              }

              prev->next=nullptr;
            
        }

        else{
             ListNode* prev=head;
             for(int i=0; i<(len-n-1); i++){
                prev=prev->next;
              }

              prev->next=curr->next;
              curr->next=nullptr;
        }

return head;
    }
};