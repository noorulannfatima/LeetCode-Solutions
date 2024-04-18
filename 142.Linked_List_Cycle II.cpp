/*
Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously 
following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is 
connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.

Do not modify the linked list.
*/

// Time Complexity: O(n), Space Complexity: O(1)

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        // move both pointers at different speeds
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            // if they meet, there's a cycle
            if(fast == slow){
                // reset one pointer to head and move both at the same speed
                ListNode *ptr = head;
                while(ptr != slow){
                    ptr = ptr->next;
                    slow = slow->next;
                }
                return ptr; // return the start of the cycle
            }
        }
        return NULL; // no cycle found
    }
};
// Time Complexity: O(n), Space Complexity: O(1)