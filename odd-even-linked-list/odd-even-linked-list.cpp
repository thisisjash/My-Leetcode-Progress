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
    ListNode* oddEvenList(ListNode* head) {
        if (! head)
            return head;
        
        ListNode *temp1 = head, *temp2, *head2 = head -> next, *temp3 = head;
        int cnt = 1;
        
        while (temp1 -> next != NULL) {
            if (cnt & 1)
                temp3 = temp1;
            temp2 = temp1 -> next;
            temp1 -> next = temp2 -> next;
            temp1 = temp2;
            cnt++;
        }
        
        if (temp3 -> next == NULL)
            temp3 -> next = head2;
        else
            temp3 -> next -> next = head2;
        
        return head;
    }
};