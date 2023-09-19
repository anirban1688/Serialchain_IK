#include<cmath>
#include<iostream>
#include "6rik.h"
using namespace std;

int main()
{
	double alpha[6], d[6], a[6];
	double u,v,w,p,q,r;

	meu1=sin(alp1);
	meu2=sin(alp2);
	meu3=sin(alp3);
	meu4=sin(alp4);
	meu5=sin(alp5);
	meu6=sin(alp6);
	lam1=cos(alp1);
	lam2=cos(alp2);
	lam3=cos(alp3);
	lam4=cos(alp4);
	lam5=cos(alp5);
	lam6=cos(alp6);

	double meu[]={meu1,meu2,meu3,meu4,meu5,meu6};
	double lam[]={lam1,lam2,lam3,lam4,lam5,lam6};

	u = (mx*meu6+nx*lam6);
	v = (my*meu6+ny*lam6);
	w = (mz*meu6+nz*lam6);

	p = (-lx*a6 - ((mx*meu6+nx*lam6)*d6) + px);
	q = (-ly*a6 - ((my*meu6+ny*lam6)*d6) + py);
	r = (-lz*a6 - ((mz*meu6+nz*lam6)*d6) + pz);

	double u_r[]={u,v,w,p,q,r};

	double aval[9][3],bval[9][3],cval[9][3],dval[9][3],eval[9][3],fval[9][3];
	aexp(aval,meu,lam,a,d,u_r);
	bexp(bval,meu,lam,a,d,u_r);
	cexp(cval,meu,lam,a,d,u_r);
	dexp(dval,meu,lam,a,d,u_r);
	eexp(eval,meu,lam,a,d,u_r);
	fexp(fval,meu,lam,a,d,u_r);
	//arr is the required square matrix
	double arr[12][12];
	for(int i=0;i<12;i++)
	{
		for(int j=0;j<12;j++)
		{
			arr[i][j]=0;
		}
	}
	for(int i=0;i<9;i++)
		arr[0][i]=aval[i];

    for(int i=0;i<9;i++)
		arr[1][i]=bval[i];

	for(int i=0;i<9;i++)
		arr[2][i]=cval[i];

	for(int i=0;i<9;i++)
		arr[3][i]=dval[i];
		
	for(int i=0;i<9;i++)
	{
		arr[4][i]=eval[i];
	}
	for(int i=0;i<9;i++)
	{
		arr[5][i]=fval[i];
	}
	int j=0;
    for(int i=3;i<12;i++)
	{
		arr[6][i]=aval[j];
		j++;
	}
	j=0;
    for(int i=3;i<12;i++)
	{
		arr[7][i]=bval[j];
		j++;
	}
	j=0;
	for(int i=3;i<12;i++)
	{
		arr[8][i]=cval[j];
		j++;
		
	}
	j=0;
	for(int i=3;i<12;i++)
	{
		arr[9][i]=dval[j];
		j++;
	}
	j=0;
	for(int i=3;i<12;i++)
	{
		arr[10][i]=eval[j];
		j++;
	}
	j=0;
	for(int i=3;i<12;i++)
	{
		arr[11][i]=fval[j];
		j++;
	}

	
	j=0;
	double sigma1[6][9] ={{aval[0][j],aval[1][j],aval[2][j],aval[3][j],aval[4][j],aval[5][j],aval[6][j],aval[7][j],aval[8][j]},
			{bval[0][j],bval[1][j],bval[2][j],bval[3][j],bval[4][j],bval[5][j],bval[6][j],bval[7][j],bval[8][j]},
			{cval[0][j],cval[1][j],cval[2][j],cval[3][j],cval[4][j],cval[5][j],cval[6][j],cval[7][j],cval[8][j]},
			{dval[0][j],dval[1][j],dval[2][j],dval[3][j],dval[4][j],dval[5][j],dval[6][j],dval[7][j],dval[8][j]},
			{eval[0][j],eval[1][j],eval[2][j],eval[3][j],eval[4][j],eval[5][j],eval[6][j],eval[7][j],eval[8][j]},
			{fval[0][j],fval[1][j],fval[2][j],fval[3][j],fval[4][j],fval[5][j],fval[6][j],fval[7][j],fval[8][j]}}
          

	j=1;
	double sigma2[6][9] ={{aval[0][j],aval[1][j],aval[2][j],aval[3][j],aval[4][j],aval[5][j],aval[6][j],aval[7][j],aval[8][j]},
			{bval[0][j],bval[1][j],bval[2][j],bval[3][j],bval[4][j],bval[5][j],bval[6][j],bval[7][j],bval[8][j]},
			{cval[0][j],cval[1][j],cval[2][j],cval[3][j],cval[4][j],cval[5][j],cval[6][j],cval[7][j],cval[8][j]},
			{dval[0][j],dval[1][j],dval[2][j],dval[3][j],dval[4][j],dval[5][j],dval[6][j],dval[7][j],dval[8][j]},
			{eval[0][j],eval[1][j],eval[2][j],eval[3][j],eval[4][j],eval[5][j],eval[6][j],eval[7][j],eval[8][j]},
			{fval[0][j],fval[1][j],fval[2][j],fval[3][j],fval[4][j],fval[5][j],fval[6][j],fval[7][j],fval[8][j]}}
          

	
	j=2;
	double sigma3[6][9] ={{aval[0][j],aval[1][j],aval[2][j],aval[3][j],aval[4][j],aval[5][j],aval[6][j],aval[7][j],aval[8][j]},
			{bval[0][j],bval[1][j],bval[2][j],bval[3][j],bval[4][j],bval[5][j],bval[6][j],bval[7][j],bval[8][j]},
			{cval[0][j],cval[1][j],cval[2][j],cval[3][j],cval[4][j],cval[5][j],cval[6][j],cval[7][j],cval[8][j]},
			{dval[0][j],dval[1][j],dval[2][j],dval[3][j],dval[4][j],dval[5][j],dval[6][j],dval[7][j],dval[8][j]},
			{eval[0][j],eval[1][j],eval[2][j],eval[3][j],eval[4][j],eval[5][j],eval[6][j],eval[7][j],eval[8][j]},
			{fval[0][j],fval[1][j],fval[2][j],fval[3][j],fval[4][j],fval[5][j],fval[6][j],fval[7][j],fval[8][j]}}
	//diagonal matrix A
	float A[12][12];
       for(int i=0;i<12;i++)
		{
			for(int j=0;j<12;j++)
				{
					A[i][j]=0;
				}
		}
	for(int i=0;i<6;i++)
		{
			for(int j=0;j<9;j++)
				{
					A[i][j]=sigma1[i][j];
				}
		}
          for(int i=0;i<6;i++)
		  { 
			for(int j=9;j<12;j++)
				{
					A[i][j]=0;
				}
		  }
	
          for(int i=6;i<12;i++)
		  { 
			for(int j=0;j<4;j++)
				{
					A[i][j]=0;
				}
		  }
	  
          for(int i=6;i<12;i++)
		  { 
			for(int j=4;j<12;j++)
				{
					A[i][j]=sigma1[i][j];
				}
		  }
//B diagonal matrix

		float B[12][12];
       for(int i=0;i<12;i++)
		{
			for(int j=0;j<12;j++)
				{
					B[i][j]=0;
				}
		}
	for(int i=0;i<6;i++)
		{
			for(int j=0;j<9;j++)
				{
					B[i][j]=sigma2[i][j];
				}
		}
          for(int i=0;i<6;i++)
		  { 
			for(int j=9;j<12;j++)
				{
					B[i][j]=0;
				}
		  }
	
          for(int i=6;i<12;i++)
		  { 
			for(int j=0;j<4;j++)
				{
					B[i][j]=0;
				}
		  }
	  
          for(int i=6;i<12;i++)
		  { 
			for(int j=4;j<12;j++)
				{
					B[i][j]=sigma2[i][j];
				}
		  }
   // diagonal matrix C
		float C[12][12];
       for(int i=0;i<12;i++)
		{
			for(int j=0;j<12;j++)
				{
					C[i][j]=0;
				}
		}
	for(int i=0;i<6;i++)
		{
			for(int j=0;j<9;j++)
				{
					C[i][j]=sigma3[i][j];
				}
		}
          for(int i=0;i<6;i++)
		  { 
			for(int j=9;j<12;j++)
				{
					C[i][j]=0;
				}
		  }
	
          for(int i=6;i<12;i++)
		  { 
			for(int j=0;j<4;j++)
				{
					C[i][j]=0;
				}
		  }
	  
          for(int i=6;i<12;i++)
		  { 
			for(int j=4;j<12;j++)
				{
					C[i][j]=sigma3[i][j];
				}
		  }
	return 0;
}
