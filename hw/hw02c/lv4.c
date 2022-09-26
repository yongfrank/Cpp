#include <stdio.h>
int main()
{
	int score, n, i, A = 0, B = 0, C = 0, D = 0, E = 0;
	printf("input n:");
	scanf("%d", &n);
	printf("Input %d scores(1~100): \n", n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &score);
		printf("Score in hundered is %d the grade is: ", score);
		if (score >= 90)
		{
			putchar('A');
			putchar('\n');
			A++;
		}
		else if (score >= 80)
		{
			putchar('B');
			putchar('\n');
			B++;
		}
		else if (score >= 70)
		{
			putchar('C');
			putchar('\n');
			C++;
		}
		else if (score >= 60)
		{
			putchar('D');
			putchar('\n');
			D++;
		}
		else
		{
			putchar('E');
			putchar('\n');
			E++;
		}
	}
	printf("Percentage: A=%d, B=%d, C=%d, D=%d, E=%d\n", A, B, C, D, E);
	return 0;
}