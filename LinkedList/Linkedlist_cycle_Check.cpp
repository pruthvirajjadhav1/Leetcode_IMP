// https://leetcode.com/explore/learn/card/linked-list/214/two-pointer-technique/1212/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        ListNode *slow = head, *fast = head;
        
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) 
                return true;
        }
        
        return false;
    }
};

//**** USING MAP ****//

// ListNode* current = head;
//         map<ListNode* , bool> hash;
//         while(current != NULL){
//             if(hash.find(current) != hash.end())
//                 return true;
//             else
//                 hash[current] = true;
//             current = current->next;
//         }
//         return false;
//     }