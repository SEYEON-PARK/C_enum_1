#include <stdio.h>

enum number {
	one, two, three, four, five
};

int main(void)
{
	enum number a;
	a = three;
	printf("���� %d�Դϴ�.\n", a+1);

	return 0;
}