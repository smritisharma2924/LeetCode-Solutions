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
    ListNode* mergeTwo(ListNode *head1, ListNode *head2) {
        ListNode *dummy = new ListNode(0);
        ListNode *head = dummy, *curr = head;
        while (head1 && head2) {
            if (head1->val <= head2->val) {
                curr->next = head1;
                head1 = head1->next;
            }
            else {
                curr->next = head2;
                head2 = head2->next;
            }
            curr = curr->next;
        }
        if (head1) curr->next = head1;
        if (head2) curr->next = head2;
        return head->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) return NULL;
        ListNode *head = lists[0];
        for (int i=1 ; i < lists.size() ; i++) {
            head = mergeTwo(head, lists[i]);
        }
        return head;
    }
};