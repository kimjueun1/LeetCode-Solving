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
        return check(head, head);
    }
    bool check(ListNode* &head, ListNode* p) {
        if(!p) return true;
        bool isPalin = check(head, p->next) & (head->val == p->val);
        head=head->next;
        return isPalin;
    }
};