/*
Given the head of a linked list and an integer val, remove all the nodes of the linked list 
that has Node.val == val, and return the new head.
Example 1:
Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]
*/
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Creating dummy head node
        ListNode* dummyNode = new ListNode(-1);
        dummyNode->next = head;
        ListNode* curr = dummyNode;
        
        while(curr->next != NULL){
            if(curr->next->val == val){curr->next = curr->next->next;}
            else {curr= curr->next;}      
        }
    return dummyNode->next;    
    }
};
// Time Complexity: O(n) Space Complexity: O(1)