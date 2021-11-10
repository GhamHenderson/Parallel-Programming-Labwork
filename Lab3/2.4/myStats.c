// This is the main driver program which takes in 3 arguments then
// the program generates a million floating point
// numbers and stores them in an array.
// it then calculates the mean and standard deviation of these numbers.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "myStats.h"
#include <string.h>

//argv[1] is the name of the program
//argv[2] is 1000000
//argv[3] is lower bound
//argv[4] is upper bound

int main(int argc, char *argv[]){

  srand((unsigned int)time(NULL));

  // Check Arguments are valid 
  if(argc!=4 ){
    printf("Error Please pass 3 arguments \n\n");
    return -1;
  }
  
  else if(argc==4) {
    
      //Declare Variables so it will run once there is enough arguments
      int j = 0;
      int size = (int)atoi(argv[1]);
      float arr[size];
      float lowBound = (float)atoi(argv[2]);
      float highBound = (float)atoi(argv[3]);
      
      // for Loop to Create Random NUmbers and insert into an Array.
      for(j = 0; j < size; j++){ 
        arr[j] = ((float)rand()/(float)(RAND_MAX)) * (highBound -lowBound) + lowBound;
      }

      //Calculate Sum and  Mean and store result
      float sum = sumCalc(arr,size);
      float mean = meanCalc(size,sum);

      printf("The Mean of the Numbers is %f \n ", mean);

      //Store Result of Standard Deviation
      standardDev(size,arr,mean,sum);

      // End Program By Returning an int.
      return 0;
  }
}
