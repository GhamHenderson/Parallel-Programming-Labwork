#include <math.h>

float standardDev(int size, float *arr,float mean, float sum){
  int i = 0;
  float dev = 0.0;
  float strdDev;
  float diff;
  
  for(i = 0; i < size; i++){
    diff = arr[i] - mean;
    dev = dev + diff * diff;
    
  }
  
  strdDev = sqrt(dev / size);
  return strdDev;
}
