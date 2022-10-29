int maxAscendingSum(int* nums, int numsSize) {
    int total = nums[0], i = 0, result = nums[0];//子数组是一个一个连着的，初始化为第一个子数列的第一个元素
    for (i = 1; i < numsSize; i++)
    {
        if (nums[i - 1] < nums[i])
            total += nums[i];//如果下一个元素在同一个子数列内，则加上
        else
            total = nums[i];//total==下一个子数列的第一个元素
        if (total > result)
            result = total;
    }

    return result;
}