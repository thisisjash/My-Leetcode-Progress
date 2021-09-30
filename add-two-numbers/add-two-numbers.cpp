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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        struct ListNode* head;
        struct ListNode* itr1;
        int temp, carry = 0, trigger = 0;
        
        ListNode* itr = new ListNode ();
        
        head = itr;
        itr1 = head;
        
        while (l1 != NULL && l2 != NULL) {
            temp = (l1 -> val) + (l2 -> val) + carry;
            
            if (temp > 9) {
                carry = 1;
                temp %= 10;
                itr -> val = temp;
                itr -> next = new ListNode ();
            }
            else {
                carry = 0;
                temp %= 10;
                itr -> val = temp;
                itr -> next = new ListNode ();
            }
            
            cout << temp;

            l1 = l1 -> next;
            l2 = l2 -> next;
            itr = itr -> next;
        }
        
        cout << "*" << carry;
        
        while (l1 != NULL) {
            trigger = 1;
            
            temp = (l1 -> val) + carry;
            
            if (temp > 9) {
                carry = 1;
                temp %= 10;
                itr -> val = temp;
                itr -> next = new ListNode ();
            }
            else {
                carry = 0;
                temp %= 10;
                itr -> val = temp;
                itr -> next = new ListNode ();
            }
            
            cout << temp;

            l1 = l1 -> next;
            itr = itr -> next;
        }
        
        
        while (l2 != NULL) {
            trigger = 1;
            
            temp = (l2 -> val) + carry;
            
            if (temp > 9) {
                carry = 1;
                temp %= 10;
                itr -> val = temp;
                itr -> next = new ListNode ();
            }
            else {
                carry = 0;
                temp %= 10;
                itr -> val = temp;
                itr -> next = new ListNode ();
            }
            
            cout << temp;

            l2 = l2 -> next;
            itr = itr -> next;
        }
        

        while (itr1 -> next != NULL) {
            if (itr1 -> next -> next == NULL) {
                itr1 -> next = NULL;
                break;
            }
            itr1 = itr1 -> next;
        }
        
        if (l1 == NULL && l2 == NULL && carry) {
            itr1 -> next = new ListNode (1);
        }
        cout << endl;
        
        return head;
    }
};