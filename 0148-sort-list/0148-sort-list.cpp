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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        vector<int>a;
        while(temp!=NULL){
            a.push_back(temp->val);
            temp=temp->next;
        }
        sort(a.begin(),a.end());
        ListNode* t=head;
        int i=0;
        while(t!=NULL){
            if(t->val!=a[i]){
                t->val=a[i];
            } 
            i++;
            t=t->next;
          }
    
    return head;
    }
};