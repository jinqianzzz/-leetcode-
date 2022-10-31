/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head) {
    //快慢指针法
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (1)
    {
        if (fast == NULL || fast->next == NULL)//fast->next==NULL为奇数个节点，fast==NULL为偶数个节点
        {
            return slow;
        }

        fast = fast->next->next;
        slow = slow->next;
    }
}