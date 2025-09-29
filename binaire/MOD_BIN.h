#ifndef MOD_BIN_H
#define MOD_BIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Inverse les bits d'un tableau binaire (complément à 1)
void MOD_BIN_inv_table(char tab[], int size);

// Calcul de la puissance (x^y) pour des entiers
int MOD_BIN_puissance(int x, int y);

// Conversion d'un nombre décimal en binaire sous forme de chaîne de caractères
char *MOD_BIN_trad_dec_to_bin(int x);

// Conversion d'un binaire (sous forme de chaîne de caractères) en décimal
int MOD_BIN_trad_bin_to_dec(char *bin);

// Opération AND bit-à-bit entre deux caractères (bits)
char MOD_BIN_and(char x, char y);

// Opération OR bit-à-bit entre deux caractères (bits)
char MOD_BIN_or(char x, char y);

// Opération XOR bit-à-bit entre deux caractères (bits)
char MOD_BIN_xor(char x, char y);

// Négation bit-à-bit d'un caractère (complément à 1)
char MOD_BIN_not(char x);

// Décalage à gauche d'un caractère (bitwise shift left)
char MOD_BIN_shift_left(char x, int n);

// Décalage à droite d'un caractère (bitwise shift right)
char MOD_BIN_shift_right(char x, int n);

// Met à 0 un bit à une position spécifique
void MOD_BIN_clear_bit(char *x, int position);

// Met à 1 un bit à une position spécifique
void MOD_BIN_set_bit(char *x, int position);

// Inverse un bit à une position spécifique
void MOD_BIN_flip_bit(char *x, int position);

// Vérifie si un bit à une position donnée est à 1
int MOD_BIN_check_bit(char x, int position);

// Masquage de bits pour isoler certains bits
char MOD_BIN_mask_bits(char x, char mask);

// Conversion d'un nombre entier à n bits (réduit modulo 2^n)
char MOD_BIN_mod_n_bits(char x, int n);

// Rotation à gauche (bitwise rotation left)
char MOD_BIN_rotate_left(char x, int n);

// Rotation à droite (bitwise rotation right)
char MOD_BIN_rotate_right(char x, int n);

// Compte le nombre de bits à 1 dans un nombre (poids de Hamming)
int MOD_BIN_count_bits_1(char x);

// Vérifie si un nombre est pair
int MOD_BIN_is_even(char x);

// Vérifie si un nombre est impair
int MOD_BIN_is_odd(char x);

#endif
