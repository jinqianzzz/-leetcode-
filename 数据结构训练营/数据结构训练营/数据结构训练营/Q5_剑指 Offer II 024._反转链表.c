/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL)//0�ڵ���һ���ڵ������
    {
        return head;
    }

    else if (head->next->next == NULL)//�����ڵ������
    {
        struct ListNode* n1 = head->next;
        n1->next = head;
        head->next = NULL;
        return n1;
    }

    else
    {
        //��ʼ����,n1,n2����ָ�����ָ��ķ�ת��n3��¼��һ��ָ���λ��
        struct ListNode* n1 = NULL;
        struct ListNode* n2 = head;
        struct ListNode* n3 = head->next;//struct ListNode*n1=NULL,*n2=head,*n3=head->next;
        while (n2 != NULL)//��while(n2),��������
        {
            //��������
            n2->next = n1;
            n1 = n2;
            n2 = n3;
            if (n3 != NULL)
                n3 = n3->next;
        }
        return n1;
    }

}