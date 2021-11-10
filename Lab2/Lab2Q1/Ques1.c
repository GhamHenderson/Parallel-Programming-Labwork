#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int size = 1000000;
float arr[1000000];
float sumCalc(float *arr,int size);
float meanCalc(int size, float sum);
float standardDev(int size, float *arr, float mean, float sum);

int main(){

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

float meanCalc(int size, float sum){
  float mean = 0.0; 
  mean = sum / size;
  return mean;
}

float sumCalc(float *arr, int size){
  int i = 0;
  float sum = 0.0;
  for(i = 0; i < size; i++)
    {
      sum = sum + arr[i];
    }
  return sum;
}

float standardDev(int size, float *arr,float mean, float sum){
  int i = 0;
  float dev;
  float strdDev;
  
  for(i = 0; i < size; i++){
    dev = dev + (arr[i] - mean)*(arr[i] - mean);
  }
  strdDev = sqrt(dev / size);
  return strdDev;
}
