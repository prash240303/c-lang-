#include <stdio.h>


int main()
{
  char input;
  float kmstomiles= 0.62;
  float inchestofoot= 0.08;
  float cmstoinches=0.39;
  float poundtokgs=0.45;
  float inchestometers=0.0245;
  float first, second;
  
  
  
    
    printf("enter the input character \n q to quit \n 1.kms to miles\n 2.inches to foot\n 3. cms to inches\n 4. pounds to kgs\n 5. inches to meters \n");
    scanf("%c", &input);
    
    
    switch(input)
    {
      
      case 'q' :
       printf("quitting the program..");
       goto end;
       break;
       
      case '1':
        printf("enter the quantity in terms of kms\n");
        scanf("%f ", &first); 
        second = first* kmstomiles;
        printf("%f kms is eaual to %3f miles \n ", first, second);
        break;
      
      case '2':
        printf("enter the quantity in terms of inches\n");
        scanf("%f",&first);
        second=first*inchestofoot;
        printf("%f inches is equal to %f foot\n", first , second);
        
      case '3':
       printf("enter the quantity in terms of cms\n");
        scanf("%f",&first);
        second=first*cmstoinches;
        printf("%f cms is equal to %3f inches\n", first , second);
         
         
      case '4' :
         printf("enter the quantity in terms of pounds\n");
        scanf("%f",&first);
        second=first*poundtokgs;
        printf("%f pounds is equal to %3f foot\n", first , second);
        

           
      case '5' :
         printf("enter the quantity in terms of inches\n");
        scanf("%f",&first);
        second=first*inchestometers;
        printf("%f inches is equal to %3f meters\n", first , second);
        
      
      
      
      
      
      
      
      
      
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
  
    
    
    
  
  
  
  
  
  
  
  
  end:
  
  
  
  
  
  
  
  
  return 0;
}