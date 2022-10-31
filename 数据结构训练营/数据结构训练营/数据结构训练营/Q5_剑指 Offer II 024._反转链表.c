/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head) {
    //������ͷ�巨
    struct ListNode* newhead = NULL;
    struct ListNode* cur = head;

    while (cur)
    {
        struct ListNode* next = cur->next;
        cur->next = newhead;
        newhead = cur;
        cur = next;

    }
    return newhead;



    /*��һ
    if(head==NULL||head->next==NULL)//0�ڵ���һ���ڵ������
    {
        return head;
    }
    else
    {
        //��ʼ����
        struct ListNode*n1=NULL;
    struct ListNode*n2=head;
    struct ListNode*n3=head->next;//struct ListNode*n1=NULL,*n2=head,*n3=head->next;
    while(n2!=NULL)//��while(n2),��������
    {
        //��������
        n2->next=n1;
        n1=n2;
        n2=n3;
        if(n3!=NULL)
        n3=n3->next;
    }
    return n1;
    }
    */
}