#include <stdio.h>
void printstar(int n)
{
      for (int i=0;i<n;i++)
      {
     printf("%c",'*');

      }
}




int main ()
{
    int num;
    printf("enter 0 for triangular star pattern and 1 for reverse star pattern \n ");
    scanf("%d", &num);
    if(num==0)
    {

  for(int i=0;i<10;i++)
     {
           printstar(i);

           printf("\n");

      }
    }

  else (num==1);
    {

     for(int i=10;i>0;i--)
        {
             printstar(i);
             printf("\n");

         }


    }




    return 0;
}