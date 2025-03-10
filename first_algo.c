#include "first_algo.h"

int FIRST_ALGO_H_carre(int x){
   return x * x;
}
int FIRST_ALGO_H_cut(int x){
  return ( x / 10 ) % 100;
}
int FIRST_ALGO_H_next(int x){
  return FIRST_ALGO_H_cut(FIRST_ALGO_H_carre(x));
}
