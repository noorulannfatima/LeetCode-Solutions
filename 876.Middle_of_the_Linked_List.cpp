/*
Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.
Example 1:
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow_ptr = head;
        ListNode* fast_ptr = head;
        while(fast_ptr != nullptr && fast_ptr->next != nullptr){
            // slow ptr moves one node
            slow_ptr = slow_ptr->next;
            // fast ptr moves two node
            fast_ptr = fast_ptr->next->next;
        }
        return slow_ptr;   
    }
};

// Using Hare and Tortoise Alogorithm

//Time Complexity: O(n) Space Complexity: O(1)

