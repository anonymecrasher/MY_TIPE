#include "MOD_BIN.h"


void MOD_BIN_inv_table(char tab[], int size)
{
  long i = 0, temp = 0;
  for (i = 0 ; i <= size / 2 ; i++)
    {
      temp = tab[i];
      tab[i] = tab[size - i - 1];
      tab[size - i - 1] = temp;
    }
}

int MOD_BIN_puissance(int x, int y)
{
    // Déclaration des variables
    int compteur, resultat;
 
    compteur = 0;
    resultat = 1;
 
    while (compteur <= y){
        resultat = resultat * x;
        compteur ++;
    }
 
    return resultat;
}

char *MOD_BIN_trad_dec_to_bin(int x){
  char *bin = malloc(32 * sizeof(char));
  
  int n = 0; // variable determinant le nombre de bit du chiffre

  // construction du tableau binaire inversée
  for (int i = 0; i < 32; i++){
    if (x % 2 == 0) bin[i] = 0;
    else bin[i] = 1;
    x = x / 2;
    
    if (x > 0) n++;
  }
  // inversion du tableau
  inv_table(bin, n);
  
  return bin;
}

int *MOD_BIN_trad_bin_to_dec(char *bin){
  int n = 0;
  for (int i = 0; i < 32; i++){
    n = n + MOD_BIN_puissance(2,n);
  }
  return n;
}

char MOD_BIN_H_and(char x,char y){
  if (x == '1' && y == '1') return '1';
  return '0';
}
char MOD_BIN_or(char x,char y){
  if (x == '0' && y == '0') return '0';
  return '1';
}
char MOD_BIN_xor(char x, char y){
  if ((x == '0' && y == '0') || (x == '1' && y == '1')) return '0';
  return '0';
}

char MOD_BIN_not(char x){
  if (x == '0') return '1';
  return '0';
}


