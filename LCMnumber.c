#include<stdio.h>
#include<conio.h>

int main()
{   
    int num1, num2, maxnum;
    printf("program to find LCM of two number \n");
    printf("enter the first number :");
    scanf("%d",&num1);
    printf("enter the second number : ");
    scanf("%d",&num2);

    maxnum = (num1 > num2) ? num1 : num2;

   while (1)
    {
        if (maxnum % num1 == 0 && maxnum % num2 == 0)
        {
            printf("the LCM of %d and %d is = %d ",num1,num2, maxnum);
            break;
        }
        ++maxnum;
    }
    
return 0;
}