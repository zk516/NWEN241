#include<stdio.h>
char *pa[] = {"12","34","56"};
int m[2][3] = {{1,2,3},{4,5,6}};
int (*ppm)[2][3] = &m;

int main(void){
	printf("sizeof(pa) = %d\n",sizeof(pa));
	printf("sizeof(*pa) = %d\n", sizeof(*pa));
	printf("sizeof(**pa) = %d\n", sizeof(**pa));
	printf("sizeof(ppm)= %d\n", sizeof(ppm));
	printf("sizeof(*ppm) = %d\n", sizeof(*ppm));
	printf("sizeof(**ppm) = %d\n", sizeof(**ppm));
	printf(pa);
}
