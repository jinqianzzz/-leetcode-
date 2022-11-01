/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* res = (int*)malloc(numsSize * sizeof(int));
    int i = 0, j = 0;
    for (i = 0; i < numsSize; i++)
    {
        res[i] = 0;
        for (j = 0; j <= i; j++)
            res[i] += nums[j];
    }
    *returnSize = numsSize; // 结果数组长度与输入数组长度一致
    return res;
}