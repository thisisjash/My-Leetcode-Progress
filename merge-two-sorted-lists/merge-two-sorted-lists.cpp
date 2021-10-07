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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL && l2 == NULL)
            return l1;
        
        if (l1 == NULL)
            return l2;
        
        if (l2 == NULL)
            return l1;
        
        struct ListNode* currNodel1 = l1, *currNodel2 = l2, *prevNode = nullptr, *tempNode = nullptr;
            
        struct ListNode* ans = ((l1 -> val) <= (l2 -> val)) ? l1 : l2;
        
//        cout << ans -> val;
        
        while (currNodel1 != nullptr && currNodel2 != nullptr) {
            if ((currNodel1 -> val) <= (currNodel2 -> val)) {
                if (prevNode == nullptr) {
                    prevNode = currNodel1;
                    currNodel1 = currNodel1 -> next;
                }
                else {
                    prevNode = currNodel1;
                    currNodel1 = currNodel1 -> next;
                }
            }
            else {
                if (prevNode == nullptr) {
                    tempNode = currNodel2 -> next;
                    prevNode = currNodel2;
                    prevNode -> next = currNodel1;
                    cout << prevNode << endl;
                    cout << currNodel2 << endl;
                    cout << currNodel2 -> next << endl;
                    currNodel2 = tempNode;
                    cout << prevNode -> val << " " << prevNode -> next -> val << endl;
                    cout << currNodel2 << " " << currNodel1;
                }
                else {
                    tempNode = currNodel2 -> next;
                    currNodel2 -> next = prevNode -> next;
                    prevNode -> next = currNodel2;
                    prevNode = currNodel2;
                    currNodel2 = tempNode;
                }
            }
        }
        
        if (currNodel2 != nullptr)
            prevNode -> next = currNodel2;
        
        return ans;
    }
};