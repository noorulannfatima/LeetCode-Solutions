/*
Given the head of a singly linked list, group all the nodes with odd indices together followed 
by the nodes with even indices, and return the reordered list.
-> The first node is considered odd, and the second node is even, and so on.
-> Note that the relative order inside both the even and odd groups should remain as it was in the input.
You must solve the problem in O(1) extra space complexity and O(n) time complexity.
Example 1:
Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]
*/

//Time Complexity: O(n), Space Complexity: O(1)

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL) return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        // To maintain even head
        ListNode* evenHead = even;
        while(even != NULL && even->next != NULL){
            // Change pointer for odd list
            odd->next = odd->next->next;
            odd = odd->next;
            // Change pointer for even list
            even->next = even->next->next;
            even = even->next;
        }
        //Assign even list at the end of the odd list
        odd->next = evenHead;
        return head;
    }
};

