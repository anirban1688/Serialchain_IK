#include<cmath>
#include<iostream>
#include<Eigen>
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
      Eigen::Matrix12f Ax;
	Ax<<   A[0][0],A[0][1],A[0][2],A[0][3],A[0][4],A[0][5],A[0][6],A[0][7],A[0][8],A[0][9],A[0][10],A[0][11],
		A[1][0],A[1][1],A[1][2],A[1][3],A[1][4],A[1][5],A[1][6],A[1][7],A[1][8],A[1][9],A[1][10],A[1][11],
		A[2][0],A[2][1],A[2][2],A[2][3],A[2][4],A[2][5],A[2][6],A[2][7],A[2][8],A[2][9],A[2][10],A[2][11],
		A[3][0],A[3][1],A[3][2],A[3][3],A[3][4],A[3][5],A[3][6],A[3][7],A[3][8],A[3][9],A[3][10],A[3][11],
		A[4][0],A[4][1],A[4][2],A[4][3],A[4][4],A[4][5],A[4][6],A[4][7],A[4][8],A[4][9],A[4][10],A[4][11],
		A[5][0],A[5][1],A[5][2],A[5][3],A[5][4],A[5][5],A[5][6],A[5][7],A[5][8],A[5][9],A[5][10],A[5][11],
		A[6][0],A[6][1],A[6][2],A[6][3],A[6][4],A[6][5],A[6][6],A[6][7],A[6][8],A[6][9],A[6][10],A[6][11],
		A[7][0],A[7][1],A[7][2],A[7][3],A[7][4],A[7][5],A[7][6],A[7][7],A[7][8],A[7][9],A[7][10],A[7][11],
		A[8][0],A[8][1],A[8][2],A[8][3],A[8][4],A[8][5],A[8][6],A[8][7],A[8][8],A[8][9],A[8][10],A[8][11],
		A[9][0],A[9][1],A[9][2],A[9][3],A[9][4],A[9][5],A[9][6],A[9][7],A[9][8],A[9][9],A[9][10],A[9][11],
		A[10][0],A[10][1],A[10][2],A[10][3],A[10][4],A[10][5],A[10][6],A[10][7],A[10][8],A[10][9],A[10][10],A[10][11],
		A[11][0],A[11][1],A[11][2],A[11][3],A[11][4],A[11][5],A[11][6],A[11][7],A[11][8],A[11][9],A[11][10],A[11][11];
	
      Eigen::Matrix12f Bx;
	Bx<<   B[0][0],B[0][1],B[0][2],B[0][3],B[0][4],B[0][5],B[0][6],B[0][7],B[0][8],B[0][9],B[0][10],B[0][11],
		B[1][0],B[1][1],B[1][2],B[1][3],B[1][4],B[1][5],B[1][6],B[1][7],B[1][8],B[1][9],B[1][10],B[1][11],
		B[2][0],B[2][1],B[2][2],B[2][3],B[2][4],B[2][5],B[2][6],B[2][7],B[2][8],B[2][9],B[2][10],B[2][11],
		B[3][0],B[3][1],B[3][2],B[3][3],B[3][4],B[3][5],B[3][6],B[3][7],B[3][8],B[3][9],B[3][10],B[3][11],
		B[4][0],B[4][1],B[4][2],B[4][3],B[4][4],B[4][5],B[4][6],B[4][7],B[4][8],B[4][9],B[4][10],B[4][11],
		B[5][0],B[5][1],B[5][2],B[5][3],B[5][4],B[5][5],B[5][6],B[5][7],B[5][8],B[5][9],B[5][10],B[5][11],
		B[6][0],B[6][1],B[6][2],B[6][3],B[6][4],B[6][5],B[6][6],B[6][7],B[6][8],B[6][9],B[6][10],B[6][11],
		B[7][0],B[7][1],B[7][2],B[7][3],B[7][4],B[7][5],B[7][6],B[7][7],B[7][8],B[7][9],B[7][10],B[7][11],
		B[8][0],B[8][1],B[8][2],B[8][3],B[8][4],B[8][5],B[8][6],B[8][7],B[8][8],B[8][9],B[8][10],B[8][11],
		B[9][0],B[9][1],B[9][2],B[9][3],B[9][4],B[9][5],B[9][6],B[9][7],B[9][8],B[9][9],B[9][10],B[9][11],
		B[10][0],B[10][1],B[10][2],B[10][3],B[10][4],B[10][5],B[10][6],B[10][7],B[10][8],B[10][9],B[10][10],B[10][11],
		B[11][0],B[11][1],B[11][2],B[11][3],B[11][4],B[11][5],B[11][6],B[11][7],B[11][8],B[11][9],B[11][10],B[11][11];
	
      Eigen::Matrix12f Cx;
	Cx<<   C[0][0],C[0][1],C[0][2],C[0][3],C[0][4],C[0][5],C[0][6],C[0][7],C[0][8],C[0][9],C[0][10],C[0][11],
		C[1][0],C[1][1],C[1][2],C[1][3],C[1][4],C[1][5],C[1][6],C[1][7],C[1][8],C[1][9],C[1][10],C[1][11],
		C[2][0],C[2][1],C[2][2],C[2][3],C[2][4],C[2][5],C[2][6],C[2][7],C[2][8],C[2][9],C[2][10],C[2][11],
		C[3][0],C[3][1],C[3][2],C[3][3],C[3][4],C[3][5],C[3][6],C[3][7],C[3][8],C[3][9],C[3][10],C[3][11],
		C[4][0],C[4][1],C[4][2],C[4][3],C[4][4],C[4][5],C[4][6],C[4][7],C[4][8],C[4][9],C[4][10],C[4][11],
		C[5][0],C[5][1],C[5][2],C[5][3],C[5][4],C[5][5],C[5][6],C[5][7],C[5][8],C[5][9],C[5][10],C[5][11],
		C[6][0],C[6][1],C[6][2],C[6][3],C[6][4],C[6][5],C[6][6],C[6][7],C[6][8],C[6][9],C[6][10],C[6][11],
		C[7][0],C[7][1],C[7][2],C[7][3],C[7][4],C[7][5],C[7][6],C[7][7],C[7][8],C[7][9],C[7][10],C[7][11],
		C[8][0],C[8][1],C[8][2],C[8][3],C[8][4],C[8][5],C[8][6],C[8][7],C[8][8],C[8][9],C[8][10],C[8][11],
		C[9][0],C[9][1],C[9][2],C[9][3],C[9][4],C[9][5],C[9][6],C[9][7],C[9][8],C[9][9],C[9][10],C[9][11],
		C[10][0],C[10][1],C[10][2],C[10][3],C[10][4],C[10][5],C[10][6],C[10][7],C[10][8],C[10][9],C[10][10],C[10][11],
		C[11][0],C[11][1],C[11][2],C[11][3],C[11][4],C[11][5],C[11][6],C[11][7],C[11][8],C[11][9],C[11][10],C[11][11];
	Eigen::Matrix24f M;
	M10= -Ax.inverse()*C;
	M11= -Ax.inverse()*B;
	float I[12][12],O[12][12];
	for(int i=0;i<12;i++)
		{
		    for(int j=0;j<12;j++)
			    {
				    if(i==j)
				    {
					    I[i][j]=1;
				    }else{
				         I[i][j]=0;
				    }
				    O[i][j]=0;
			    }
		}
	
	return 0;
}
