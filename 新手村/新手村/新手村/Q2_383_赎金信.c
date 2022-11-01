bool canConstruct(char* ransomNote, char* magazine) {
    int i = 0, j = 0;
    int magazineSize = strlen(magazine);
    for (i = 0; *(ransomNote + i); i++)//从ransomNote的第一个字符开始与 magazine的所有字符进行对照，如果magazine中存在对应字符，则将该字符改为非小写英文字母，防止重复。
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