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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL)
            return head;
        
        if ((head -> next) == NULL)
            return head;
        
        struct ListNode *currNode = head -> next, *tempNode;
        
        head -> next = NULL;
        
        while (currNode != NULL) {
            tempNode = currNode -> next;
            currNode -> next = head;
            head = currNode;
            currNode = tempNode;
        }
        
        return head;
    }
};