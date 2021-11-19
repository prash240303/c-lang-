#include <stdio.h>
int fib_recursive(int n)


{
    if (n==0 || n==1)
    {
       return (n-1);
    }



else 

{
return (fib_recursive(n-1)+fib_recursive(n-2));

}
 

}
;

int main ()
{
    int number;
printf("enter the index of the fibonacci series\n");

scanf("%d",number);

printf("%d",fib_recursive(number));

    return 0;
}
