#include "sudoku_gen.h"

int **init(void){
  int **mat = malloc(16 * sizeof(int *));
  for (int i = 0; i < 16; i++){
    mat[i] = malloc(16 * sizeof(int));
  }
  return mat;
}




int **basis_feed(**mat){
  mat[54][87] = 80;
  mat[28][55] = 91;
  mat[77][3] = 9;
  mat[88][65] = 10;
  mat[7][3] = 31;
  mat[4][73] = 65;
  mat[96][78] = 19;
  mat[5][63] = 27;
  mat[22][30] = 56;
  mat[44][15] = 23;
  mat[4][16] = 27;
  mat[15][80] = 77;
  mat[12][16] = 64;
  mat[62][1] = 14;
  mat[35][41] = 69;
  mat[24][94] = 86;
  mat[49][36] = 99;
  mat[11][48] = 32;
  mat[43][75] = 84;
  mat[23][37] = 79;
  mat[26][73] = 61;
  mat[13][12] = 86;
  mat[77][73] = 63;
  mat[95][59] = 5;
  mat[68][80] = 58;
  mat[47][97] = 5;
  mat[82][95] = 3;
  mat[80][1] = 91;
  mat[35][36] = 61;
  mat[7][27] = 26;
  mat[41][55] = 19;
  mat[52][93] = 1;
  mat[76][51] = 17;
  mat[2][10] = 27;
  mat[65][96] = 100;
  mat[56][3] = 32;
  mat[23][29] = 49;
  mat[40][9] = 39;
  mat[100][75] = 79;
  mat[1][19] = 47;
  mat[18][72] = 3;
  mat[4][75] = 15;
  mat[24][86] = 76;
  mat[58][38] = 88;
  mat[3][52] = 93;
  mat[98][80] = 69;
  mat[35][16] = 25;
  mat[45][6] = 88;
  mat[24][28] = 60;
  mat[83][37] = 7;
  mat[87][89] = 96;
  mat[60][92] = 36;
  mat[10][48] = 49;
  mat[1][12] = 72;
  mat[4][67] = 43;
  mat[68][15] = 17;
  mat[64][13] = 71;
  mat[18][47] = 72;
  mat[15][13] = 83;
  mat[26][52] = 79;
  mat[66][91] = 70;
  mat[38][22] = 17;
  mat[50][37] = 87;
  mat[29][72] = 5;
  mat[39][29] = 75;
  mat[38][81] = 33;
  mat[14][13] = 65;
  mat[83][22] = 30;
  mat[77][5] = 32;
  mat[13][53] = 14;
  mat[93][42] = 52;
  mat[77][20] = 24;
  mat[49][82] = 50;
  mat[62][52] = 10;
  mat[12][29] = 59;
  mat[34][56] = 94;
  mat[5][12] = 30;
  mat[76][44] = 74;
  mat[95][9] = 84;
  mat[24][79] = 47;
  mat[77][54] = 5;
  mat[4][47] = 98;
  mat[64][63] = 49;
  mat[55][18] = 46;
  mat[54][88] = 22;
  mat[67][55] = 23;
  mat[100][10] = 72;
  mat[19][55] = 93;
  mat[32][15] = 59;
  mat[100][57] = 53;
  mat[52][52] = 66;
  mat[98][72] = 99;
  mat[50][98] = 69;
  mat[82][75] = 64;
  mat[92][29] = 28;
  mat[68][27] = 64;
  mat[66][28] = 5;
  mat[32][52] = 56;
  mat[47][15] = 82;

