/*
Given head, the head of a linked list, determine if the linked list has a cycle in it.
-> There is a cycle in a linked list if there is some node in the list that can be reached again by continuously 
following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is 
connected to. Note that pos is not passed as a parameter.
-> Return true if there is a cycle in the linked list. Otherwise, return false.
*/
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Approach: Using Floyd Warshall Alogorithm (Hare and Tortoise Algorithm).
        // slow and a fast pointer
        ListNode* fastPtr = head;
        ListNode* slowPtr = head;
        while(slowPtr!= NULL && fastPtr != NULL && fastPtr->next !=NULL){
            // Move both pinters
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            //If they meet, means we found a loop
            if(slowPtr == fastPtr){
                return true;
            }
        }
        return false;  
    }
};
//  Time Complexity: O(N) and  Space Complexity: O(1) by using Floyd's tortoise and Hare