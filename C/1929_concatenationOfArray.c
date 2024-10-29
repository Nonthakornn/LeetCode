#include <stdio.h>
#include <stdlib.h>

//Dynamic Array

int *getConcatenation(int *nums, int numsSize, int *returnSize) {
	int i;
    int *ans;

	i = 0;
	ans = malloc((numsSize * 2) * sizeof(int));
	if (!ans)
		return (NULL);
	while (i < numsSize)
	{
		ans[i] = nums[i];
		ans[i + numsSize] = nums[i];
		i++;
	}
    *returnSize = numsSize * 2;
    return ans;
}


int main()
{
	int nums[] = {1,2,1};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int returnSize; //Store the size of the new array
	int i = 0;

	int *result = getConcatenation(nums, numsSize, &returnSize);
	while (i < returnSize)
	{
		printf("%d ", result[i]);
		i++;
	}
	free(result);
}
