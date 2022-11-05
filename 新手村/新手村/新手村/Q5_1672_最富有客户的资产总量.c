int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max = 0, i = 0, j = 0;
    for (i = 0; i < accountsSize; i++)
    {
        int num = 0;
        for (j = 0; j < accountsColSize[i]; j++)
        {
            num += accounts[i][j];
        }
        if (num >= max)
            max = num;
    }
    return max;
}