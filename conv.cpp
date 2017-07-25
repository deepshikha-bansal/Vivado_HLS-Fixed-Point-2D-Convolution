#include "conv.h"


void convolution(ap_fixed<word_length, frac_length> b[in_row][in_col],ap_fixed<word_length, frac_length> out[(in_row-ker_row+1)][(in_col-ker_col+1)],ap_fixed<word_length, frac_length> a[ker_row][ker_col])
{
	int r,c,i,j;
	for(r = 0; r < in_row - ker_row + 1; r++)
	{
        for(c = 0; c < in_row- ker_col + 1; c++)
        {
            out[r][c] = 0;
            for( i = 0; i < ker_row; i++)
            {
                for(j = 0; j < ker_col; j++)
                {
                    out[r][c]+=a[i][j]*b[r+i][c+j];
                }
            }
            //out[r][c]= temp1.to_float();
        }
	}
}
