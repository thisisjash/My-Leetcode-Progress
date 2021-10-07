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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)
            return head;
        
        struct ListNode* currNode = head -> next;
        struct ListNode* prevNode = head;
        
        while (currNode != NULL) {
            if (prevNode -> val == currNode -> val) {
                prevNode -> next = currNode -> next;
                currNode = prevNode -> next;
            }
            else {
                prevNode = currNode;
                currNode = currNode -> next;
            }
        }
        
        return head;
    }
};