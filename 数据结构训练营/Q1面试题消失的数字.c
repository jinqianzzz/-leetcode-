/*Q1:������ 17.04. ��ʧ������*/
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