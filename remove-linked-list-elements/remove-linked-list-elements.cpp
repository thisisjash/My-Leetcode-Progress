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
    ListNode* removeElements(ListNode* head, int num) {
        if (head == NULL)
            return head;
        
        while (head != NULL && (head -> val) == num) {
            head = head -> next;
        }
        
        if (head == NULL)
            return head;
        
        struct ListNode* currNode = head;
        
        while (currNode -> next != NULL) {
            if (currNode -> next -> val == num) {
                currNode -> next = currNode -> next -> next;
            }
            else
                currNode = currNode -> next;
        }
        
        return head;
    }
};