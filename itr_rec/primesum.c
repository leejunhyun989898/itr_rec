#include <stdio.h>
#include <stdlib.h>

int pr(int n)
{
	for (int i = 2; i < n; i++) {
		if (n % i == 0 || n < 2)return 0;
	}
	return 1;
}

int main()
{
	int sum = 0;
	for (int j = 2; j <= 100; j++)
	{
		if (pr(j))
		{
			sum += j;
		}
	}
	printf("소수의 합: %d\n", sum);
}