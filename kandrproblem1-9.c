#include <stdio.h>
/* this solves the problem of creating a program that counts lines tabs and blanks(spaces), this question
is found in the K&R book know as the C programming language by the two creators of the C
programming language and the Unix system*/
int main()
{
	int c, nl, nt, ns;
	nl = 0;
	nt = 0;
	ns = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++nl;
		if (c == '\t')
			++nt;
		if (c == ' ')
			++ns;
	}

		printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", ns, nt, nl);
}