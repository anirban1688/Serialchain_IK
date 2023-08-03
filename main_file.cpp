#include<cmath>
#include<iostream>
using namespace std;

int main()
{
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
	u = (mx*meu6+nx*lam6);
	v = (my*meu6+ny*lam6);
	w = (mz*meu6+nz*lam6);

	p = (-lx*a6 - ((mx*meu6+nx*lam6)*d6) + px);
	q = (-ly*a6 - ((my*meu6+ny*lam6)*d6) + py);
	r = (-lz*a6 - ((mz*meu6+nz*lam6)*d6) + pz);
	//double aval[9][3],bval[9][3],cval[9][3],dval[9][3],eval[9][3],fval[9][3];
	aexp(a11,a12,a13,a14,a15,a16,a17,a18,a19);
	bexp(bval);
	cexp(cval);
	dexp(dval);
	eexp(eval);
	fexp(fval);
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
	for(int i=;i<12;i++)
	{
		arr[11][i]=fval[j];
		j++;
	}

	sigma1 = [a11(1) a12(1) a13(1) a14(1) a15(1) a16(1) a17(1) a18(1) a19(1);
          b11(1) b12(1) b13(1) b14(1) b15(1) b16(1) b17(1) b18(1) b19(1);
          c11(1) c12(1) c13(1) c14(1) c15(1) c16(1) c17(1) c18(1) c19(1);
          d11(1) d12(1) d13(1) d14(1) d15(1) d16(1) d17(1) d18(1) d19(1);
          e11(1) e12(1) e13(1) e14(1) e15(1) e16(1) e17(1) e18(1) e19(1);
          f11(1) f12(1) f13(1) f14(1) f15(1) f16(1) f17(1) f18(1) f19(1)];


sigma2 = [a11(2) a12(2) a13(2) a14(2) a15(2) a16(2) a17(2) a18(2) a19(2);
          b11(2) b12(2) b13(2) b14(2) b15(2) b16(2) b17(2) b18(2) b19(2);
          c11(2) c12(2) c13(2) c14(2) c15(2) c16(2) c17(2) c18(2) c19(2);
          d11(2) d12(2) d13(2) d14(2) d15(2) d16(2) d17(2) d18(2) d19(2);
          e11(2) e12(2) e13(2) e14(2) e15(2) e16(2) e17(2) e18(2) e19(2);
          f11(2) f12(2) f13(2) f14(2) f15(2) f16(2) f17(2) f18(2) f19(2)];


sigma3=  [a11(3) a12(3) a13(3) a14(3) a15(3) a16(3) a17(3) a18(3) a19(3);
          b11(3) b12(3) b13(3) b14(3) b15(3) b16(3) b17(3) b18(3) b19(3);
          c11(3) c12(3) c13(3) c14(3) c15(3) c16(3) c17(3) c18(3) c19(3);
          d11(3) d12(3) d13(3) d14(3) d15(3) d16(3) d17(3) d18(3) d19(3);
          e11(3) e12(3) e13(3) e14(3) e15(3) e16(3) e17(3) e18(3) e19(3);
          f11(3) f12(3) f13(3) f14(3) f15(3) f16(3) f17(3) f18(3) f19(3)];


	return 0;
}
