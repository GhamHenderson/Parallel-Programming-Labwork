#include <stdio.h>
#include <stdlib.h>

// Declare Array and function.
int size = 10;
float arr[10];
float funcFloats(float *arr, int size);



int main(){
  
  int j = 0;
  for(j = 0; j < size; j++){
    arr[j] = (float)rand()/(float)(RAND_MAX/5);
  }
  
  float calc  = funcFloats(arr, size);
  printf("Mean of stored float values = %f\n\n", calc);

  return 0;
}

float funcFloats(float *arr, int size){
   int i;
   float sum = 0.0;
   float mean = 0.0;

   for(i = 0; i < size; i++)
   {
      sum = sum + arr[i];
   }
   mean = sum / size;
 
   return mean;
}
