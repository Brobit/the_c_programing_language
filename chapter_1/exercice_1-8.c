#include <stdio.h>

int main ()
{
	int c, nl, nb, nt;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
			++nl;
		if (c == ' ')
			++nb;
		if (c == '\t')
			++nt;
		printf("%d\t%d\t%d\n", nl, nb, nt);
	}
}
