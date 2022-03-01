// https://leetcode.com/explore/learn/card/linked-list/213/conclusion/1227/

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
        ListNode* temp = new ListNode(0);
        ListNode* new_node = temp;
        
        while(l1 != NULL && l2 != NULL){
            if(l1->val < l2->val){
                new_node->next = l1;
                l1 = l1->next;
            }
            else{
                new_node->next = l2;
                l2 = l2->next;
            }
            new_node = new_node->next;
        }
        
        if(l1 != NULL){
            new_node->next = l1;
            l1 = l1->next;
        }
        
        if(l2 != NULL){
            new_node->next = l2;
            l2 = l2->next;
        }
        
        return temp->next;

    }
};