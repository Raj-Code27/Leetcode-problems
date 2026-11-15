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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head->next;
        ListNode* curr=head;
        int sum=0;
        while(temp!=NULL){
            if (temp->val!=0){
                sum+=temp->val;
            }
            else{
                curr->val=sum;
                curr->next=temp->next;

                curr=curr->next;
                sum=0;
            }
            temp=temp->next;

        }
        return head;
    }
};