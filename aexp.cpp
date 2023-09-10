# include <iostream>
# include <math.h>

//aexp(double a11[3],double a12[3],double a13[3],double a14[3],double a15[3],double a16[3],double a17[3],double a18[3],double a19[3])
aexp(double aval[9][3])
{
	double a11[]={-2*a1*lam2*lam3*lam4*lam5*pow(p,2) + 2*a1*lam4*lam5*meu2*meu3*pow(p,2) - 
2*a1*lam3*lam5*meu2*meu4*pow(p,2) - 2*a1*lam2*lam5*meu3*meu4*pow(p,2) + 2*a1*lam3*lam4*meu2*meu5*pow(p,2) + 
2*a1*lam2*lam4*meu3*meu5*pow(p,2) - 2*a1*lam2*lam3*meu4*meu5*pow(p,2) + 2*a1*meu2*meu3*meu4*meu5*pow(p,2) - 
2*a1*lam2*lam3*lam4*lam5*pow(q,2) + 2*a1*lam4*lam5*meu2*meu3*pow(q,2) - 2*a1*lam3*lam5*meu2*meu4*pow(q,2) - 
2*a1*lam2*lam5*meu3*meu4*pow(q,2) + 2*a1*lam3*lam4*meu2*meu5*pow(q,2) + 2*a1*lam2*lam4*meu3*meu5*pow(q,2) - 
2*a1*lam2*lam3*meu4*meu5*pow(q,2) + 2*a1*meu2*meu3*meu4*meu5*pow(q,2) + 2*a1*d2*p*u + 2*a1*d1*lam1*p*u + 
2*a1*d3*lam2*p*u + 2*a1*d4*lam2*lam3*p*u + 2*a1*d5*lam2*lam3*lam4*p*u - 2*a1*d4*meu2*meu3*p*u - 
2*a1*d5*lam4*meu2*meu3*p*u + 2*a1*d5*lam3*meu2*meu4*p*u + 2*a1*d5*lam2*meu3*meu4*p*u + pow(a1,2)*meu1*q*u - 
pow(a2,2)*meu1*q*u - 2*a2*a3*meu1*q*u - pow(a3,2)*meu1*q*u + 2*a2*a4*meu1*q*u + 2*a3*a4*meu1*q*u - 
pow(a4,2)*meu1*q*u - 2*a2*a5*meu1*q*u - 2*a3*a5*meu1*q*u + 2*a4*a5*meu1*q*u - pow(a5,2)*meu1*q*u + 
pow(d1,2)*meu1*q*u - pow(d2,2)*meu1*q*u - pow(d3,2)*meu1*q*u - pow(d4,2)*meu1*q*u - pow(d5,2)*meu1*q*u - 
2*d2*d3*lam2*meu1*q*u - 2*d3*d4*lam3*meu1*q*u - 2*d2*d4*lam2*lam3*meu1*q*u - 2*d4*d5*lam4*meu1*q*u - 
2*d3*d5*lam3*lam4*meu1*q*u - 2*d2*d5*lam2*lam3*lam4*meu1*q*u + 2*d2*d4*meu1*meu2*meu3*q*u + 
2*d2*d5*lam4*meu1*meu2*meu3*q*u - 2*d2*d5*lam3*meu1*meu2*meu4*q*u - 2*d3*d5*meu1*meu3*meu4*q*u - 
2*d2*d5*lam2*meu1*meu3*meu4*q*u + meu1*pow(p,2)*q*u + meu1*pow(q,3)*u - 2*a1*lam1*p*r*u - 2*d1*meu1*q*r*u + 
meu1*q*pow(r,2)*u - pow(a1,2)*meu1*p*v + pow(a2,2)*meu1*p*v + 2*a2*a3*meu1*p*v + pow(a3,2)*meu1*p*v - 
2*a2*a4*meu1*p*v - 2*a3*a4*meu1*p*v + pow(a4,2)*meu1*p*v + 2*a2*a5*meu1*p*v + 2*a3*a5*meu1*p*v - 
2*a4*a5*meu1*p*v + pow(a5,2)*meu1*p*v - pow(d1,2)*meu1*p*v + pow(d2,2)*meu1*p*v + pow(d3,2)*meu1*p*v + 
pow(d4,2)*meu1*p*v + pow(d5,2)*meu1*p*v + 2*d2*d3*lam2*meu1*p*v + 2*d3*d4*lam3*meu1*p*v + 
2*d2*d4*lam2*lam3*meu1*p*v + 2*d4*d5*lam4*meu1*p*v + 2*d3*d5*lam3*lam4*meu1*p*v + 
2*d2*d5*lam2*lam3*lam4*meu1*p*v - 2*d2*d4*meu1*meu2*meu3*p*v - 2*d2*d5*lam4*meu1*meu2*meu3*p*v + 
2*d2*d5*lam3*meu1*meu2*meu4*p*v + 2*d3*d5*meu1*meu3*meu4*p*v + 2*d2*d5*lam2*meu1*meu3*meu4*p*v - 
meu1*pow(p,3)*v + 2*a1*d2*q*v + 2*a1*d1*lam1*q*v + 2*a1*d3*lam2*q*v + 2*a1*d4*lam2*lam3*q*v + 
2*a1*d5*lam2*lam3*lam4*q*v - 2*a1*d4*meu2*meu3*q*v - 2*a1*d5*lam4*meu2*meu3*q*v + 2*a1*d5*lam3*meu2*meu4*q*v + 
2*a1*d5*lam2*meu3*meu4*q*v - meu1*p*pow(q,2)*v + 2*d1*meu1*p*r*v - 2*a1*lam1*q*r*v - meu1*p*pow(r,2)*v + 
2*a1*lam1*pow(p,2)*w + 2*a1*lam1*pow(q,2)*w,
4*a1*a3*meu2*p*u - 4*a1*a4*meu2*p*u + 4*a1*a5*meu2*p*u - 4*a3*d2*meu1*meu2*q*u + 4*a4*d2*meu1*meu2*q*u - 
4*a5*d2*meu1*meu2*q*u - 4*a2*d4*meu1*meu3*q*u - 4*a2*d5*lam4*meu1*meu3*q*u + 4*a2*d5*lam3*meu1*meu4*q*u + 
4*a3*d2*meu1*meu2*p*v - 4*a4*d2*meu1*meu2*p*v + 4*a5*d2*meu1*meu2*p*v + 4*a2*d4*meu1*meu3*p*v + 
4*a2*d5*lam4*meu1*meu3*p*v - 4*a2*d5*lam3*meu1*meu4*p*v + 4*a1*a3*meu2*q*v - 4*a1*a4*meu2*q*v + 4*a1*a5*meu2*q*v,
-2*a1*lam2*lam3*lam4*lam5*pow(p,2) - 2*a1*lam4*lam5*meu2*meu3*pow(p,2) + 2*a1*lam3*lam5*meu2*meu4*pow(p,2) - 
2*a1*lam2*lam5*meu3*meu4*pow(p,2) - 2*a1*lam3*lam4*meu2*meu5*pow(p,2) + 2*a1*lam2*lam4*meu3*meu5*pow(p,2) - 
2*a1*lam2*lam3*meu4*meu5*pow(p,2) - 2*a1*meu2*meu3*meu4*meu5*pow(p,2) - 2*a1*lam2*lam3*lam4*lam5*pow(q,2) - 
2*a1*lam4*lam5*meu2*meu3*pow(q,2) + 2*a1*lam3*lam5*meu2*meu4*pow(q,2) - 2*a1*lam2*lam5*meu3*meu4*pow(q,2) - 
2*a1*lam3*lam4*meu2*meu5*pow(q,2) + 2*a1*lam2*lam4*meu3*meu5*pow(q,2) - 2*a1*lam2*lam3*meu4*meu5*pow(q,2) - 
2*a1*meu2*meu3*meu4*meu5*pow(q,2) + 2*a1*d2*p*u + 2*a1*d1*lam1*p*u + 2*a1*d3*lam2*p*u + 2*a1*d4*lam2*lam3*p*u + 
2*a1*d5*lam2*lam3*lam4*p*u + 2*a1*d4*meu2*meu3*p*u + 2*a1*d5*lam4*meu2*meu3*p*u - 2*a1*d5*lam3*meu2*meu4*p*u + 
2*a1*d5*lam2*meu3*meu4*p*u + pow(a1,2)*meu1*q*u - pow(a2,2)*meu1*q*u + 2*a2*a3*meu1*q*u - 
pow(a3,2)*meu1*q*u - 2*a2*a4*meu1*q*u + 2*a3*a4*meu1*q*u - pow(a4,2)*meu1*q*u + 2*a2*a5*meu1*q*u - 
2*a3*a5*meu1*q*u + 2*a4*a5*meu1*q*u - pow(a5,2)*meu1*q*u + pow(d1,2)*meu1*q*u - pow(d2,2)*meu1*q*u - 
pow(d3,2)*meu1*q*u - pow(d4,2)*meu1*q*u - pow(d5,2)*meu1*q*u - 2*d2*d3*lam2*meu1*q*u - 
2*d3*d4*lam3*meu1*q*u - 2*d2*d4*lam2*lam3*meu1*q*u - 2*d4*d5*lam4*meu1*q*u - 2*d3*d5*lam3*lam4*meu1*q*u - 
2*d2*d5*lam2*lam3*lam4*meu1*q*u - 2*d2*d4*meu1*meu2*meu3*q*u - 2*d2*d5*lam4*meu1*meu2*meu3*q*u + 
2*d2*d5*lam3*meu1*meu2*meu4*q*u - 2*d3*d5*meu1*meu3*meu4*q*u - 2*d2*d5*lam2*meu1*meu3*meu4*q*u + 
meu1*pow(p,2)*q*u + meu1*pow(q,3)*u - 2*a1*lam1*p*r*u - 2*d1*meu1*q*r*u + meu1*q*pow(r,2)*u - 
pow(a1,2)*meu1*p*v + pow(a2,2)*meu1*p*v - 2*a2*a3*meu1*p*v + pow(a3,2)*meu1*p*v + 2*a2*a4*meu1*p*v - 
2*a3*a4*meu1*p*v + pow(a4,2)*meu1*p*v - 2*a2*a5*meu1*p*v + 2*a3*a5*meu1*p*v - 2*a4*a5*meu1*p*v + 
pow(a5,2)*meu1*p*v - pow(d1,2)*meu1*p*v + pow(d2,2)*meu1*p*v + pow(d3,2)*meu1*p*v + pow(d4,2)*meu1*p*v + 
pow(d5,2)*meu1*p*v + 2*d2*d3*lam2*meu1*p*v + 2*d3*d4*lam3*meu1*p*v + 2*d2*d4*lam2*lam3*meu1*p*v + 
2*d4*d5*lam4*meu1*p*v + 2*d3*d5*lam3*lam4*meu1*p*v + 2*d2*d5*lam2*lam3*lam4*meu1*p*v + 
2*d2*d4*meu1*meu2*meu3*p*v + 2*d2*d5*lam4*meu1*meu2*meu3*p*v - 2*d2*d5*lam3*meu1*meu2*meu4*p*v + 
2*d3*d5*meu1*meu3*meu4*p*v + 2*d2*d5*lam2*meu1*meu3*meu4*p*v - meu1*pow(p,3)*v + 2*a1*d2*q*v + 
2*a1*d1*lam1*q*v + 2*a1*d3*lam2*q*v + 2*a1*d4*lam2*lam3*q*v + 2*a1*d5*lam2*lam3*lam4*q*v + 2*a1*d4*meu2*meu3*q*v + 
2*a1*d5*lam4*meu2*meu3*q*v - 2*a1*d5*lam3*meu2*meu4*q*v + 2*a1*d5*lam2*meu3*meu4*q*v - meu1*p*pow(q,2)*v + 
2*d1*meu1*p*r*v - 2*a1*lam1*q*r*v - meu1*p*pow(r,2)*v + 2*a1*lam1*pow(p,2)*w + 2*a1*lam1*pow(q,2)*w};


double a12[]={-4*a1*a5*lam3*lam4*meu2*p*u - 4*a1*a5*lam2*lam4*meu3*p*u + 4*a1*a5*lam2*lam3*meu4*p*u - 
4*a1*a5*meu2*meu3*meu4*p*u + 4*a5*d2*lam3*lam4*meu1*meu2*q*u + 4*a5*d3*lam4*meu1*meu3*q*u + 
4*a5*d2*lam2*lam4*meu1*meu3*q*u - 4*a5*d4*meu1*meu4*q*u - 4*a5*d3*lam3*meu1*meu4*q*u - 
4*a5*d2*lam2*lam3*meu1*meu4*q*u + 4*a5*d2*meu1*meu2*meu3*meu4*q*u - 4*a5*d2*lam3*lam4*meu1*meu2*p*v - 
4*a5*d3*lam4*meu1*meu3*p*v - 4*a5*d2*lam2*lam4*meu1*meu3*p*v + 4*a5*d4*meu1*meu4*p*v + 
4*a5*d3*lam3*meu1*meu4*p*v + 4*a5*d2*lam2*lam3*meu1*meu4*p*v - 4*a5*d2*meu1*meu2*meu3*meu4*p*v - 
4*a1*a5*lam3*lam4*meu2*q*v - 4*a1*a5*lam2*lam4*meu3*q*v + 4*a1*a5*lam2*lam3*meu4*q*v - 4*a1*a5*meu2*meu3*meu4*q*v,
8*a1*meu2*meu5*pow(p,2) + 8*a1*meu2*meu5*pow(q,2) - 8*a2*a5*lam3*lam4*meu1*q*u - 8*a2*a5*meu1*meu3*meu4*q*u + 
8*a2*a5*lam3*lam4*meu1*p*v + 8*a2*a5*meu1*meu3*meu4*p*v,
4*a1*a5*lam3*lam4*meu2*p*u - 4*a1*a5*lam2*lam4*meu3*p*u + 4*a1*a5*lam2*lam3*meu4*p*u + 4*a1*a5*meu2*meu3*meu4*p*u - 
4*a5*d2*lam3*lam4*meu1*meu2*q*u + 4*a5*d3*lam4*meu1*meu3*q*u + 4*a5*d2*lam2*lam4*meu1*meu3*q*u - 
4*a5*d4*meu1*meu4*q*u - 4*a5*d3*lam3*meu1*meu4*q*u - 4*a5*d2*lam2*lam3*meu1*meu4*q*u - 
4*a5*d2*meu1*meu2*meu3*meu4*q*u + 4*a5*d2*lam3*lam4*meu1*meu2*p*v - 4*a5*d3*lam4*meu1*meu3*p*v - 
4*a5*d2*lam2*lam4*meu1*meu3*p*v + 4*a5*d4*meu1*meu4*p*v + 4*a5*d3*lam3*meu1*meu4*p*v + 
4*a5*d2*lam2*lam3*meu1*meu4*p*v + 4*a5*d2*meu1*meu2*meu3*meu4*p*v + 4*a1*a5*lam3*lam4*meu2*q*v - 
4*a1*a5*lam2*lam4*meu3*q*v + 4*a1*a5*lam2*lam3*meu4*q*v + 4*a1*a5*meu2*meu3*meu4*q*v};


double a13[]={-2*a1*lam2*lam3*lam4*lam5*pow(p,2) + 2*a1*lam4*lam5*meu2*meu3*pow(p,2) - 
2*a1*lam3*lam5*meu2*meu4*pow(p,2) - 2*a1*lam2*lam5*meu3*meu4*pow(p,2) - 2*a1*lam3*lam4*meu2*meu5*pow(p,2) - 
2*a1*lam2*lam4*meu3*meu5*pow(p,2) + 2*a1*lam2*lam3*meu4*meu5*pow(p,2) - 2*a1*meu2*meu3*meu4*meu5*pow(p,2) - 
2*a1*lam2*lam3*lam4*lam5*pow(q,2) + 2*a1*lam4*lam5*meu2*meu3*pow(q,2) - 2*a1*lam3*lam5*meu2*meu4*pow(q,2) - 
2*a1*lam2*lam5*meu3*meu4*pow(q,2) - 2*a1*lam3*lam4*meu2*meu5*pow(q,2) - 2*a1*lam2*lam4*meu3*meu5*pow(q,2) + 
2*a1*lam2*lam3*meu4*meu5*pow(q,2) - 2*a1*meu2*meu3*meu4*meu5*pow(q,2) + 2*a1*d2*p*u + 2*a1*d1*lam1*p*u + 
2*a1*d3*lam2*p*u + 2*a1*d4*lam2*lam3*p*u + 2*a1*d5*lam2*lam3*lam4*p*u - 2*a1*d4*meu2*meu3*p*u - 
2*a1*d5*lam4*meu2*meu3*p*u + 2*a1*d5*lam3*meu2*meu4*p*u + 2*a1*d5*lam2*meu3*meu4*p*u + pow(a1,2)*meu1*q*u - 
pow(a2,2)*meu1*q*u - 2*a2*a3*meu1*q*u - pow(a3,2)*meu1*q*u + 2*a2*a4*meu1*q*u + 2*a3*a4*meu1*q*u - 
pow(a4,2)*meu1*q*u + 2*a2*a5*meu1*q*u + 2*a3*a5*meu1*q*u - 2*a4*a5*meu1*q*u - pow(a5,2)*meu1*q*u + 
pow(d1,2)*meu1*q*u - pow(d2,2)*meu1*q*u - pow(d3,2)*meu1*q*u - pow(d4,2)*meu1*q*u - pow(d5,2)*meu1*q*u - 
2*d2*d3*lam2*meu1*q*u - 2*d3*d4*lam3*meu1*q*u - 2*d2*d4*lam2*lam3*meu1*q*u - 2*d4*d5*lam4*meu1*q*u - 
2*d3*d5*lam3*lam4*meu1*q*u - 2*d2*d5*lam2*lam3*lam4*meu1*q*u + 2*d2*d4*meu1*meu2*meu3*q*u + 
2*d2*d5*lam4*meu1*meu2*meu3*q*u - 2*d2*d5*lam3*meu1*meu2*meu4*q*u - 2*d3*d5*meu1*meu3*meu4*q*u - 
2*d2*d5*lam2*meu1*meu3*meu4*q*u + meu1*pow(p,2)*q*u + meu1*pow(q,3)*u - 2*a1*lam1*p*r*u - 2*d1*meu1*q*r*u + 
meu1*q*pow(r,2)*u - pow(a1,2)*meu1*p*v + pow(a2,2)*meu1*p*v + 2*a2*a3*meu1*p*v + pow(a3,2)*meu1*p*v - 
2*a2*a4*meu1*p*v - 2*a3*a4*meu1*p*v + pow(a4,2)*meu1*p*v - 2*a2*a5*meu1*p*v - 2*a3*a5*meu1*p*v + 
2*a4*a5*meu1*p*v + pow(a5,2)*meu1*p*v - pow(d1,2)*meu1*p*v + pow(d2,2)*meu1*p*v + pow(d3,2)*meu1*p*v + 
pow(d4,2)*meu1*p*v + pow(d5,2)*meu1*p*v + 2*d2*d3*lam2*meu1*p*v + 2*d3*d4*lam3*meu1*p*v + 
2*d2*d4*lam2*lam3*meu1*p*v + 2*d4*d5*lam4*meu1*p*v + 2*d3*d5*lam3*lam4*meu1*p*v + 
2*d2*d5*lam2*lam3*lam4*meu1*p*v - 2*d2*d4*meu1*meu2*meu3*p*v - 2*d2*d5*lam4*meu1*meu2*meu3*p*v + 
2*d2*d5*lam3*meu1*meu2*meu4*p*v + 2*d3*d5*meu1*meu3*meu4*p*v + 2*d2*d5*lam2*meu1*meu3*meu4*p*v - 
meu1*pow(p,3)*v + 2*a1*d2*q*v + 2*a1*d1*lam1*q*v + 2*a1*d3*lam2*q*v + 2*a1*d4*lam2*lam3*q*v + 
2*a1*d5*lam2*lam3*lam4*q*v - 2*a1*d4*meu2*meu3*q*v - 2*a1*d5*lam4*meu2*meu3*q*v + 2*a1*d5*lam3*meu2*meu4*q*v + 
2*a1*d5*lam2*meu3*meu4*q*v - meu1*p*pow(q,2)*v + 2*d1*meu1*p*r*v - 2*a1*lam1*q*r*v - meu1*p*pow(r,2)*v + 
2*a1*lam1*pow(p,2)*w + 2*a1*lam1*pow(q,2)*w,
4*a1*a3*meu2*p*u - 4*a1*a4*meu2*p*u - 4*a1*a5*meu2*p*u - 4*a3*d2*meu1*meu2*q*u + 4*a4*d2*meu1*meu2*q*u + 
4*a5*d2*meu1*meu2*q*u - 4*a2*d4*meu1*meu3*q*u - 4*a2*d5*lam4*meu1*meu3*q*u + 4*a2*d5*lam3*meu1*meu4*q*u + 
4*a3*d2*meu1*meu2*p*v - 4*a4*d2*meu1*meu2*p*v - 4*a5*d2*meu1*meu2*p*v + 4*a2*d4*meu1*meu3*p*v + 
4*a2*d5*lam4*meu1*meu3*p*v - 4*a2*d5*lam3*meu1*meu4*p*v + 4*a1*a3*meu2*q*v - 4*a1*a4*meu2*q*v - 4*a1*a5*meu2*q*v,
-2*a1*lam2*lam3*lam4*lam5*pow(p,2) - 2*a1*lam4*lam5*meu2*meu3*pow(p,2) + 2*a1*lam3*lam5*meu2*meu4*pow(p,2) - 
2*a1*lam2*lam5*meu3*meu4*pow(p,2) + 2*a1*lam3*lam4*meu2*meu5*pow(p,2) - 2*a1*lam2*lam4*meu3*meu5*pow(p,2) + 
2*a1*lam2*lam3*meu4*meu5*pow(p,2) + 2*a1*meu2*meu3*meu4*meu5*pow(p,2) - 2*a1*lam2*lam3*lam4*lam5*pow(q,2) - 
2*a1*lam4*lam5*meu2*meu3*pow(q,2) + 2*a1*lam3*lam5*meu2*meu4*pow(q,2) - 2*a1*lam2*lam5*meu3*meu4*pow(q,2) + 
2*a1*lam3*lam4*meu2*meu5*pow(q,2) - 2*a1*lam2*lam4*meu3*meu5*pow(q,2) + 2*a1*lam2*lam3*meu4*meu5*pow(q,2) + 
2*a1*meu2*meu3*meu4*meu5*pow(q,2) + 2*a1*d2*p*u + 2*a1*d1*lam1*p*u + 2*a1*d3*lam2*p*u + 2*a1*d4*lam2*lam3*p*u + 
2*a1*d5*lam2*lam3*lam4*p*u + 2*a1*d4*meu2*meu3*p*u + 2*a1*d5*lam4*meu2*meu3*p*u - 2*a1*d5*lam3*meu2*meu4*p*u + 
2*a1*d5*lam2*meu3*meu4*p*u + pow(a1,2)*meu1*q*u - pow(a2,2)*meu1*q*u + 2*a2*a3*meu1*q*u - 
pow(a3,2)*meu1*q*u - 2*a2*a4*meu1*q*u + 2*a3*a4*meu1*q*u - pow(a4,2)*meu1*q*u - 2*a2*a5*meu1*q*u + 
2*a3*a5*meu1*q*u - 2*a4*a5*meu1*q*u - pow(a5,2)*meu1*q*u + pow(d1,2)*meu1*q*u - pow(d2,2)*meu1*q*u - 
pow(d3,2)*meu1*q*u - pow(d4,2)*meu1*q*u - pow(d5,2)*meu1*q*u - 2*d2*d3*lam2*meu1*q*u - 
2*d3*d4*lam3*meu1*q*u - 2*d2*d4*lam2*lam3*meu1*q*u - 2*d4*d5*lam4*meu1*q*u - 2*d3*d5*lam3*lam4*meu1*q*u - 
2*d2*d5*lam2*lam3*lam4*meu1*q*u - 2*d2*d4*meu1*meu2*meu3*q*u - 2*d2*d5*lam4*meu1*meu2*meu3*q*u + 
2*d2*d5*lam3*meu1*meu2*meu4*q*u - 2*d3*d5*meu1*meu3*meu4*q*u - 2*d2*d5*lam2*meu1*meu3*meu4*q*u + 
meu1*pow(p,2)*q*u + meu1*pow(q,3)*u - 2*a1*lam1*p*r*u - 2*d1*meu1*q*r*u + meu1*q*pow(r,2)*u - 
pow(a1,2)*meu1*p*v + pow(a2,2)*meu1*p*v - 2*a2*a3*meu1*p*v + pow(a3,2)*meu1*p*v + 2*a2*a4*meu1*p*v - 
2*a3*a4*meu1*p*v + pow(a4,2)*meu1*p*v + 2*a2*a5*meu1*p*v - 2*a3*a5*meu1*p*v + 2*a4*a5*meu1*p*v + 
pow(a5,2)*meu1*p*v - pow(d1,2)*meu1*p*v + pow(d2,2)*meu1*p*v + pow(d3,2)*meu1*p*v + pow(d4,2)*meu1*p*v + 
pow(d5,2)*meu1*p*v + 2*d2*d3*lam2*meu1*p*v + 2*d3*d4*lam3*meu1*p*v + 2*d2*d4*lam2*lam3*meu1*p*v + 
2*d4*d5*lam4*meu1*p*v + 2*d3*d5*lam3*lam4*meu1*p*v + 2*d2*d5*lam2*lam3*lam4*meu1*p*v + 
2*d2*d4*meu1*meu2*meu3*p*v + 2*d2*d5*lam4*meu1*meu2*meu3*p*v - 2*d2*d5*lam3*meu1*meu2*meu4*p*v + 
2*d3*d5*meu1*meu3*meu4*p*v + 2*d2*d5*lam2*meu1*meu3*meu4*p*v - meu1*pow(p,3)*v + 2*a1*d2*q*v + 
2*a1*d1*lam1*q*v + 2*a1*d3*lam2*q*v + 2*a1*d4*lam2*lam3*q*v + 2*a1*d5*lam2*lam3*lam4*q*v + 2*a1*d4*meu2*meu3*q*v + 
2*a1*d5*lam4*meu2*meu3*q*v - 2*a1*d5*lam3*meu2*meu4*q*v + 2*a1*d5*lam2*meu3*meu4*q*v - meu1*p*pow(q,2)*v + 
2*d1*meu1*p*r*v - 2*a1*lam1*q*r*v - meu1*p*pow(r,2)*v + 2*a1*lam1*pow(p,2)*w + 2*a1*lam1*pow(q,2)*w};


double a14[]={4*a1*a4*lam3*meu2*p*u - 4*a1*a5*lam3*meu2*p*u + 4*a1*a4*lam2*meu3*p*u - 4*a1*a5*lam2*meu3*p*u - 
4*a4*d2*lam3*meu1*meu2*q*u + 4*a5*d2*lam3*meu1*meu2*q*u - 4*a4*d3*meu1*meu3*q*u + 4*a5*d3*meu1*meu3*q*u - 
4*a4*d2*lam2*meu1*meu3*q*u + 4*a5*d2*lam2*meu1*meu3*q*u - 4*a2*d5*meu1*meu4*q*u - 4*a3*d5*meu1*meu4*q*u + 
4*a4*d2*lam3*meu1*meu2*p*v - 4*a5*d2*lam3*meu1*meu2*p*v + 4*a4*d3*meu1*meu3*p*v - 4*a5*d3*meu1*meu3*p*v + 
4*a4*d2*lam2*meu1*meu3*p*v - 4*a5*d2*lam2*meu1*meu3*p*v + 4*a2*d5*meu1*meu4*p*v + 4*a3*d5*meu1*meu4*p*v + 
4*a1*a4*lam3*meu2*q*v - 4*a1*a5*lam3*meu2*q*v + 4*a1*a4*lam2*meu3*q*v - 4*a1*a5*lam2*meu3*q*v,
-8*a1*lam5*meu2*meu4*pow(p,2) + 8*a1*lam4*meu2*meu5*pow(p,2) - 8*a1*lam5*meu2*meu4*pow(q,2) + 
8*a1*lam4*meu2*meu5*pow(q,2) + 8*a1*d5*meu2*meu4*p*u + 8*a2*a4*lam3*meu1*q*u - 8*a2*a5*lam3*meu1*q*u - 
8*d2*d5*meu1*meu2*meu4*q*u - 8*a2*a4*lam3*meu1*p*v + 8*a2*a5*lam3*meu1*p*v + 8*d2*d5*meu1*meu2*meu4*p*v + 
8*a1*d5*meu2*meu4*q*v,-4*a1*a4*lam3*meu2*p*u + 4*a1*a5*lam3*meu2*p*u + 4*a1*a4*lam2*meu3*p*u - 
4*a1*a5*lam2*meu3*p*u + 4*a4*d2*lam3*meu1*meu2*q*u - 4*a5*d2*lam3*meu1*meu2*q*u - 4*a4*d3*meu1*meu3*q*u + 
4*a5*d3*meu1*meu3*q*u - 4*a4*d2*lam2*meu1*meu3*q*u + 4*a5*d2*lam2*meu1*meu3*q*u + 4*a2*d5*meu1*meu4*q*u - 
4*a3*d5*meu1*meu4*q*u - 4*a4*d2*lam3*meu1*meu2*p*v + 4*a5*d2*lam3*meu1*meu2*p*v + 4*a4*d3*meu1*meu3*p*v - 
4*a5*d3*meu1*meu3*p*v + 4*a4*d2*lam2*meu1*meu3*p*v - 4*a5*d2*lam2*meu1*meu3*p*v - 4*a2*d5*meu1*meu4*p*v + 
4*a3*d5*meu1*meu4*p*v - 4*a1*a4*lam3*meu2*q*v + 4*a1*a5*lam3*meu2*q*v + 4*a1*a4*lam2*meu3*q*v - 
4*a1*a5*lam2*meu3*q*v};


double a15[]={-8*a1*lam3*meu2*meu5*pow(p,2) - 8*a1*lam2*meu3*meu5*pow(p,2) - 8*a1*lam3*meu2*meu5*pow(q,2) - 
8*a1*lam2*meu3*meu5*pow(q,2) + 8*a2*a5*lam4*meu1*q*u + 8*a3*a5*lam4*meu1*q*u - 8*a2*a5*lam4*meu1*p*v - 
8*a3*a5*lam4*meu1*p*v,-16*a1*a5*lam4*meu2*p*u + 16*a5*d2*lam4*meu1*meu2*q*u - 16*a5*d2*lam4*meu1*meu2*p*v - 
16*a1*a5*lam4*meu2*q*v,8*a1*lam3*meu2*meu5*pow(p,2) - 8*a1*lam2*meu3*meu5*pow(p,2) + 
8*a1*lam3*meu2*meu5*pow(q,2) - 8*a1*lam2*meu3*meu5*pow(q,2) - 8*a2*a5*lam4*meu1*q*u + 8*a3*a5*lam4*meu1*q*u + 
8*a2*a5*lam4*meu1*p*v - 8*a3*a5*lam4*meu1*p*v};


double a16[]={4*a1*a4*lam3*meu2*p*u + 4*a1*a5*lam3*meu2*p*u + 4*a1*a4*lam2*meu3*p*u + 4*a1*a5*lam2*meu3*p*u - 
4*a4*d2*lam3*meu1*meu2*q*u - 4*a5*d2*lam3*meu1*meu2*q*u - 4*a4*d3*meu1*meu3*q*u - 4*a5*d3*meu1*meu3*q*u - 
4*a4*d2*lam2*meu1*meu3*q*u - 4*a5*d2*lam2*meu1*meu3*q*u - 4*a2*d5*meu1*meu4*q*u - 4*a3*d5*meu1*meu4*q*u + 
4*a4*d2*lam3*meu1*meu2*p*v + 4*a5*d2*lam3*meu1*meu2*p*v + 4*a4*d3*meu1*meu3*p*v + 4*a5*d3*meu1*meu3*p*v + 
4*a4*d2*lam2*meu1*meu3*p*v + 4*a5*d2*lam2*meu1*meu3*p*v + 4*a2*d5*meu1*meu4*p*v + 4*a3*d5*meu1*meu4*p*v + 
4*a1*a4*lam3*meu2*q*v + 4*a1*a5*lam3*meu2*q*v + 4*a1*a4*lam2*meu3*q*v + 4*a1*a5*lam2*meu3*q*v,
-8*a1*lam5*meu2*meu4*pow(p,2) - 8*a1*lam4*meu2*meu5*pow(p,2) - 8*a1*lam5*meu2*meu4*pow(q,2) - 
8*a1*lam4*meu2*meu5*pow(q,2) + 8*a1*d5*meu2*meu4*p*u + 8*a2*a4*lam3*meu1*q*u + 8*a2*a5*lam3*meu1*q*u - 
8*d2*d5*meu1*meu2*meu4*q*u - 8*a2*a4*lam3*meu1*p*v - 8*a2*a5*lam3*meu1*p*v + 8*d2*d5*meu1*meu2*meu4*p*v + 
8*a1*d5*meu2*meu4*q*v,-4*a1*a4*lam3*meu2*p*u - 4*a1*a5*lam3*meu2*p*u + 4*a1*a4*lam2*meu3*p*u + 
4*a1*a5*lam2*meu3*p*u + 4*a4*d2*lam3*meu1*meu2*q*u + 4*a5*d2*lam3*meu1*meu2*q*u - 4*a4*d3*meu1*meu3*q*u - 
4*a5*d3*meu1*meu3*q*u - 4*a4*d2*lam2*meu1*meu3*q*u - 4*a5*d2*lam2*meu1*meu3*q*u + 4*a2*d5*meu1*meu4*q*u - 
4*a3*d5*meu1*meu4*q*u - 4*a4*d2*lam3*meu1*meu2*p*v - 4*a5*d2*lam3*meu1*meu2*p*v + 4*a4*d3*meu1*meu3*p*v + 
4*a5*d3*meu1*meu3*p*v + 4*a4*d2*lam2*meu1*meu3*p*v + 4*a5*d2*lam2*meu1*meu3*p*v - 4*a2*d5*meu1*meu4*p*v + 
4*a3*d5*meu1*meu4*p*v - 4*a1*a4*lam3*meu2*q*v - 4*a1*a5*lam3*meu2*q*v + 4*a1*a4*lam2*meu3*q*v + 
4*a1*a5*lam2*meu3*q*v};


double a17[]={-2*a1*lam2*lam3*lam4*lam5*pow(p,2) + 2*a1*lam4*lam5*meu2*meu3*pow(p,2) + 
2*a1*lam3*lam5*meu2*meu4*pow(p,2) + 2*a1*lam2*lam5*meu3*meu4*pow(p,2) - 2*a1*lam3*lam4*meu2*meu5*pow(p,2) - 
2*a1*lam2*lam4*meu3*meu5*pow(p,2) - 2*a1*lam2*lam3*meu4*meu5*pow(p,2) + 2*a1*meu2*meu3*meu4*meu5*pow(p,2) - 
2*a1*lam2*lam3*lam4*lam5*pow(q,2) + 2*a1*lam4*lam5*meu2*meu3*pow(q,2) + 2*a1*lam3*lam5*meu2*meu4*pow(q,2) + 
2*a1*lam2*lam5*meu3*meu4*pow(q,2) - 2*a1*lam3*lam4*meu2*meu5*pow(q,2) - 2*a1*lam2*lam4*meu3*meu5*pow(q,2) - 
2*a1*lam2*lam3*meu4*meu5*pow(q,2) + 2*a1*meu2*meu3*meu4*meu5*pow(q,2) + 2*a1*d2*p*u + 2*a1*d1*lam1*p*u + 
2*a1*d3*lam2*p*u + 2*a1*d4*lam2*lam3*p*u + 2*a1*d5*lam2*lam3*lam4*p*u - 2*a1*d4*meu2*meu3*p*u - 
2*a1*d5*lam4*meu2*meu3*p*u - 2*a1*d5*lam3*meu2*meu4*p*u - 2*a1*d5*lam2*meu3*meu4*p*u + pow(a1,2)*meu1*q*u - 
pow(a2,2)*meu1*q*u - 2*a2*a3*meu1*q*u - pow(a3,2)*meu1*q*u - 2*a2*a4*meu1*q*u - 2*a3*a4*meu1*q*u - 
pow(a4,2)*meu1*q*u + 2*a2*a5*meu1*q*u + 2*a3*a5*meu1*q*u + 2*a4*a5*meu1*q*u - pow(a5,2)*meu1*q*u + 
pow(d1,2)*meu1*q*u - pow(d2,2)*meu1*q*u - pow(d3,2)*meu1*q*u - pow(d4,2)*meu1*q*u - pow(d5,2)*meu1*q*u - 
2*d2*d3*lam2*meu1*q*u - 2*d3*d4*lam3*meu1*q*u - 2*d2*d4*lam2*lam3*meu1*q*u - 2*d4*d5*lam4*meu1*q*u - 
2*d3*d5*lam3*lam4*meu1*q*u - 2*d2*d5*lam2*lam3*lam4*meu1*q*u + 2*d2*d4*meu1*meu2*meu3*q*u + 
2*d2*d5*lam4*meu1*meu2*meu3*q*u + 2*d2*d5*lam3*meu1*meu2*meu4*q*u + 2*d3*d5*meu1*meu3*meu4*q*u + 
2*d2*d5*lam2*meu1*meu3*meu4*q*u + meu1*pow(p,2)*q*u + meu1*pow(q,3)*u - 2*a1*lam1*p*r*u - 2*d1*meu1*q*r*u + 
meu1*q*pow(r,2)*u - pow(a1,2)*meu1*p*v + pow(a2,2)*meu1*p*v + 2*a2*a3*meu1*p*v + pow(a3,2)*meu1*p*v + 
2*a2*a4*meu1*p*v + 2*a3*a4*meu1*p*v + pow(a4,2)*meu1*p*v - 2*a2*a5*meu1*p*v - 2*a3*a5*meu1*p*v - 
2*a4*a5*meu1*p*v + pow(a5,2)*meu1*p*v - pow(d1,2)*meu1*p*v + pow(d2,2)*meu1*p*v + pow(d3,2)*meu1*p*v + 
pow(d4,2)*meu1*p*v + pow(d5,2)*meu1*p*v + 2*d2*d3*lam2*meu1*p*v + 2*d3*d4*lam3*meu1*p*v + 
2*d2*d4*lam2*lam3*meu1*p*v + 2*d4*d5*lam4*meu1*p*v + 2*d3*d5*lam3*lam4*meu1*p*v + 
2*d2*d5*lam2*lam3*lam4*meu1*p*v - 2*d2*d4*meu1*meu2*meu3*p*v - 2*d2*d5*lam4*meu1*meu2*meu3*p*v - 
2*d2*d5*lam3*meu1*meu2*meu4*p*v - 2*d3*d5*meu1*meu3*meu4*p*v - 2*d2*d5*lam2*meu1*meu3*meu4*p*v - 
meu1*pow(p,3)*v + 2*a1*d2*q*v + 2*a1*d1*lam1*q*v + 2*a1*d3*lam2*q*v + 2*a1*d4*lam2*lam3*q*v + 
2*a1*d5*lam2*lam3*lam4*q*v - 2*a1*d4*meu2*meu3*q*v - 2*a1*d5*lam4*meu2*meu3*q*v - 2*a1*d5*lam3*meu2*meu4*q*v - 
2*a1*d5*lam2*meu3*meu4*q*v - meu1*p*pow(q,2)*v + 2*d1*meu1*p*r*v - 2*a1*lam1*q*r*v - meu1*p*pow(r,2)*v + 
2*a1*lam1*pow(p,2)*w + 2*a1*lam1*pow(q,2)*w,
4*a1*a3*meu2*p*u + 4*a1*a4*meu2*p*u - 4*a1*a5*meu2*p*u - 4*a3*d2*meu1*meu2*q*u - 4*a4*d2*meu1*meu2*q*u + 
4*a5*d2*meu1*meu2*q*u - 4*a2*d4*meu1*meu3*q*u - 4*a2*d5*lam4*meu1*meu3*q*u - 4*a2*d5*lam3*meu1*meu4*q*u + 
4*a3*d2*meu1*meu2*p*v + 4*a4*d2*meu1*meu2*p*v - 4*a5*d2*meu1*meu2*p*v + 4*a2*d4*meu1*meu3*p*v + 
4*a2*d5*lam4*meu1*meu3*p*v + 4*a2*d5*lam3*meu1*meu4*p*v + 4*a1*a3*meu2*q*v + 4*a1*a4*meu2*q*v - 4*a1*a5*meu2*q*v,
-2*a1*lam2*lam3*lam4*lam5*pow(p,2) - 2*a1*lam4*lam5*meu2*meu3*pow(p,2) - 2*a1*lam3*lam5*meu2*meu4*pow(p,2) + 
2*a1*lam2*lam5*meu3*meu4*pow(p,2) + 2*a1*lam3*lam4*meu2*meu5*pow(p,2) - 2*a1*lam2*lam4*meu3*meu5*pow(p,2) - 
2*a1*lam2*lam3*meu4*meu5*pow(p,2) - 2*a1*meu2*meu3*meu4*meu5*pow(p,2) - 2*a1*lam2*lam3*lam4*lam5*pow(q,2) - 
2*a1*lam4*lam5*meu2*meu3*pow(q,2) - 2*a1*lam3*lam5*meu2*meu4*pow(q,2) + 2*a1*lam2*lam5*meu3*meu4*pow(q,2) + 
2*a1*lam3*lam4*meu2*meu5*pow(q,2) - 2*a1*lam2*lam4*meu3*meu5*pow(q,2) - 2*a1*lam2*lam3*meu4*meu5*pow(q,2) - 
2*a1*meu2*meu3*meu4*meu5*pow(q,2) + 2*a1*d2*p*u + 2*a1*d1*lam1*p*u + 2*a1*d3*lam2*p*u + 2*a1*d4*lam2*lam3*p*u + 
2*a1*d5*lam2*lam3*lam4*p*u + 2*a1*d4*meu2*meu3*p*u + 2*a1*d5*lam4*meu2*meu3*p*u + 2*a1*d5*lam3*meu2*meu4*p*u - 
2*a1*d5*lam2*meu3*meu4*p*u + pow(a1,2)*meu1*q*u - pow(a2,2)*meu1*q*u + 2*a2*a3*meu1*q*u - 
pow(a3,2)*meu1*q*u + 2*a2*a4*meu1*q*u - 2*a3*a4*meu1*q*u - pow(a4,2)*meu1*q*u - 2*a2*a5*meu1*q*u + 
2*a3*a5*meu1*q*u + 2*a4*a5*meu1*q*u - pow(a5,2)*meu1*q*u + pow(d1,2)*meu1*q*u - pow(d2,2)*meu1*q*u - 
pow(d3,2)*meu1*q*u - pow(d4,2)*meu1*q*u - pow(d5,2)*meu1*q*u - 2*d2*d3*lam2*meu1*q*u - 
2*d3*d4*lam3*meu1*q*u - 2*d2*d4*lam2*lam3*meu1*q*u - 2*d4*d5*lam4*meu1*q*u - 2*d3*d5*lam3*lam4*meu1*q*u - 
2*d2*d5*lam2*lam3*lam4*meu1*q*u - 2*d2*d4*meu1*meu2*meu3*q*u - 2*d2*d5*lam4*meu1*meu2*meu3*q*u - 
2*d2*d5*lam3*meu1*meu2*meu4*q*u + 2*d3*d5*meu1*meu3*meu4*q*u + 2*d2*d5*lam2*meu1*meu3*meu4*q*u + 
meu1*pow(p,2)*q*u + meu1*pow(q,3)*u - 2*a1*lam1*p*r*u - 2*d1*meu1*q*r*u + meu1*q*pow(r,2)*u - 
pow(a1,2)*meu1*p*v + pow(a2,2)*meu1*p*v - 2*a2*a3*meu1*p*v + pow(a3,2)*meu1*p*v - 2*a2*a4*meu1*p*v + 
2*a3*a4*meu1*p*v + pow(a4,2)*meu1*p*v + 2*a2*a5*meu1*p*v - 2*a3*a5*meu1*p*v - 2*a4*a5*meu1*p*v + 
pow(a5,2)*meu1*p*v - pow(d1,2)*meu1*p*v + pow(d2,2)*meu1*p*v + pow(d3,2)*meu1*p*v + pow(d4,2)*meu1*p*v + 
pow(d5,2)*meu1*p*v + 2*d2*d3*lam2*meu1*p*v + 2*d3*d4*lam3*meu1*p*v + 2*d2*d4*lam2*lam3*meu1*p*v + 
2*d4*d5*lam4*meu1*p*v + 2*d3*d5*lam3*lam4*meu1*p*v + 2*d2*d5*lam2*lam3*lam4*meu1*p*v + 
2*d2*d4*meu1*meu2*meu3*p*v + 2*d2*d5*lam4*meu1*meu2*meu3*p*v + 2*d2*d5*lam3*meu1*meu2*meu4*p*v - 
2*d3*d5*meu1*meu3*meu4*p*v - 2*d2*d5*lam2*meu1*meu3*meu4*p*v - meu1*pow(p,3)*v + 2*a1*d2*q*v + 
2*a1*d1*lam1*q*v + 2*a1*d3*lam2*q*v + 2*a1*d4*lam2*lam3*q*v + 2*a1*d5*lam2*lam3*lam4*q*v + 2*a1*d4*meu2*meu3*q*v + 
2*a1*d5*lam4*meu2*meu3*q*v + 2*a1*d5*lam3*meu2*meu4*q*v - 2*a1*d5*lam2*meu3*meu4*q*v - meu1*p*pow(q,2)*v + 
2*d1*meu1*p*r*v - 2*a1*lam1*q*r*v - meu1*p*pow(r,2)*v + 2*a1*lam1*pow(p,2)*w + 2*a1*lam1*pow(q,2)*w};


double a18[]={4*a1*a5*lam3*lam4*meu2*p*u + 4*a1*a5*lam2*lam4*meu3*p*u + 4*a1*a5*lam2*lam3*meu4*p*u - 
4*a1*a5*meu2*meu3*meu4*p*u - 4*a5*d2*lam3*lam4*meu1*meu2*q*u - 4*a5*d3*lam4*meu1*meu3*q*u - 
4*a5*d2*lam2*lam4*meu1*meu3*q*u - 4*a5*d4*meu1*meu4*q*u - 4*a5*d3*lam3*meu1*meu4*q*u - 
4*a5*d2*lam2*lam3*meu1*meu4*q*u + 4*a5*d2*meu1*meu2*meu3*meu4*q*u + 4*a5*d2*lam3*lam4*meu1*meu2*p*v + 
4*a5*d3*lam4*meu1*meu3*p*v + 4*a5*d2*lam2*lam4*meu1*meu3*p*v + 4*a5*d4*meu1*meu4*p*v + 
4*a5*d3*lam3*meu1*meu4*p*v + 4*a5*d2*lam2*lam3*meu1*meu4*p*v - 4*a5*d2*meu1*meu2*meu3*meu4*p*v + 
4*a1*a5*lam3*lam4*meu2*q*v + 4*a1*a5*lam2*lam4*meu3*q*v + 4*a1*a5*lam2*lam3*meu4*q*v - 4*a1*a5*meu2*meu3*meu4*q*v,
-8*a1*meu2*meu5*pow(p,2) - 8*a1*meu2*meu5*pow(q,2) + 8*a2*a5*lam3*lam4*meu1*q*u - 8*a2*a5*meu1*meu3*meu4*q*u - 
8*a2*a5*lam3*lam4*meu1*p*v + 8*a2*a5*meu1*meu3*meu4*p*v,
-4*a1*a5*lam3*lam4*meu2*p*u + 4*a1*a5*lam2*lam4*meu3*p*u + 4*a1*a5*lam2*lam3*meu4*p*u + 
4*a1*a5*meu2*meu3*meu4*p*u + 4*a5*d2*lam3*lam4*meu1*meu2*q*u - 4*a5*d3*lam4*meu1*meu3*q*u - 
4*a5*d2*lam2*lam4*meu1*meu3*q*u - 4*a5*d4*meu1*meu4*q*u - 4*a5*d3*lam3*meu1*meu4*q*u - 
4*a5*d2*lam2*lam3*meu1*meu4*q*u - 4*a5*d2*meu1*meu2*meu3*meu4*q*u - 4*a5*d2*lam3*lam4*meu1*meu2*p*v + 
4*a5*d3*lam4*meu1*meu3*p*v + 4*a5*d2*lam2*lam4*meu1*meu3*p*v + 4*a5*d4*meu1*meu4*p*v + 
4*a5*d3*lam3*meu1*meu4*p*v + 4*a5*d2*lam2*lam3*meu1*meu4*p*v + 4*a5*d2*meu1*meu2*meu3*meu4*p*v - 
4*a1*a5*lam3*lam4*meu2*q*v + 4*a1*a5*lam2*lam4*meu3*q*v + 4*a1*a5*lam2*lam3*meu4*q*v + 4*a1*a5*meu2*meu3*meu4*q*v};


double a19[]={-2*a1*lam2*lam3*lam4*lam5*pow(p,2) + 2*a1*lam4*lam5*meu2*meu3*pow(p,2) + 
2*a1*lam3*lam5*meu2*meu4*pow(p,2) + 2*a1*lam2*lam5*meu3*meu4*pow(p,2) + 2*a1*lam3*lam4*meu2*meu5*pow(p,2) + 
2*a1*lam2*lam4*meu3*meu5*pow(p,2) + 2*a1*lam2*lam3*meu4*meu5*pow(p,2) - 2*a1*meu2*meu3*meu4*meu5*pow(p,2) - 
2*a1*lam2*lam3*lam4*lam5*pow(q,2) + 2*a1*lam4*lam5*meu2*meu3*pow(q,2) + 2*a1*lam3*lam5*meu2*meu4*pow(q,2) + 
2*a1*lam2*lam5*meu3*meu4*pow(q,2) + 2*a1*lam3*lam4*meu2*meu5*pow(q,2) + 2*a1*lam2*lam4*meu3*meu5*pow(q,2) + 
2*a1*lam2*lam3*meu4*meu5*pow(q,2) - 2*a1*meu2*meu3*meu4*meu5*pow(q,2) + 2*a1*d2*p*u + 2*a1*d1*lam1*p*u + 
2*a1*d3*lam2*p*u + 2*a1*d4*lam2*lam3*p*u + 2*a1*d5*lam2*lam3*lam4*p*u - 2*a1*d4*meu2*meu3*p*u - 
2*a1*d5*lam4*meu2*meu3*p*u - 2*a1*d5*lam3*meu2*meu4*p*u - 2*a1*d5*lam2*meu3*meu4*p*u + pow(a1,2)*meu1*q*u - 
pow(a2,2)*meu1*q*u - 2*a2*a3*meu1*q*u - pow(a3,2)*meu1*q*u - 2*a2*a4*meu1*q*u - 2*a3*a4*meu1*q*u - 
pow(a4,2)*meu1*q*u - 2*a2*a5*meu1*q*u - 2*a3*a5*meu1*q*u - 2*a4*a5*meu1*q*u - pow(a5,2)*meu1*q*u + 
pow(d1,2)*meu1*q*u - pow(d2,2)*meu1*q*u - pow(d3,2)*meu1*q*u - pow(d4,2)*meu1*q*u - pow(d5,2)*meu1*q*u - 
2*d2*d3*lam2*meu1*q*u - 2*d3*d4*lam3*meu1*q*u - 2*d2*d4*lam2*lam3*meu1*q*u - 2*d4*d5*lam4*meu1*q*u - 
2*d3*d5*lam3*lam4*meu1*q*u - 2*d2*d5*lam2*lam3*lam4*meu1*q*u + 2*d2*d4*meu1*meu2*meu3*q*u + 
2*d2*d5*lam4*meu1*meu2*meu3*q*u + 2*d2*d5*lam3*meu1*meu2*meu4*q*u + 2*d3*d5*meu1*meu3*meu4*q*u + 
2*d2*d5*lam2*meu1*meu3*meu4*q*u + meu1*pow(p,2)*q*u + meu1*pow(q,3)*u - 2*a1*lam1*p*r*u - 2*d1*meu1*q*r*u + 
meu1*q*pow(r,2)*u - pow(a1,2)*meu1*p*v + pow(a2,2)*meu1*p*v + 2*a2*a3*meu1*p*v + pow(a3,2)*meu1*p*v + 
2*a2*a4*meu1*p*v + 2*a3*a4*meu1*p*v + pow(a4,2)*meu1*p*v + 2*a2*a5*meu1*p*v + 2*a3*a5*meu1*p*v + 
2*a4*a5*meu1*p*v + pow(a5,2)*meu1*p*v - pow(d1,2)*meu1*p*v + pow(d2,2)*meu1*p*v + pow(d3,2)*meu1*p*v + 
pow(d4,2)*meu1*p*v + pow(d5,2)*meu1*p*v + 2*d2*d3*lam2*meu1*p*v + 2*d3*d4*lam3*meu1*p*v + 
2*d2*d4*lam2*lam3*meu1*p*v + 2*d4*d5*lam4*meu1*p*v + 2*d3*d5*lam3*lam4*meu1*p*v + 
2*d2*d5*lam2*lam3*lam4*meu1*p*v - 2*d2*d4*meu1*meu2*meu3*p*v - 2*d2*d5*lam4*meu1*meu2*meu3*p*v - 
2*d2*d5*lam3*meu1*meu2*meu4*p*v - 2*d3*d5*meu1*meu3*meu4*p*v - 2*d2*d5*lam2*meu1*meu3*meu4*p*v - 
meu1*pow(p,3)*v + 2*a1*d2*q*v + 2*a1*d1*lam1*q*v + 2*a1*d3*lam2*q*v + 2*a1*d4*lam2*lam3*q*v + 
2*a1*d5*lam2*lam3*lam4*q*v - 2*a1*d4*meu2*meu3*q*v - 2*a1*d5*lam4*meu2*meu3*q*v - 2*a1*d5*lam3*meu2*meu4*q*v - 
2*a1*d5*lam2*meu3*meu4*q*v - meu1*p*pow(q,2)*v + 2*d1*meu1*p*r*v - 2*a1*lam1*q*r*v - meu1*p*pow(r,2)*v + 
2*a1*lam1*pow(p,2)*w + 2*a1*lam1*pow(q,2)*w,
4*a1*a3*meu2*p*u + 4*a1*a4*meu2*p*u + 4*a1*a5*meu2*p*u - 4*a3*d2*meu1*meu2*q*u - 4*a4*d2*meu1*meu2*q*u - 
4*a5*d2*meu1*meu2*q*u - 4*a2*d4*meu1*meu3*q*u - 4*a2*d5*lam4*meu1*meu3*q*u - 4*a2*d5*lam3*meu1*meu4*q*u + 
4*a3*d2*meu1*meu2*p*v + 4*a4*d2*meu1*meu2*p*v + 4*a5*d2*meu1*meu2*p*v + 4*a2*d4*meu1*meu3*p*v + 
4*a2*d5*lam4*meu1*meu3*p*v + 4*a2*d5*lam3*meu1*meu4*p*v + 4*a1*a3*meu2*q*v + 4*a1*a4*meu2*q*v + 4*a1*a5*meu2*q*v,
-2*a1*lam2*lam3*lam4*lam5*pow(p,2) - 2*a1*lam4*lam5*meu2*meu3*pow(p,2) - 2*a1*lam3*lam5*meu2*meu4*pow(p,2) + 
2*a1*lam2*lam5*meu3*meu4*pow(p,2) - 2*a1*lam3*lam4*meu2*meu5*pow(p,2) + 2*a1*lam2*lam4*meu3*meu5*pow(p,2) + 
2*a1*lam2*lam3*meu4*meu5*pow(p,2) + 2*a1*meu2*meu3*meu4*meu5*pow(p,2) - 2*a1*lam2*lam3*lam4*lam5*pow(q,2) - 
2*a1*lam4*lam5*meu2*meu3*pow(q,2) - 2*a1*lam3*lam5*meu2*meu4*pow(q,2) + 2*a1*lam2*lam5*meu3*meu4*pow(q,2) - 
2*a1*lam3*lam4*meu2*meu5*pow(q,2) + 2*a1*lam2*lam4*meu3*meu5*pow(q,2) + 2*a1*lam2*lam3*meu4*meu5*pow(q,2) + 
2*a1*meu2*meu3*meu4*meu5*pow(q,2) + 2*a1*d2*p*u + 2*a1*d1*lam1*p*u + 2*a1*d3*lam2*p*u + 2*a1*d4*lam2*lam3*p*u + 
2*a1*d5*lam2*lam3*lam4*p*u + 2*a1*d4*meu2*meu3*p*u + 2*a1*d5*lam4*meu2*meu3*p*u + 2*a1*d5*lam3*meu2*meu4*p*u - 
2*a1*d5*lam2*meu3*meu4*p*u + pow(a1,2)*meu1*q*u - pow(a2,2)*meu1*q*u + 2*a2*a3*meu1*q*u - 
pow(a3,2)*meu1*q*u + 2*a2*a4*meu1*q*u - 2*a3*a4*meu1*q*u - pow(a4,2)*meu1*q*u + 2*a2*a5*meu1*q*u - 
2*a3*a5*meu1*q*u - 2*a4*a5*meu1*q*u - pow(a5,2)*meu1*q*u + pow(d1,2)*meu1*q*u - pow(d2,2)*meu1*q*u - 
pow(d3,2)*meu1*q*u - pow(d4,2)*meu1*q*u - pow(d5,2)*meu1*q*u - 2*d2*d3*lam2*meu1*q*u - 
2*d3*d4*lam3*meu1*q*u - 2*d2*d4*lam2*lam3*meu1*q*u - 2*d4*d5*lam4*meu1*q*u - 2*d3*d5*lam3*lam4*meu1*q*u - 
2*d2*d5*lam2*lam3*lam4*meu1*q*u - 2*d2*d4*meu1*meu2*meu3*q*u - 2*d2*d5*lam4*meu1*meu2*meu3*q*u - 
2*d2*d5*lam3*meu1*meu2*meu4*q*u + 2*d3*d5*meu1*meu3*meu4*q*u + 2*d2*d5*lam2*meu1*meu3*meu4*q*u + 
meu1*pow(p,2)*q*u + meu1*pow(q,3)*u - 2*a1*lam1*p*r*u - 2*d1*meu1*q*r*u + meu1*q*pow(r,2)*u - 
pow(a1,2)*meu1*p*v + pow(a2,2)*meu1*p*v - 2*a2*a3*meu1*p*v + pow(a3,2)*meu1*p*v - 2*a2*a4*meu1*p*v + 
2*a3*a4*meu1*p*v + pow(a4,2)*meu1*p*v - 2*a2*a5*meu1*p*v + 2*a3*a5*meu1*p*v + 2*a4*a5*meu1*p*v + 
pow(a5,2)*meu1*p*v - pow(d1,2)*meu1*p*v + pow(d2,2)*meu1*p*v + pow(d3,2)*meu1*p*v + pow(d4,2)*meu1*p*v + 
pow(d5,2)*meu1*p*v + 2*d2*d3*lam2*meu1*p*v + 2*d3*d4*lam3*meu1*p*v + 2*d2*d4*lam2*lam3*meu1*p*v + 
2*d4*d5*lam4*meu1*p*v + 2*d3*d5*lam3*lam4*meu1*p*v + 2*d2*d5*lam2*lam3*lam4*meu1*p*v + 
2*d2*d4*meu1*meu2*meu3*p*v + 2*d2*d5*lam4*meu1*meu2*meu3*p*v + 2*d2*d5*lam3*meu1*meu2*meu4*p*v - 
2*d3*d5*meu1*meu3*meu4*p*v - 2*d2*d5*lam2*meu1*meu3*meu4*p*v - meu1*pow(p,3)*v + 2*a1*d2*q*v + 
2*a1*d1*lam1*q*v + 2*a1*d3*lam2*q*v + 2*a1*d4*lam2*lam3*q*v + 2*a1*d5*lam2*lam3*lam4*q*v + 2*a1*d4*meu2*meu3*q*v + 
2*a1*d5*lam4*meu2*meu3*q*v + 2*a1*d5*lam3*meu2*meu4*q*v - 2*a1*d5*lam2*meu3*meu4*q*v - meu1*p*pow(q,2)*v + 
2*d1*meu1*p*r*v - 2*a1*lam1*q*r*v - meu1*p*pow(r,2)*v + 2*a1*lam1*pow(p,2)*w + 2*a1*lam1*pow(q,2)*w};

	i=0;
	for(j=0;j<3;j++)
		aval[i][j]=a11[j];

	i=1;
	for(j=0;j<3;j++)
		aval[i][j]=a12[j];

	i=2;
	for(j=0;j<3;j++)
		aval[i][j]=a13[j];

	i=3;
	for(j=0;j<3;j++)
		aval[i][j]=a14[j];

	i=4;
	for(j=0;j<3;j++)
		aval[i][j]=a15[j];

	i=5;
	for(j=0;j<3;j++)
		aval[i][j]=a16[j];

	i=6;
	for(j=0;j<3;j++)
		aval[i][j]=a17[j];


	i=7;
	for(j=0;j<3;j++)
		aval[i][j]=a18[j];

	i=8;
	for(j=0;j<3;j++)
		aval[i][j]=a19[j];


}



