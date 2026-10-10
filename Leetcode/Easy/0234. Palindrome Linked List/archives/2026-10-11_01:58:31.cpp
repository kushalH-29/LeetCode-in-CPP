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
    bool isPalindrome(ListNode* head) {
        ListNode* first = head;
        ListNode* second = head;
        while(second != nullptr && second->next != nullptr){
            first = first->next;
            second = second->next->next;
        }

        ListNode* prev = nullptr;
        ListNode* curr = first;
        while(curr != nullptr){
            ListNode* nextNode = curr->next;
            curr->next  = prev;
            prev = curr;
            curr = nextNode;
        }
        ListNode* left = head;
        ListNode* right = prev;

        while (right != nullptr) {
            if (left->val != right->val) {
                return false;
            }

            left = left->next;
            right = right->next;
        }

        return true;
    }
};

// TC->O(n)
// SC->o(1)