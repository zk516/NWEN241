#include <stdio.h>

int a[3] = {11,22,33};
int *pa = a;
int main(void){
	printf("%d\n",*a);
	printf("%d\n",*(a+2));
	printf("%d\n",*pa);
	printf("%d\n",pa[1]);
	printf("%d\n",a);
	printf("%d\n",a+2);
}
