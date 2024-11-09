#include <stdbool.h>
#include <stdio.h>

bool isAnagram(char *s, char *t)
{
	//Creat an array of 26 ints and set them all to zero
	int hash[26] = {0};
	int i = 0;

	while (s[i])
	{
		int index;
		
		index = s[i] - 'a';
		hash[index]++;
		i++;
	}

	i = 0;

	while (t[i])
	{
		int index;
		
		index = t[i]  - 'a';
		hash[index]--;
		i++;
	}

	i = 0;
	while (i < 26)
	{
		if (hash[i])
			return false;
		i++;
	}
	return true;
}

int main()
{
	char *s = "rat";
	char *t = "car";

	printf("%d", isAnagram(s, t));
}
