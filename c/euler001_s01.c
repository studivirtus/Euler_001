#include <stdio.h>
int main()
{
	int sum = 0;
	int threes = 0;
	int fives = 0;
	int fifteens = 0;
	int cap = 1000;

	for (int i = 0; i < cap; i = i + 3)
	{
		threes = i + threes;
		//printf("%d\n", threes);
	}
	
	for (int i = 0; i < cap; i = i + 5)
	{
		fives = i + fives;
		//printf("%d\n", fives);
	}

	for (int i = 0; i < cap; i = i + 15)
	{
		fifteens = i + fifteens;
		//printf("%d\n", fifteens);
	}

	sum = threes + fives - fifteens;
	printf("%d\n", sum);
	return 0;
}