#include <stdio.h>

int main(void)
{
	int start, end, res = 0;
	int temp;
	
	do{
		printf("Start size: ");
		scanf("%d", &start);
	} while(start<9);
	do{
		printf("End size: ");
		scanf("%d", &end);
	} while(end<start);
	
	while(start<end)
	{
		temp = start;
		start += temp/3;
		start -= temp/4;
		res++;
	}

	printf("Years: %d\n", res);
	return 0;
}