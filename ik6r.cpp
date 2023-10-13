#include<cmath>
#include<iostream>
#include<iomanip>
//#include "../6r_ik/eigen-3.4.0"
//#include<eigen3>
#include <gsl/gsl_blas.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_linalg.h>
#include <gsl/gsl_eigen.h>
#include "ik6r.h"
#define pi 3.1428
using namespace std;



int main()
{
	//void bexp(double[9][3],double[6],double[6],double[6],double[6],double[6]);

	int i,j;
	double alpha[6];
	double dr=(pi/180);
	double u,v,w,p,q,r;
	
	double a1=0.3;
	double a2=1.0;
	double a3=0.0;
	double a4=1.5;
	double a5=0.0;
	double a6=0.0;
	
	
	double d1=0.0;
	double d2=0.0;
	double d3=0.2;
	double d4=0.0;
	double d5=0.0;
	double d6=0.0;
	
	
	double alp1=90*dr;
	double alp2=1*dr;
	double alp3=90*dr;
	double alp4=1*dr;
	double alp5=90*dr;
	double alp6=1*dr;
	
	
	double lx=-0.7601,ly=0.1333,lz=-0.6359;
	double mx=-0.6416,my=0.0,mz=0.7669;
	double nx=-1.1401,ny=0.0,nz=0.0;
	double px=-1.1401,py=0,pz=0;	

	double meu1=sin(alp1);
	double meu2=sin(alp2);
	double meu3=sin(alp3);
	double meu4=sin(alp4);
	double meu5=sin(alp5);
	double meu6=sin(alp6);
	double lam1=cos(alp1);
	double lam2=cos(alp2);
	double lam3=cos(alp3);
	double lam4=cos(alp4);
	double lam5=cos(alp5);
	double lam6=cos(alp6);

	double meu[]={meu1,meu2,meu3,meu4,meu5,meu6};
	double lam[]={lam1,lam2,lam3,lam4,lam5,lam6};
	double a[]={a1,a2,a3,a4,a5,a6};
	double d[]={d1,d2,d3,d4,d5,d6};

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
	
	for(i=0;i<6;i++)
		cout<<" "<<meu[i]<<" "<<lam[i]<<" "<<a[i]<<" "<<d[i]<<" "<<u_r[i] <<endl;
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<3;j++)
			cout<<setprecision(8)<<aval[i][j]<<" ";
		cout<<endl;
	}
	
	
	j=0;
	double sigma1[6][9] ={{aval[0][j],aval[1][j],aval[2][j],aval[3][j],aval[4][j],aval[5][j],aval[6][j],aval[7][j],aval[8][j]},
			{bval[0][j],bval[1][j],bval[2][j],bval[3][j],bval[4][j],bval[5][j],bval[6][j],bval[7][j],bval[8][j]},
			{cval[0][j],cval[1][j],cval[2][j],cval[3][j],cval[4][j],cval[5][j],cval[6][j],cval[7][j],cval[8][j]},
			{dval[0][j],dval[1][j],dval[2][j],dval[3][j],dval[4][j],dval[5][j],dval[6][j],dval[7][j],dval[8][j]},
			{eval[0][j],eval[1][j],eval[2][j],eval[3][j],eval[4][j],eval[5][j],eval[6][j],eval[7][j],eval[8][j]},
			{fval[0][j],fval[1][j],fval[2][j],fval[3][j],fval[4][j],fval[5][j],fval[6][j],fval[7][j],fval[8][j]}};
          

	j=1;
	double sigma2[6][9] ={{aval[0][j],aval[1][j],aval[2][j],aval[3][j],aval[4][j],aval[5][j],aval[6][j],aval[7][j],aval[8][j]},
			{bval[0][j],bval[1][j],bval[2][j],bval[3][j],bval[4][j],bval[5][j],bval[6][j],bval[7][j],bval[8][j]},
			{cval[0][j],cval[1][j],cval[2][j],cval[3][j],cval[4][j],cval[5][j],cval[6][j],cval[7][j],cval[8][j]},
			{dval[0][j],dval[1][j],dval[2][j],dval[3][j],dval[4][j],dval[5][j],dval[6][j],dval[7][j],dval[8][j]},
			{eval[0][j],eval[1][j],eval[2][j],eval[3][j],eval[4][j],eval[5][j],eval[6][j],eval[7][j],eval[8][j]},
			{fval[0][j],fval[1][j],fval[2][j],fval[3][j],fval[4][j],fval[5][j],fval[6][j],fval[7][j],fval[8][j]}};
          

	
	j=2;
	double sigma3[6][9] ={{aval[0][j],aval[1][j],aval[2][j],aval[3][j],aval[4][j],aval[5][j],aval[6][j],aval[7][j],aval[8][j]},
			{bval[0][j],bval[1][j],bval[2][j],bval[3][j],bval[4][j],bval[5][j],bval[6][j],bval[7][j],bval[8][j]},
			{cval[0][j],cval[1][j],cval[2][j],cval[3][j],cval[4][j],cval[5][j],cval[6][j],cval[7][j],cval[8][j]},
			{dval[0][j],dval[1][j],dval[2][j],dval[3][j],dval[4][j],dval[5][j],dval[6][j],dval[7][j],dval[8][j]},
			{eval[0][j],eval[1][j],eval[2][j],eval[3][j],eval[4][j],eval[5][j],eval[6][j],eval[7][j],eval[8][j]},
			{fval[0][j],fval[1][j],fval[2][j],fval[3][j],fval[4][j],fval[5][j],fval[6][j],fval[7][j],fval[8][j]}};
	//diagonal matrix A
       double A[12][12];
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

       double B[12][12];
       for(i=0;i<12;i++)
		{
			for(j=0;j<12;j++)
				{
					B[i][j]=0;
				}
		}
	for(i=0;i<6;i++)
		{
			for(j=0;j<9;j++)
				{
					B[i][j]=sigma2[i][j];
				}
		}
          for(i=0;i<6;i++)
		  { 
			for(j=9;j<12;j++)
				{
					B[i][j]=0;
				}
		  }
	
          for(i=6;i<12;i++)
		  { 
			for(j=0;j<4;j++)
				{
					B[i][j]=0;
				}
		  }
	  
          for(i=6;i<12;i++)
		  { 
			for(j=4;j<12;j++)
				{
					B[i][j]=sigma2[i][j];
				}
		  }
   // diagonal matrix C
       double C[12][12];
       for(i=0;i<12;i++)
		{
			for(j=0;j<12;j++)
				{
					C[i][j]=0;
				}
		}
	for(i=0;i<6;i++)
		{
			for(j=0;j<9;j++)
				{
					C[i][j]=sigma3[i][j];
				}
		}
          for(i=0;i<6;i++)
		  { 
			for(j=9;j<12;j++)
				{
					C[i][j]=0;
				}
		  }
	
          for(i=6;i<12;i++)
		  { 
			for(j=0;j<4;j++)
				{
					C[i][j]=0;
				}
		  }
	  
          for(i=6;i<12;i++)
		  { 
			for(j=4;j<12;j++)
				{
					C[i][j]=sigma3[i][j];
				}
		  }
		  
		  
    /*gsl_matrix *Amat = gsl_matrix_alloc(12,12);
    for(i=0;i<12;i++)
    	for(j=0;j<12;j++)
    		gsl_matrix_set(Amat,i,j,A[i][j]);*/
    		
    double adata[144];
    int count=0;
    for(i=0;i<12;i++)
    	for(j=0;j<12;j++)
    		adata[count++]=A[i][j];
    		
    gsl_matrix_view Amat
          = gsl_matrix_view_array(adata, 12, 12);
    		
    double bdata[144];	
    count=0;    
    for(i=0;i<12;i++)
    	for(j=0;j<12;j++)
    		bdata[count++]=B[i][j];
    		
    gsl_matrix_view Bmat
          = gsl_matrix_view_array(bdata, 12, 12);
    		
    		
    double cdata[144];	
    count=0;    
    for(i=0;i<12;i++)
    	for(j=0;j<12;j++)
    		cdata[count++]=C[i][j];
    		
    gsl_matrix_view Cmat
          = gsl_matrix_view_array(cdata, 12, 12);
    		
    double m10[144],negm10[144],m11[144],negm11[144];
    for(i=0;i<144;i++)
    	{
    		m10[i]=0;
    		negm10[i]=0;
    		m11[i]=0;
    		negm11[i]=0;
    	}    		
    		
    gsl_matrix_view M10 = gsl_matrix_view_array(m10,12,12);
    gsl_matrix_view negM10 = gsl_matrix_view_array(negm10,12,12);
    
    gsl_matrix_view M11 = gsl_matrix_view_array(m11,12,12);
    gsl_matrix_view negM11 = gsl_matrix_view_array(negm11,12,12);
    
    //gsl_matrix *m11 = gsl_matrix_alloc(12,12);     
    //gsl_matrix *Ainv = gsl_matrix_alloc(12,12); 
    
    double inva[144]; 
    
    gsl_permutation * p1 = gsl_permutation_alloc (12);
    int s;
    
    gsl_matrix_view invA
          = gsl_matrix_view_array(inva,12,12);
          
    cout<<" \n Matrix M10: \n";
     for(i=0;i<12;i++)
     {
     	for(j=0;j<12;j++)
     		cout<<adata[(12*i)+j]<<" ";
     	cout<<endl;
     }
 	
     
 
     gsl_linalg_LU_decomp (&Amat.matrix, p1, &s);    
     gsl_linalg_LU_invert (&Amat.matrix, p1, &invA.matrix);
    
      
	
     gsl_blas_dgemm (CblasNoTrans, CblasNoTrans, 1.0, &invA.matrix, &Cmat.matrix, 0.0, &M10.matrix);
     gsl_blas_dgemm (CblasNoTrans, CblasNoTrans, 1.0, &invA.matrix, &Bmat.matrix, 0.0, &M11.matrix);
     
     gsl_matrix_sub(&negM10.matrix,&M10.matrix);
     gsl_matrix_sub(&negM11.matrix,&M11.matrix);
     
     
      
	/*Eigen::Matrix24f M;
	M10= -Ax.inverse()*C;
	M11= -Ax.inverse()*B;*/
	double I[12][12],O[12][12], M[24][24];
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
	for (int i=0; i<12; ++i){
              for(int j=0; j<12; ++j)
                    M[i][j] =O[i][j];
                           }
	
	for (int i=0; i<12; ++i){
               for(int j=12; j<24; ++j)
                       M[i][j] =I[i][j-12];
                           }
	int k=0,l=0;
	for (int i=12; i<24; ++i)
	{
            for(int j=0; i<12; ++j){
               M[i][j] = m10[(12*k)+l];
		    l++;
	    }
		k++;
		l=0;
	}
	
	k=0;
	l=0;
	for (int i=12; i<24; ++i)
	{
            for(int j=12; j<24; ++j){
               M[i][j] = m11[(12*k)+l];
		    l++;
	    }
		k++;
		l=0;
	}
	
       double data[24*24];
       
       count=0;
       for(i=0;i<24;i++)
       {
       		for(j=0;j<24;j++)
       		data[count++]=M[i][j];
       		}
	
       gsl_matrix_view m 
         = gsl_matrix_view_array (data, 24, 24);
     
       gsl_vector *eigval = gsl_vector_alloc (24);
       gsl_matrix *evec = gsl_matrix_alloc (24, 24);
     
       gsl_eigen_symmv_workspace * w1 = 
         gsl_eigen_symmv_alloc (24);
       
       gsl_eigen_symmv (&m.matrix, eigval, evec, w1);
     
       gsl_eigen_symmv_free (w1);
     
       gsl_eigen_symmv_sort (eigval, evec, 
                             GSL_EIGEN_SORT_ABS_ASC);
       
       
        
     
         for (i = 0; i < 24; i++)
           {
             double eigval_i 
                = gsl_vector_get (eigval, i);
             gsl_vector_view evec_i 
                = gsl_matrix_column (evec, i);
     
             //printf ("eigenvalue = %g\n", eigval_i);
             //printf ("eigenvector = \n");
             //gsl_vector_fprintf (stdout, 
             //                    &evec_i.vector, "%g");
           }
       
	
	return 0;
}
