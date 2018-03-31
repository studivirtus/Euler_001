#include <stdio.h>
int main()
{
	int sum = 0;
	int threes = 0;
	int fives =0;
	int i = 0;

	for (i = 0; i < 1000; i++)
	{
		threes = i%3;
		fives = i%5;
		if ( threes ==0)
		{
			sum = sum + i;
		}
		else if( fives == 0)
		{
			sum = sum + i;
		}
		//printf("%d\n", sum);
	}
	printf("%d\n", sum);
	return 0;
}
