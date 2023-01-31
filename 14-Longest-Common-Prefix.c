/**
编写一个函数来查找字符串数组中的最长公共前缀。

如果不存在公共前缀，返回空字符串 ""。
**/

char * longestCommonPrefix(char ** strs, int strsSize){
    int i = 0;
    int j = 0;
    int mid = 0;
    int flag = 0;
    char *ret = malloc(sizeof(char) * 200);
    int strlength[200] = {0};               //二维数组中每一行的长度
    ret[0] = '\0';

    for(i = 0; i < strsSize; i++)
    {
        j = 0;
        while(strs[i][j] != '\0')
        {
            j++;
        }
        strlength[i] = j;
    }

    for(i = 0; i < strsSize - 1; i++)       //对数组从小排序，找到最短长度
    {
        for(j = i + 1; j < strsSize; j++)
        {
            if(strlength[i] > strlength[j])
            {
                mid = strlength[i];
                strlength[i] = strlength[j];
                strlength[j] = mid;
            }
        }
    }
  
    mid = strlength[0];     //mid为最短字符长度
  
    for(j = 0; j < mid; j++)
    {
        for(i = 0; i < strsSize - 1; i++)
        {
            if(strs[i][j] != strs[i + 1][j])
            {
                printf("break!\n");
                flag = 1;
                break;
            }
        }
      
        if(flag == 0)
        {
            ret[j] = strs[i][j];
            printf("ret[j] = %c\n", ret[j]);
        }
        ret[j + 1] = '\0';
      
        if(flag == 1)
        {
            break;
        }
    }
    return ret;
}
