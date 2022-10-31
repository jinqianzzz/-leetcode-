/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    //˼·����ͷ��ʼ���ȽϺ�С���Ǹ�β�嵽�µĵ�����
    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;//����ָ��tail����β��
    if (list1 == NULL)//��һ�������ǿ����������
        return list2;
    if (list2 == NULL)
        return list1;
    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            if (tail == NULL)
            {
                head = list1;
                tail = list1;
            }
            else
            {
                tail->next = list1;
                tail = tail->next;
            }
            list1 = list1->next;
        }
        else
        {
            if (tail == NULL)
            {
                head = list2;
                tail = list2;
            }
            else
            {
                tail->next = list2;
                tail = tail->next;
            }
            list2 = list2->next;
        }
    }
    if (list1 == NULL)
        tail->next = list2;
    if (list2 == NULL)
        tail->next = list1;
    return head;
}