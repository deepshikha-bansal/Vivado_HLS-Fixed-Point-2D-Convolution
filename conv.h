#include <stdio.h>
#include <ap_fixed.h>
#define in_row 28
#define in_col 28
#define ker_row 5
#define ker_col 5
#define word_length 32
#define frac_length 16

void convolution(ap_fixed<word_length, frac_length> b[in_row][in_col],ap_fixed<word_length, frac_length> out[(in_row-ker_row+1)][(in_col-ker_col+1)],ap_fixed<word_length, frac_length> a[ker_row][ker_col]);
