/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL)//0节点与一个节点的情形
    {
        return head;
    }

    else if (head->next->next == NULL)//两个节点的情形
    {
        struct ListNode* n1 = head->next;
        n1->next = head;
        head->next = NULL;
        return n1;
    }

    else
    {
        //初始条件,n1,n2两个指针进行指针的翻转，n3记录下一个指针的位置
        struct ListNode* n1 = NULL;
        struct ListNode* n2 = head;
        struct ListNode* n3 = head->next;//struct ListNode*n1=NULL,*n2=head,*n3=head->next;
        while (n2 != NULL)//即while(n2),结束条件
        {
            //迭代过程
            n2->next = n1;
            n1 = n2;
            n2 = n3;
            if (n3 != NULL)
                n3 = n3->next;
        }
        return n1;
    }

}