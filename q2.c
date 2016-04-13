#include <stdio.h>
int m[4][4] = {{1,3,5,7},{11,33,55,77},{2,4,6,8},{22,44,66,88}};
int (*parr)[4] = m;

int main(void){
printf("**m = %d\n",**m);
printf("*(*m+2) = %d\n",*(*m+2));
printf("*(*(m+1)+1) = %d\n",*(*(m+1)+1));
printf("*(m[1]+2) = %d\n",*(m[1]+2));
printf("(*(m+2))[3] = %d\n",(*(m+2))[3]);
printf("(*(parr+3))[2] = %d\n",(*(parr+3))[2]);
printf("*(m+1) = %d\n",*(m+1));
printf("m[1] = %d",m[1]);
}
