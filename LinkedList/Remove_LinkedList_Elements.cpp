// https://leetcode.com/explore/learn/card/linked-list/219/classic-problems/1207/

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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return NULL;
        while(head!=nullptr && head->val==val){
            head = head->next;
        }
        ListNode* n = head;
        // ListNode* ans = n;
        while(n != nullptr && n->next!= nullptr){
            if(n->next->val == val){
                n->next = n->next->next;
            }
            else{
            n=n->next;
            }
        }
        return head;
    }
};