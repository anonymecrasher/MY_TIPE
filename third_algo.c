#include "third_algo.h"

bool THIRD_ALGO_H_xor(bool b1, bool b2){
  if (b1 || b2) {return (!(b1 && b2)) } return false;
}

int THIRD_ALGO_H_shift(int nb, int dec){
  if (dec == 0) return nb;
  if (dec < 0) {
    for (int i = 0; i < (0-dec); i++){
      nb = nb / 2;
    }
  }
  else {
    for (int i = 0; i < dec; i++){
      nb = nb * 2;
    }
  }
  return nb;
}

int THIRD_ALGO_H
