/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* detectCycle(struct ListNode* head) {
    struct ListNode* slow = head;//快慢指针法
    struct ListNode* fast = head;
    //设环外的链表长L，环长C，环的入口到相遇点meet长X，fast是slow速度的两倍
    //若环大，链短，则fast可能在环中转了一圈就相遇，若链长环短则可能fast转了N圈后才相遇
    //slow路程:L+X
    //fast路程:L+N*C+X
    //又快指针的路程是慢指针的两倍，从而可以建立等式
    //2（L+X)=L+N*C+X  即（N-1)*C+(C-X)=L
    //(C-X)是从相遇点meet到环的入口
    //结论：一个指针从meet点开始走，一个指针从链表开始走
    //他们会在入口点相遇 
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            struct ListNode* meet = fast;
            while (head != meet)
            {
                head = head->next;
                meet = meet->next;
            }
            if (head == meet)
                return head;
        }

    }
    return NULL;
}