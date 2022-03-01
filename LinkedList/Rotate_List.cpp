// https://leetcode.com/explore/learn/card/linked-list/213/conclusion/1295/

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0) return head;
        int length = 1;
        ListNode* tail = head;
        
        while(tail->next != NULL){
            length++;
            tail = tail->next;
        }
        
        tail->next = head;
        int rotatePoint = length - k % length;
        
        tail = head;
        while(rotatePoint-- > 1){
            tail = tail->next;
        }
        head = tail->next;
        tail->next = NULL;
        
        return head;
    }
};