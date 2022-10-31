/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head) {
    //法二：头插法
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



    /*法一
    if(head==NULL||head->next==NULL)//0节点与一个节点的情形
    {
        return head;
    }
    else
    {
        //初始条件
        struct ListNode*n1=NULL;
    struct ListNode*n2=head;
    struct ListNode*n3=head->next;//struct ListNode*n1=NULL,*n2=head,*n3=head->next;
    while(n2!=NULL)//即while(n2),结束条件
    {
        //迭代过程
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