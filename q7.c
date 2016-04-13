#include <stdio.h>

void swap_ptr(int *p1,int *p2);
int main(void)
{
    int p = 11, q = 22;
    int *ptrp = &p, *ptrq = &q;
    int **ppp = &ptrp, **ppq = &ptrq;
    swap_ptr(ppp,ppq); /* &ptrp, &ptrq passed */
    printf("first = %d\n",*ptrp);
    printf("second = %d\n", *ptrq);
    /* to swap_ptr() */
    return 0;
}
void swap_ptr(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
