/*
You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.
Example 1:
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
*/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p1 = list1;
        ListNode* p2 = list2;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* p3 = dummyNode;

        while (p1 != NULL && p2 != NULL) {
            if (p1->val < p2->val) {
                p3->next = p1;
                p1 = p1->next;
            } else {
                p3->next = p2;
                p2 = p2->next;
            }
            p3 = p3->next;
        }
        // Attach remaining elements of list1, if any
        while (p1 != NULL) {
            p3->next = p1;
            p1 = p1->next;
            p3 = p3->next;
        }
        // Attach remaining elements of list2, if any
        while (p2 != NULL) {
            p3->next = p2;
            p2 = p2->next;
            p3 = p3->next;
        }
        p3->next = NULL; // Terminate the merged list properly
        return dummyNode->next;    
    }
};
//Time Complexity: O(n+m), Space Complexity: O(1)
