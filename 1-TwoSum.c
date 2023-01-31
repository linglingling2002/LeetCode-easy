给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

你可以按任意顺序返回答案。

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i,j;
    int flag = 0;
    int * num = malloc(sizeof(int) * 2);
    num[0] = 8;
    num[1] = 9;
    for(i = 0; i < numsSize; i++)
    {
        for(j = i + 1; j < numsSize; j++)
        {
            if((nums[i] + nums[j]) ==  target)  //匹配
            {
                int * qet = malloc(sizeof(int) * 2);
                qet[0] = i;
                qet[1] = j;
                *returnSize = 2;
                return qet;
            }
        }
    }
    *returnSize = 0;
    return 0;
}
