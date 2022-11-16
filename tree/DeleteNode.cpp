//Delete a node from a singly linked list without having head pointer

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
    void deleteNode(ListNode* node) {
        ListNode* nxtNode = node->next;
        node->val=nxtNode->val;
        node->next=nxtNode->next;
        delete(nxtNode);
    }
};
//constant space solution;
