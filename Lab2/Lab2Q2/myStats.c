// This is the main driver program which generates a million floating point
// numbers and stores them in an array.
// it then calculates the mean and standard deviation of these numbers.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "myStats.h"


int main(){

  int size = 1000000;
  float arr[size];
  srand((unsigned int)time(NULL));
  int j = 0;
  for(j = 0; j < size; j++){
      arr[j] = ((float)rand()/(float)(RAND_MAX)) * 9.0 + 1;
    }

  float sum = sumCalc(arr, size);
  float  mean = meanCalc(size,sum);
  float standardDevCalc = standardDev(size,arr,mean,sum);
  printf("Mean of stored float values = %f\n\n", mean);
  printf("Standard Deviation is = %f\n\n", standardDevCalc);
  return 0;
}
