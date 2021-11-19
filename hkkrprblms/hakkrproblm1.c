#include <stdio.h>
int main()
{
  
  int a , b , i;
  printf(" enter the lower value of range\n");
  scanf("%d",&a);
printf(" enter the value of higher value of range");
  scanf("%d", &b);
  
  
  for( i=a , i<b; i++;)
  { 
    switch(i)
 {
   
   case 0:
      printf("zero");
   
   case 1: 
      printf("one\n odd\n");
      break;
if (b==1)
      case 2: 
      printf("two\even\n");
      break;
      if (b==1)
      case 3: 
      printf("three\n odd\n");
      break;
    if (b==1)
    case 4: 
      printf("four\neven\n");
      break;
    if (b==1)
    case 5: 
      printf("five\n odd\n");
      break;
    if (b==1)
    case 6: 
      printf("six\neven\n");
       break;
    
    if (b==1)
      case 7: 
      printf("seven\n odd\n");
       break;
          if (b==1)         
       case 8: 
      printf("eight\n even\n");
      break;
      if (b==8)
      case 9: 
      printf("nine\n odd\n");  
      break;
  
  }
  
 }
  
  
  
 
 
  
 return 0; 
  
}