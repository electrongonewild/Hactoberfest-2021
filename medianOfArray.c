#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
  int array[6] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(array) / sizeof(array[0]);
  float median = 0;

  if((n % 2) == 1){
     median = (float)array[(n / 2) - 1];
  }else{
     median = (((float)(array[(n / 2)]) + (float)(array[(n / 2) - 1])) / 2);
  }

  printf("%0.2f\n", median);

  return 0;
}
