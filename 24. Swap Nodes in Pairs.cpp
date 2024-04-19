/*
Given a linked list, swap every two adjacent nodes and return its head. 
You must solve the problem without modifying the values in the list's nodes 
(i.e., only nodes themselves may be changed.)
Example 1:
Input: head = [1,2,3,4]
Output: [2,1,4,3]
*/

// Time Complexity: O(n), Space Complexity: O(1)

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // create a dummy node
        ListNode* dummy = new ListNode(0); // Make sure to initialize with a value
        dummy->next = head;
        ListNode* point = dummy;
        // Ensure that swaping nodes are not null
        while(point->next != NULL && point->next->next != NULL){
            // Identify nodes to swap
            ListNode* swap1 = point->next;
            ListNode* swap2 = point->next->next;
            // swapping
            swap1->next = swap2->next;
            swap2->next = swap1;
            point->next = swap2;
            // prepare for next swap
            point = swap1; // Move point to the node after the swapped pair
        }
        return dummy->next;
    }
};

