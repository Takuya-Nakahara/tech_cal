#include<stdio.h>
#include<math.h>

int main(){

  double x = 5, new_x;
  double w = 0.000000001;

  while(1){
    new_x = x - (((2*x-1)*(2*x-1) - 5) / (4*(2*x - 1)));

    if(fabs(new_x - x) < w*fabs(new_x)){
      break;
    }
    x = new_x;
    printf("%.10f\n", x);
  }

  printf("%.10f\n", x);

  return 0;

}
