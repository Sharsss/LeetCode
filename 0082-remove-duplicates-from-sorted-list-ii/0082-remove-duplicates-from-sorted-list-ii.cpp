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
    ListNode* deleteDuplicates(ListNode* head) {
        map <int,int>mpp;
        ListNode* temp=head;
        if(head==NULL || head->next==NULL)
        return head;
        while(temp !=NULL){ //counting frequency
            mpp[temp->val]++;
            temp=temp->next;
        }
          //base condition 
            while(head!=NULL && mpp[head->val]>1){
                ListNode* temp=head;
                head=head->next;
                delete temp;
             }
        
        ListNode* t = head;
        ListNode* prev = NULL;
        while(t!=NULL){
             if(mpp[t->val]<=1){
            prev=t;
            t=t->next;
            }
            else{
            while(t!=NULL && mpp[t->val]>1){
                ListNode* temp=t;
                t= t->next;
                prev->next=t;
                delete temp;
             }
            }
            }
        return head;
    }
};