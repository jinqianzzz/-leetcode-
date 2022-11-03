/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* detectCycle(struct ListNode* head) {
    struct ListNode* slow = head;//����ָ�뷨
    struct ListNode* fast = head;
    //�軷�������L������C��������ڵ�������meet��X��fast��slow�ٶȵ�����
    //���������̣���fast�����ڻ���ת��һȦ�����������������������fastת��NȦ�������
    //slow·��:L+X
    //fast·��:L+N*C+X
    //�ֿ�ָ���·������ָ����������Ӷ����Խ�����ʽ
    //2��L+X)=L+N*C+X  ����N-1)*C+(C-X)=L
    //(C-X)�Ǵ�������meet���������
    //���ۣ�һ��ָ���meet�㿪ʼ�ߣ�һ��ָ�������ʼ��
    //���ǻ�����ڵ����� 
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