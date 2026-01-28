// https://leetcode.com/problems/partition-list/description/

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
    ListNode* partition(ListNode* head, int x) {
        // create dummy nodes for small and large LL
        ListNode* small = new ListNode(0);
        ListNode* large = new ListNode(0);

        ListNode* temp = head;

        ListNode* smallHead = small;
        ListNode* largeHead = large;

        while(temp != NULL){
            if(temp->val < x){
                // small list
                smallHead->next = temp;
                smallHead = smallHead->next;
            }
            else{
                // large list
                largeHead->next = temp;
                largeHead = largeHead->next;
            }
            temp = temp->next;
        }

        largeHead->next = NULL; // last element to become NULL
        smallHead->next = large->next; // connect hoth nodes

        return small->next; // return the value as the small contains dummy value so we return small->next
   
    }
};