#include "conv.h"
float in[28][28]
 ={{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.329412,0.725490,0.623529,0.592157,0.235294,0.141176,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.870588,0.996078,0.996078,0.996078,0.996078,0.945098,0.776471,0.776471,0.776471,0.776471,0.776471,0.776471,0.776471,0.776471,0.666667,0.203922,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.262745,0.447059,0.282353,0.447059,0.639216,0.890196,0.996078,0.882353,0.996078,0.996078,0.996078,0.980392,0.898039,0.996078,0.996078,0.549020,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.066667,0.258824,0.054902,0.262745,0.262745,0.262745,0.231373,0.082353,0.925490,0.996078,0.415686,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.325490,0.992157,0.819608,0.070588,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.086275,0.913726,1.000000,0.325490,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.505882,0.996078,0.933333,0.172549,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.231373,0.976471,0.996078,0.243137,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.521569,0.996078,0.733333,0.019608,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.035294,0.803922,0.972549,0.227451,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.494118,0.996078,0.713726,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.294118,0.984314,0.941177,0.223529,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.074510,0.866667,0.996078,0.650980,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.011765,0.796079,0.996078,0.858824,0.137255,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.149020,0.996078,0.996078,0.301961,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.121569,0.878431,0.996078,0.450980,0.003922,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.521569,0.996078,0.996078,0.203922,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.239216,0.949020,0.996078,0.996078,0.203922,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.474510,0.996078,0.996078,0.858824,0.156863,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.474510,0.996078,0.811765,0.070588,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
{0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000},
};
float ker[5][5] ={
{0.259264,-0.196560,-0.168830,0.084633,-0.033654},
{0.079059,-0.238199,-0.329217,-0.091233,0.256316},
{0.057170,0.037326,-0.140716,0.113865,0.325062},
{-0.238917,0.106611,0.138647,-0.027733,-0.051474},
{0.026139,-0.155223,0.100708,-0.169381,0.029830},
};
int main()
{
	float c[(in_row-ker_row+1)][(in_col-ker_col+1)];
	ap_fixed<word_length, frac_length> b[in_row][in_col];
	ap_fixed<word_length, frac_length> a[ker_row][ker_col];
	ap_fixed<word_length, frac_length> out[(in_row-ker_row+1)][(in_col-ker_col+1)];
	int i,j;
	for (i=0;i<in_row;i++)
	{
	    	for (j=0;j<in_col;j++)
	    	{
	    		b[i][j]=in[i][j];
	    	}
	 }
	for (i=0;i<ker_row;i++)
	{
		for (j=0;j<ker_col;j++)
	    	{
	    		a[i][j]=ker[i][j];
	    	}
	 }
	convolution(b,out,a);
    for (i=0;i<(in_row-ker_row+1);i++)
    {
    	for (j=0;j<(in_col-ker_col+1);j++)
    	{
    		c[i][j]=out[i][j].to_float();
    	}
    }
    printf("}\n");
	printf("float out[%d][%d]= { \n",(in_row-ker_row+1),(in_col-ker_col+1));
    for (i=0;i<(in_row-ker_row+1);i++)
    {
    	printf("{");
    	for (j=0;j<(in_col-ker_col+1);j++)
    	{
    		printf("%f,",c[i][j]);
    	}
    	printf("},\n");
    }
    printf("}\n");
}