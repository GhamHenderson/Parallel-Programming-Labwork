// This function calculates the sum of the elements of any given array.
// dimension of the array is size.

float sumCalc(float *arr, int size){
  int i = 0;
  float sum = 0.0;
  for(i = 0; i < size; i++)
    {
      sum = sum + arr[i];
    }
  return sum;
}
