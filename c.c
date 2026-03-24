#include <stdio.h>

extern void func(void);

void func2(void)
{
	puts("Another program for compilation test.");
}

int main(void)
{
	func();
	func2();

	return 0;
}