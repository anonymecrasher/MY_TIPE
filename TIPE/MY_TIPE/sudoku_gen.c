#include "sudoku_gen.h"

int **init(void){
  int **mat = malloc(4 * sizeof(int *));
  for (int i = 0; i < 16; i++){
    mat[i] = malloc(4 * sizeof(int));
  }
  return mat;
}

int **basis_feed(**mat){
  mat[1][2] = 1;
  mat[3][3] = 2;
  mat[0][1] = 4;
}
  

