#include<stdio.h>
int main()
{
	int arr[8], i, j, count, n;
	for (i = 0; i < 8; ++i)
	{
		scanf("%d", &arr[i]);
	}
	i = 0;
	j = 1;
	count = 1;
	n = 0;
	while (arr[i] != '\0')
	{
		while (arr[j] != '\0')
		{
			if (i != j)
			{
				if (arr[i] == arr[j])
				{
					count++;
				}
			}
			j++;
		}
		if (count == 1)
		{
			printf("%d\n", arr[i]);
			n++;
		}
		if (n == 2)
			break;
		count = 1;
		i++;
		j = 0;
	}

	return 0;
}