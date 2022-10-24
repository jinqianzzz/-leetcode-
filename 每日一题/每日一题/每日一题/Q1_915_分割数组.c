#include <stdio.h>
int partitionDisjoint(int* nums, int numsSize) {

    int i = 0;
    int max = nums[0];//记录遍历过去的最大值，当遇到值小于leftmax时，才会赋给leftmax，否则可能直接属于right数组
    int leftmax = nums[0];
    int index = 0;
    for (i = 1; i < numsSize; i++)
    {
        if (nums[i] >= leftmax && nums[i] >= max)//注意此处还要大于原来的max
        {
            max = nums[i];
        }
        if (nums[i] < leftmax)
        {
            index = i;
            leftmax = max;
        }
    }
    return index + 1;
}
int main(void)
{
    int nums[] = { 24,11,49,80,63,8,61,22,73,85 };
    int numsSize = 10;
    printf("%d",partitionDisjoint(nums, numsSize));
    return 0;
}