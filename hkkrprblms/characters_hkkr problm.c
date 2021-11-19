#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{ char ch;
 char s[100];
 char sen[100];
 
 printf("enter a charachter\n");
 scanf("%c",&ch);
 printf("enter a sting ");
 scanf("%s",&s);
 
 scanf("\n");

 scanf("%[^\n]%*s",sen);
 
 
 printf("%c\n",ch);
 printf("%s\n", s);
 printf("%s", sen);
    
    return 0;
}