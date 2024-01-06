/*using while loop*/
#include <stdio.h>
int main()
{
	int n, a, b, num = 0;

	while (1)
	{
		printf("Enter a Positive Integer To Check For Armstrong : \n");
		scanf("%d", &n);

		a= n;

		while (a != 0)
		{
			b = a % 10;
			num += b*b * b;
			a /= 10;
		}

		if (num == n)
			printf("\n%d Is An Armstrong Number.\n\n", n);
		else
			printf("\n%d Is Not an Armstrong Number.\n\n", n);
	}

	return 0;
}
