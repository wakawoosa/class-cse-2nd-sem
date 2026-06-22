#include <stdio.h>

int main(){
	int x = 20;
	int *p;
	p = &x;
	printf("%d\n", x);
	printf("%d\n", *p);
	printf("%d\n", p);
	printf("%p\n", p);
	*p = 30;
	printf("%d\n", p);
    printf("%p\n", p);
	return 0;
}
