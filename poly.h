#ifndef POLY_H
#define POLY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct etat;
// initialisation de tout les polynome
int **init_all_p(void);


// evaluation of the polynom in x
int eval(int *p, int n, int x);

// update wich p
void u_p(int **all_p,int **p,int i);

// generate a number and  update wich polynome
int generator(void);


#endif POLY_H
