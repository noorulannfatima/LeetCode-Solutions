/* Given the head of a sorted linked list, delete all duplicates such that each element 
appears only once. Return the linked list sorted as well.
Example 1:
Input: head = [1,1,2]
Output: [1,2]
*/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head){
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* current = head;

        while (current->next != nullptr){
            if (current->val == current->next->val){
                current->next = current->next->next;
            }else{
                current = current->next;
            }
        }
        return head;
    }    
};
//Time Complexity: O(n), Space Complexity: O(1)
