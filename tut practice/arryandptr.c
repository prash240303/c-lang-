#include <stdio.h>
int main ()
{
int arr[]={1,2,3,4,5,6,9,8};

printf("the value of third element of the array is %d\n", arr[3]);
printf("the adress of frist element of the array is %d\n", &arr[0]);
printf("the adress of 4th element of the arry is %d\n", &arr[3]);


printf("the value of frist element of the array is %d\n", *&arr[0]); //dereferencing thearry
printf("the value at adress of frist element of the array is %d\n", *arr); 
printf("the value at adress of frist element of the array is %d\n", *(&arr[0])); 
printf("the value at adress of frist element of the array is %d\n", *((&arr)+1)); //PROBLEM
 

















    
    return 0;
}