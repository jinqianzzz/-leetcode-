int maxAscendingSum(int* nums, int numsSize) {
    int total = nums[0], i = 0, result = nums[0];//��������һ��һ�����ŵģ���ʼ��Ϊ��һ�������еĵ�һ��Ԫ��
    for (i = 1; i < numsSize; i++)
    {
        if (nums[i - 1] < nums[i])
            total += nums[i];//�����һ��Ԫ����ͬһ���������ڣ������
        else
            total = nums[i];//total==��һ�������еĵ�һ��Ԫ��
        if (total > result)
            result = total;
    }

    return result;
}