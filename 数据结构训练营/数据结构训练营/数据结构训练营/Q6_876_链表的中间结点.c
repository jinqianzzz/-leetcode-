/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head) {
    //����ָ�뷨
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (1)
    {
        if (fast == NULL || fast->next == NULL)//fast->next==NULLΪ�������ڵ㣬fast==NULLΪż�����ڵ�
        {
            return slow;
        }

        fast = fast->next->next;
        slow = slow->next;
    }
}