bool canConstruct(char* ransomNote, char* magazine) {
    int i = 0, j = 0;
    int magazineSize = strlen(magazine);
    for (i = 0; *(ransomNote + i); i++)//��ransomNote�ĵ�һ���ַ���ʼ�� magazine�������ַ����ж��գ����magazine�д��ڶ�Ӧ�ַ����򽫸��ַ���Ϊ��СдӢ����ĸ����ֹ�ظ���
    {
        for (j = 0; j < magazineSize; j++)
        {
            if (*(ransomNote + i) == *(magazine + j))
            {
                *(magazine + j) = '1';
                break;
            }
            if (j == magazineSize - 1 && *(ransomNote + i) != *(magazine + j))
                return false;
        }
    }
    return true;
}