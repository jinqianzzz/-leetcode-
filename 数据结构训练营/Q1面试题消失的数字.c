/*Q1:面试题 17.04. 消失的数字*/
int missingNumber(int* nums, int numsSize) {
    int x = 0;
    int i = 0;


    for (i = 0; i < numsSize; i++)
    {
        x ^= nums[i];
    }
    for (i = 0; i <= numsSize; i++)
    {
        x ^= i;
    }
    return x;
}