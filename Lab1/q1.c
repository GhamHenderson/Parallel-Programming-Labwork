#include<stdio.h>   

int main() 
 { 
   int i = 0;
   int sum = 0;
   int mean = 0;
   int array[10];

   for(i;i<10;i++){
     array[i] = i + 1;
     sum = sum + array[i];
   }
   
   mean = (sum / 10);
   printf("The mean is = %d \n\n", mean);

   return 0;
 }

