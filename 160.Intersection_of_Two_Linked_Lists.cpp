/*
Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. 
If the two linked lists have no intersection at all, return null.
->Note that the linked lists must retain their original structure after the function returns.
Example 1:
Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
Output: Intersected at '8'
*/
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p1 = headA;
        ListNode* p2 = headB;
        if(p1==NULL || p2 == NULL) return NULL;
        while(p1!=NULL && p2!=NULL && p1!=p2){
            p1 = p1->next;
            p2 = p2->next;

            if(p1==p2){
                return p1;
            }
            if(p1==NULL) p1 = headB;
            if(p2==NULL) p2 = headA;
        }
        return p1;
    }
};
//Time Complexity: O(m+n) Space Complexity: O(1)

