#include <stdio.h>
#include <stdlib.h>

/*
Static Array
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

int removeDuplicates(int *nums, int numSize)
{
	int index;
	int i;

	index = 0;
	i = 0;
	while (i < numSize)
	{
		if (i == 0 || nums[i] > nums[i-1])
		{
			nums[index] = nums[i];
			index++;
		}
		i++;
	}
	return index;
}

/*
int main()
{
	int nums[] = {1,1,2};
	int numSize = sizeof(nums) / sizeof(nums[0]);
	int i = 0;
	int j = 0;

	int newNums = removeDuplicates(nums, numSize);
	while (i < newNums)
	{
		printf("%d ", nums[i]);
		i++;
	}

	printf("\n");

	while (j < numSize)
	{
		printf("%d ", nums[j]);
		j++;
	}
}
*/