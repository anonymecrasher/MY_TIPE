#include "first_algo.h"

void main(void){
  int x = 49;
  for (int i = 0; i < 100;i++){
     x  = FIRST_ALGO_H_next(x);
     printf("%d \n", x);
  }
}

