#include<stdio.h>
#include<stdlib.h>

int main() 
{
   int i = 0;
   float sum = 0;
   float mean = 0;
   float x = (float)rand()/(float)(RAND_MAX/10);
   int array[10];
   

   for(i;i<10;i++){
     array[i] = i + x;
     sum = sum + array[i];
   }
   
   mean = (sum / 10);
   
   printf("%f \n\n", mean);

   return 0;
 }
