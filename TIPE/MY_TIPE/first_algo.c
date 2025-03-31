#include "first_algo.h"

int FIRST_ALGO_H_pow(int x,int n){
   if (n == 0) return 1;
   if (n == 1) return x;
   int t = FIRST_ALGO_H_pow(x, n/2);
   else if (n % 2 == 0) 
      return t * t;
   else if (n % 2 == 1)
      return t * t * x
}
int FIRST_ALGO_H_cut(int x){
  return ( x / 10 ) % 1000;
}
int FIRST_ALGO_H_next(int x,int n){
   if (n == 0) return 57;
   return FIRST_ALGO_H_cut(
     FIRST_ALGO_H_pow(33 * n, 4 * n) * FIRST_ALGO_H_pow(x, n) +
     FIRST_ALGO_H_next(x, n-1));
}
