#include <stdio.h>
#include <stdlib.h>

int removeElement(int *nums, int numSize, int val)
{
	int i = 0;
	int index = 0;
	
	while (i < numSize)
	{
		if (nums[i] != val)
		{
			nums[index] = nums[i];
			index++;
		}
		i++;
	}
	return (index);
}

int main()
{
	int i = 0;
	int nums[] = {3,2,2,3};
	int numSize = sizeof(nums) / sizeof(nums[0]);

	int result = removeElement(nums, numSize, 3);

	while (i < result)
	{
		printf("%d ", nums[i]);
		i++;
	}
	return (0);

}