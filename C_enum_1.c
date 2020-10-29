#include <stdio.h>

enum number {
	one, two, three, four, five
};

int main(void)
{
	enum number a;
	a = three;
	printf("숫자 %d입니다.\n", a+1);

	return 0;
}
