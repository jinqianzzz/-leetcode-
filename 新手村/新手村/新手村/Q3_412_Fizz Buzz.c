/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    int i = 0;
    char** res = (char**)malloc(sizeof(char*) * n);
    for (i = 1; i < n + 1; i++)
    {
        res[i - 1] = (char*)malloc(sizeof(char) * 10);//学习给二维数组开辟空间
        if ((i % 3 == 0) && (i % 5 == 0))
            strcpy(res[i - 1], "FizzBuzz");
        else if (i % 3 == 0)
            strcpy(res[i - 1], "Fizz");
        else if (i % 5 == 0)
            strcpy(res[i - 1], "Buzz");
        else
            sprintf(res[i - 1], "%d", i);
    }
    *returnSize = n;
    return res;
}