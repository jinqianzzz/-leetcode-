int removeElement(int* nums, int numsSize, int val) {
    int src = 0;
    int dst = 0;
    while (src < numsSize)
    {
        if (nums[src] != val)//����ָ�뷨
        {
            nums[dst++] = nums[src++];
        }
        else
            src++;
    }
    return dst;
}