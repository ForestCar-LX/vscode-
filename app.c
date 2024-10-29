#include <stdio.h>
#include <stdlib.h>
#include "cal_num.h"

int main(void)
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    printf("num1+num2 = %d\t\nnum1-num2 = %d\t\n",cal_plus(num1,num2),cal_sub(num1,num2));
    return 0;
}
