#include <stdio.h>

int main()
{

	int a = 5, b, c, d, e, f;
	b = a + 2;
	c = b - a;
	d = a * c;
	e = a / d;
	f = a % d;

	printf("a = %d, b = %d, c = %d\n", a, b, c);
	printf("e = %d, f = %d\n", e, f);
	return 0;
}