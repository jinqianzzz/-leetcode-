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
    *returnSize = numsSize; // ������鳤�����������鳤��һ��
    return res;
}