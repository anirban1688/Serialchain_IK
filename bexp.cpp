# include <iostream>
# include <math.h>


//bexp(double b11[3],double b12[3],double b13[3],double b14[3],double b15[3],double b16[3],double b17[3],double b18[3],double b19[3])
bexp(double bval[9][3],double meu[6],double lam[6],double a[6],double d[6],double u_r[6])
{

double b11[]={-(a1*lam2*lam3*lam4*lam5*p*u) + a1*lam4*lam5*meu2*meu3*p*u - a1*lam3*lam5*meu2*meu4*p*u - 
a1*lam2*lam5*meu3*meu4*p*u + a1*lam3*lam4*meu2*meu5*p*u + a1*lam2*lam4*meu3*meu5*p*u - 
a1*lam2*lam3*meu4*meu5*p*u + a1*meu2*meu3*meu4*meu5*p*u - d5*lam5*meu1*q*u - d4*lam4*lam5*meu1*q*u - 
d3*lam3*lam4*lam5*meu1*q*u - d2*lam2*lam3*lam4*lam5*meu1*q*u + d2*lam4*lam5*meu1*meu2*meu3*q*u - 
d2*lam3*lam5*meu1*meu2*meu4*q*u - d3*lam5*meu1*meu3*meu4*q*u - d2*lam2*lam5*meu1*meu3*meu4*q*u + 
d2*lam3*lam4*meu1*meu2*meu5*q*u + d3*lam4*meu1*meu3*meu5*q*u + d2*lam2*lam4*meu1*meu3*meu5*q*u - 
d4*meu1*meu4*meu5*q*u - d3*lam3*meu1*meu4*meu5*q*u - d2*lam2*lam3*meu1*meu4*meu5*q*u + 
d2*meu1*meu2*meu3*meu4*meu5*q*u + a1*d2*pow(u,2) + a1*d1*lam1*pow(u,2) + a1*d3*lam2*pow(u,2) + 
a1*d4*lam2*lam3*pow(u,2) + a1*d5*lam2*lam3*lam4*pow(u,2) - a1*d4*meu2*meu3*pow(u,2) - 
a1*d5*lam4*meu2*meu3*pow(u,2) + a1*d5*lam3*meu2*meu4*pow(u,2) + a1*d5*lam2*meu3*meu4*pow(u,2) + 
meu1*p*q*pow(u,2) - a1*lam1*r*pow(u,2) + d5*lam5*meu1*p*v + d4*lam4*lam5*meu1*p*v + 
d3*lam3*lam4*lam5*meu1*p*v + d2*lam2*lam3*lam4*lam5*meu1*p*v - d2*lam4*lam5*meu1*meu2*meu3*p*v + 
d2*lam3*lam5*meu1*meu2*meu4*p*v + d3*lam5*meu1*meu3*meu4*p*v + d2*lam2*lam5*meu1*meu3*meu4*p*v - 
d2*lam3*lam4*meu1*meu2*meu5*p*v - d3*lam4*meu1*meu3*meu5*p*v - d2*lam2*lam4*meu1*meu3*meu5*p*v + 
d4*meu1*meu4*meu5*p*v + d3*lam3*meu1*meu4*meu5*p*v + d2*lam2*lam3*meu1*meu4*meu5*p*v - 
d2*meu1*meu2*meu3*meu4*meu5*p*v - a1*lam2*lam3*lam4*lam5*q*v + a1*lam4*lam5*meu2*meu3*q*v - 
a1*lam3*lam5*meu2*meu4*q*v - a1*lam2*lam5*meu3*meu4*q*v + a1*lam3*lam4*meu2*meu5*q*v + 
a1*lam2*lam4*meu3*meu5*q*v - a1*lam2*lam3*meu4*meu5*q*v + a1*meu2*meu3*meu4*meu5*q*v - meu1*pow(p,2)*u*v + 
meu1*pow(q,2)*u*v + a1*d2*pow(v,2) + a1*d1*lam1*pow(v,2) + a1*d3*lam2*pow(v,2) + 
a1*d4*lam2*lam3*pow(v,2) + a1*d5*lam2*lam3*lam4*pow(v,2) - a1*d4*meu2*meu3*pow(v,2) - 
a1*d5*lam4*meu2*meu3*pow(v,2) + a1*d5*lam3*meu2*meu4*pow(v,2) + a1*d5*lam2*meu3*meu4*pow(v,2) - 
meu1*p*q*pow(v,2) - a1*lam1*r*pow(v,2) + a1*lam1*p*u*w - d1*meu1*q*u*w + meu1*q*r*u*w + d1*meu1*p*v*w + 
a1*lam1*q*v*w - meu1*p*r*v*w,-2*a2*lam4*lam5*meu1*meu3*q*u + 2*a2*lam3*lam5*meu1*meu4*q*u - 
2*a2*lam3*lam4*meu1*meu5*q*u - 2*a2*meu1*meu3*meu4*meu5*q*u + 2*a1*a3*meu2*pow(u,2) - 2*a1*a4*meu2*pow(u,2) + 
2*a1*a5*meu2*pow(u,2) + 2*a2*lam4*lam5*meu1*meu3*p*v - 2*a2*lam3*lam5*meu1*meu4*p*v + 
2*a2*lam3*lam4*meu1*meu5*p*v + 2*a2*meu1*meu3*meu4*meu5*p*v + 2*a1*a3*meu2*pow(v,2) - 2*a1*a4*meu2*pow(v,2) + 
2*a1*a5*meu2*pow(v,2),-(a1*lam2*lam3*lam4*lam5*p*u) - a1*lam4*lam5*meu2*meu3*p*u + a1*lam3*lam5*meu2*meu4*p*u - 
a1*lam2*lam5*meu3*meu4*p*u - a1*lam3*lam4*meu2*meu5*p*u + a1*lam2*lam4*meu3*meu5*p*u - 
a1*lam2*lam3*meu4*meu5*p*u - a1*meu2*meu3*meu4*meu5*p*u - d5*lam5*meu1*q*u - d4*lam4*lam5*meu1*q*u - 
d3*lam3*lam4*lam5*meu1*q*u - d2*lam2*lam3*lam4*lam5*meu1*q*u - d2*lam4*lam5*meu1*meu2*meu3*q*u + 
d2*lam3*lam5*meu1*meu2*meu4*q*u - d3*lam5*meu1*meu3*meu4*q*u - d2*lam2*lam5*meu1*meu3*meu4*q*u - 
d2*lam3*lam4*meu1*meu2*meu5*q*u + d3*lam4*meu1*meu3*meu5*q*u + d2*lam2*lam4*meu1*meu3*meu5*q*u - 
d4*meu1*meu4*meu5*q*u - d3*lam3*meu1*meu4*meu5*q*u - d2*lam2*lam3*meu1*meu4*meu5*q*u - 
d2*meu1*meu2*meu3*meu4*meu5*q*u + a1*d2*pow(u,2) + a1*d1*lam1*pow(u,2) + a1*d3*lam2*pow(u,2) + 
a1*d4*lam2*lam3*pow(u,2) + a1*d5*lam2*lam3*lam4*pow(u,2) + a1*d4*meu2*meu3*pow(u,2) + 
a1*d5*lam4*meu2*meu3*pow(u,2) - a1*d5*lam3*meu2*meu4*pow(u,2) + a1*d5*lam2*meu3*meu4*pow(u,2) + 
meu1*p*q*pow(u,2) - a1*lam1*r*pow(u,2) + d5*lam5*meu1*p*v + d4*lam4*lam5*meu1*p*v + 
d3*lam3*lam4*lam5*meu1*p*v + d2*lam2*lam3*lam4*lam5*meu1*p*v + d2*lam4*lam5*meu1*meu2*meu3*p*v - 
d2*lam3*lam5*meu1*meu2*meu4*p*v + d3*lam5*meu1*meu3*meu4*p*v + d2*lam2*lam5*meu1*meu3*meu4*p*v + 
d2*lam3*lam4*meu1*meu2*meu5*p*v - d3*lam4*meu1*meu3*meu5*p*v - d2*lam2*lam4*meu1*meu3*meu5*p*v + 
d4*meu1*meu4*meu5*p*v + d3*lam3*meu1*meu4*meu5*p*v + d2*lam2*lam3*meu1*meu4*meu5*p*v + 
d2*meu1*meu2*meu3*meu4*meu5*p*v - a1*lam2*lam3*lam4*lam5*q*v - a1*lam4*lam5*meu2*meu3*q*v + 
a1*lam3*lam5*meu2*meu4*q*v - a1*lam2*lam5*meu3*meu4*q*v - a1*lam3*lam4*meu2*meu5*q*v + 
a1*lam2*lam4*meu3*meu5*q*v - a1*lam2*lam3*meu4*meu5*q*v - a1*meu2*meu3*meu4*meu5*q*v - meu1*pow(p,2)*u*v + 
meu1*pow(q,2)*u*v + a1*d2*pow(v,2) + a1*d1*lam1*pow(v,2) + a1*d3*lam2*pow(v,2) + 
a1*d4*lam2*lam3*pow(v,2) + a1*d5*lam2*lam3*lam4*pow(v,2) + a1*d4*meu2*meu3*pow(v,2) + 
a1*d5*lam4*meu2*meu3*pow(v,2) - a1*d5*lam3*meu2*meu4*pow(v,2) + a1*d5*lam2*meu3*meu4*pow(v,2) - 
meu1*p*q*pow(v,2) - a1*lam1*r*pow(v,2) + a1*lam1*p*u*w - d1*meu1*q*u*w + meu1*q*r*u*w + d1*meu1*p*v*w + 
a1*lam1*q*v*w - meu1*p*r*v*w};


double b12[]={2*a2*meu1*meu5*q*u + 2*a3*meu1*meu5*q*u - 2*a4*meu1*meu5*q*u - 2*a1*a5*lam3*lam4*meu2*pow(u,2) - 
2*a1*a5*lam2*lam4*meu3*pow(u,2) + 2*a1*a5*lam2*lam3*meu4*pow(u,2) - 2*a1*a5*meu2*meu3*meu4*pow(u,2) - 
2*a2*meu1*meu5*p*v - 2*a3*meu1*meu5*p*v + 2*a4*meu1*meu5*p*v - 2*a1*a5*lam3*lam4*meu2*pow(v,2) - 
2*a1*a5*lam2*lam4*meu3*pow(v,2) + 2*a1*a5*lam2*lam3*meu4*pow(v,2) - 2*a1*a5*meu2*meu3*meu4*pow(v,2),
4*a1*meu2*meu5*p*u + 4*d2*meu1*meu2*meu5*q*u - 4*d2*meu1*meu2*meu5*p*v + 4*a1*meu2*meu5*q*v,
-2*a2*meu1*meu5*q*u + 2*a3*meu1*meu5*q*u - 2*a4*meu1*meu5*q*u + 2*a1*a5*lam3*lam4*meu2*pow(u,2) - 
2*a1*a5*lam2*lam4*meu3*pow(u,2) + 2*a1*a5*lam2*lam3*meu4*pow(u,2) + 2*a1*a5*meu2*meu3*meu4*pow(u,2) + 
2*a2*meu1*meu5*p*v - 2*a3*meu1*meu5*p*v + 2*a4*meu1*meu5*p*v + 2*a1*a5*lam3*lam4*meu2*pow(v,2) - 
2*a1*a5*lam2*lam4*meu3*pow(v,2) + 2*a1*a5*lam2*lam3*meu4*pow(v,2) + 2*a1*a5*meu2*meu3*meu4*pow(v,2)};


double b13[]={-(a1*lam2*lam3*lam4*lam5*p*u) + a1*lam4*lam5*meu2*meu3*p*u - a1*lam3*lam5*meu2*meu4*p*u - 
a1*lam2*lam5*meu3*meu4*p*u - a1*lam3*lam4*meu2*meu5*p*u - a1*lam2*lam4*meu3*meu5*p*u + 
a1*lam2*lam3*meu4*meu5*p*u - a1*meu2*meu3*meu4*meu5*p*u - d5*lam5*meu1*q*u - d4*lam4*lam5*meu1*q*u - 
d3*lam3*lam4*lam5*meu1*q*u - d2*lam2*lam3*lam4*lam5*meu1*q*u + d2*lam4*lam5*meu1*meu2*meu3*q*u - 
d2*lam3*lam5*meu1*meu2*meu4*q*u - d3*lam5*meu1*meu3*meu4*q*u - d2*lam2*lam5*meu1*meu3*meu4*q*u - 
d2*lam3*lam4*meu1*meu2*meu5*q*u - d3*lam4*meu1*meu3*meu5*q*u - d2*lam2*lam4*meu1*meu3*meu5*q*u + 
d4*meu1*meu4*meu5*q*u + d3*lam3*meu1*meu4*meu5*q*u + d2*lam2*lam3*meu1*meu4*meu5*q*u - 
d2*meu1*meu2*meu3*meu4*meu5*q*u + a1*d2*pow(u,2) + a1*d1*lam1*pow(u,2) + a1*d3*lam2*pow(u,2) + 
a1*d4*lam2*lam3*pow(u,2) + a1*d5*lam2*lam3*lam4*pow(u,2) - a1*d4*meu2*meu3*pow(u,2) - 
a1*d5*lam4*meu2*meu3*pow(u,2) + a1*d5*lam3*meu2*meu4*pow(u,2) + a1*d5*lam2*meu3*meu4*pow(u,2) + 
meu1*p*q*pow(u,2) - a1*lam1*r*pow(u,2) + d5*lam5*meu1*p*v + d4*lam4*lam5*meu1*p*v + 
d3*lam3*lam4*lam5*meu1*p*v + d2*lam2*lam3*lam4*lam5*meu1*p*v - d2*lam4*lam5*meu1*meu2*meu3*p*v + 
d2*lam3*lam5*meu1*meu2*meu4*p*v + d3*lam5*meu1*meu3*meu4*p*v + d2*lam2*lam5*meu1*meu3*meu4*p*v + 
d2*lam3*lam4*meu1*meu2*meu5*p*v + d3*lam4*meu1*meu3*meu5*p*v + d2*lam2*lam4*meu1*meu3*meu5*p*v - 
d4*meu1*meu4*meu5*p*v - d3*lam3*meu1*meu4*meu5*p*v - d2*lam2*lam3*meu1*meu4*meu5*p*v + 
d2*meu1*meu2*meu3*meu4*meu5*p*v - a1*lam2*lam3*lam4*lam5*q*v + a1*lam4*lam5*meu2*meu3*q*v - 
a1*lam3*lam5*meu2*meu4*q*v - a1*lam2*lam5*meu3*meu4*q*v - a1*lam3*lam4*meu2*meu5*q*v - 
a1*lam2*lam4*meu3*meu5*q*v + a1*lam2*lam3*meu4*meu5*q*v - a1*meu2*meu3*meu4*meu5*q*v - meu1*pow(p,2)*u*v + 
meu1*pow(q,2)*u*v + a1*d2*pow(v,2) + a1*d1*lam1*pow(v,2) + a1*d3*lam2*pow(v,2) + 
a1*d4*lam2*lam3*pow(v,2) + a1*d5*lam2*lam3*lam4*pow(v,2) - a1*d4*meu2*meu3*pow(v,2) - 
a1*d5*lam4*meu2*meu3*pow(v,2) + a1*d5*lam3*meu2*meu4*pow(v,2) + a1*d5*lam2*meu3*meu4*pow(v,2) - 
meu1*p*q*pow(v,2) - a1*lam1*r*pow(v,2) + a1*lam1*p*u*w - d1*meu1*q*u*w + meu1*q*r*u*w + d1*meu1*p*v*w + 
a1*lam1*q*v*w - meu1*p*r*v*w,-2*a2*lam4*lam5*meu1*meu3*q*u + 2*a2*lam3*lam5*meu1*meu4*q*u + 
2*a2*lam3*lam4*meu1*meu5*q*u + 2*a2*meu1*meu3*meu4*meu5*q*u + 2*a1*a3*meu2*pow(u,2) - 2*a1*a4*meu2*pow(u,2) - 
2*a1*a5*meu2*pow(u,2) + 2*a2*lam4*lam5*meu1*meu3*p*v - 2*a2*lam3*lam5*meu1*meu4*p*v - 
2*a2*lam3*lam4*meu1*meu5*p*v - 2*a2*meu1*meu3*meu4*meu5*p*v + 2*a1*a3*meu2*pow(v,2) - 2*a1*a4*meu2*pow(v,2) - 
2*a1*a5*meu2*pow(v,2),-(a1*lam2*lam3*lam4*lam5*p*u) - a1*lam4*lam5*meu2*meu3*p*u + a1*lam3*lam5*meu2*meu4*p*u - 
a1*lam2*lam5*meu3*meu4*p*u + a1*lam3*lam4*meu2*meu5*p*u - a1*lam2*lam4*meu3*meu5*p*u + 
a1*lam2*lam3*meu4*meu5*p*u + a1*meu2*meu3*meu4*meu5*p*u - d5*lam5*meu1*q*u - d4*lam4*lam5*meu1*q*u - 
d3*lam3*lam4*lam5*meu1*q*u - d2*lam2*lam3*lam4*lam5*meu1*q*u - d2*lam4*lam5*meu1*meu2*meu3*q*u + 
d2*lam3*lam5*meu1*meu2*meu4*q*u - d3*lam5*meu1*meu3*meu4*q*u - d2*lam2*lam5*meu1*meu3*meu4*q*u + 
d2*lam3*lam4*meu1*meu2*meu5*q*u - d3*lam4*meu1*meu3*meu5*q*u - d2*lam2*lam4*meu1*meu3*meu5*q*u + 
d4*meu1*meu4*meu5*q*u + d3*lam3*meu1*meu4*meu5*q*u + d2*lam2*lam3*meu1*meu4*meu5*q*u + 
d2*meu1*meu2*meu3*meu4*meu5*q*u + a1*d2*pow(u,2) + a1*d1*lam1*pow(u,2) + a1*d3*lam2*pow(u,2) + 
a1*d4*lam2*lam3*pow(u,2) + a1*d5*lam2*lam3*lam4*pow(u,2) + a1*d4*meu2*meu3*pow(u,2) + 
a1*d5*lam4*meu2*meu3*pow(u,2) - a1*d5*lam3*meu2*meu4*pow(u,2) + a1*d5*lam2*meu3*meu4*pow(u,2) + 
meu1*p*q*pow(u,2) - a1*lam1*r*pow(u,2) + d5*lam5*meu1*p*v + d4*lam4*lam5*meu1*p*v + 
d3*lam3*lam4*lam5*meu1*p*v + d2*lam2*lam3*lam4*lam5*meu1*p*v + d2*lam4*lam5*meu1*meu2*meu3*p*v - 
d2*lam3*lam5*meu1*meu2*meu4*p*v + d3*lam5*meu1*meu3*meu4*p*v + d2*lam2*lam5*meu1*meu3*meu4*p*v - 
d2*lam3*lam4*meu1*meu2*meu5*p*v + d3*lam4*meu1*meu3*meu5*p*v + d2*lam2*lam4*meu1*meu3*meu5*p*v - 
d4*meu1*meu4*meu5*p*v - d3*lam3*meu1*meu4*meu5*p*v - d2*lam2*lam3*meu1*meu4*meu5*p*v - 
d2*meu1*meu2*meu3*meu4*meu5*p*v - a1*lam2*lam3*lam4*lam5*q*v - a1*lam4*lam5*meu2*meu3*q*v + 
a1*lam3*lam5*meu2*meu4*q*v - a1*lam2*lam5*meu3*meu4*q*v + a1*lam3*lam4*meu2*meu5*q*v - 
a1*lam2*lam4*meu3*meu5*q*v + a1*lam2*lam3*meu4*meu5*q*v + a1*meu2*meu3*meu4*meu5*q*v - meu1*pow(p,2)*u*v + 
meu1*pow(q,2)*u*v + a1*d2*pow(v,2) + a1*d1*lam1*pow(v,2) + a1*d3*lam2*pow(v,2) + 
a1*d4*lam2*lam3*pow(v,2) + a1*d5*lam2*lam3*lam4*pow(v,2) + a1*d4*meu2*meu3*pow(v,2) + 
a1*d5*lam4*meu2*meu3*pow(v,2) - a1*d5*lam3*meu2*meu4*pow(v,2) + a1*d5*lam2*meu3*meu4*pow(v,2) - 
meu1*p*q*pow(v,2) - a1*lam1*r*pow(v,2) + a1*lam1*p*u*w - d1*meu1*q*u*w + meu1*q*r*u*w + d1*meu1*p*v*w + 
a1*lam1*q*v*w - meu1*p*r*v*w};

double b14[]={-2*a2*lam5*meu1*meu4*q*u - 2*a3*lam5*meu1*meu4*q*u + 2*a2*lam4*meu1*meu5*q*u + 2*a3*lam4*meu1*meu5*q*u + 
2*a1*a4*lam3*meu2*pow(u,2) - 2*a1*a5*lam3*meu2*pow(u,2) + 2*a1*a4*lam2*meu3*pow(u,2) - 
2*a1*a5*lam2*meu3*pow(u,2) + 2*a2*lam5*meu1*meu4*p*v + 2*a3*lam5*meu1*meu4*p*v - 2*a2*lam4*meu1*meu5*p*v - 
2*a3*lam4*meu1*meu5*p*v + 2*a1*a4*lam3*meu2*pow(v,2) - 2*a1*a5*lam3*meu2*pow(v,2) + 
2*a1*a4*lam2*meu3*pow(v,2) - 2*a1*a5*lam2*meu3*pow(v,2),
-4*a1*lam5*meu2*meu4*p*u + 4*a1*lam4*meu2*meu5*p*u - 4*d2*lam5*meu1*meu2*meu4*q*u + 4*d2*lam4*meu1*meu2*meu5*q*u + 
4*a1*d5*meu2*meu4*pow(u,2) + 4*d2*lam5*meu1*meu2*meu4*p*v - 4*d2*lam4*meu1*meu2*meu5*p*v - 
4*a1*lam5*meu2*meu4*q*v + 4*a1*lam4*meu2*meu5*q*v + 4*a1*d5*meu2*meu4*pow(v,2),
2*a2*lam5*meu1*meu4*q*u - 2*a3*lam5*meu1*meu4*q*u - 2*a2*lam4*meu1*meu5*q*u + 2*a3*lam4*meu1*meu5*q*u - 
2*a1*a4*lam3*meu2*pow(u,2) + 2*a1*a5*lam3*meu2*pow(u,2) + 2*a1*a4*lam2*meu3*pow(u,2) - 
2*a1*a5*lam2*meu3*pow(u,2) - 2*a2*lam5*meu1*meu4*p*v + 2*a3*lam5*meu1*meu4*p*v + 2*a2*lam4*meu1*meu5*p*v - 
2*a3*lam4*meu1*meu5*p*v - 2*a1*a4*lam3*meu2*pow(v,2) + 2*a1*a5*lam3*meu2*pow(v,2) + 
2*a1*a4*lam2*meu3*pow(v,2) - 2*a1*a5*lam2*meu3*pow(v,2)};

double b15[]={-4*a1*lam3*meu2*meu5*p*u - 4*a1*lam2*meu3*meu5*p*u - 4*d2*lam3*meu1*meu2*meu5*q*u - 4*d3*meu1*meu3*meu5*q*u - 
4*d2*lam2*meu1*meu3*meu5*q*u + 4*d2*lam3*meu1*meu2*meu5*p*v + 4*d3*meu1*meu3*meu5*p*v + 
4*d2*lam2*meu1*meu3*meu5*p*v - 4*a1*lam3*meu2*meu5*q*v - 4*a1*lam2*meu3*meu5*q*v,
8*a2*lam3*meu1*meu5*q*u - 8*a1*a5*lam4*meu2*pow(u,2) - 8*a2*lam3*meu1*meu5*p*v - 8*a1*a5*lam4*meu2*pow(v,2),
4*a1*lam3*meu2*meu5*p*u - 4*a1*lam2*meu3*meu5*p*u + 4*d2*lam3*meu1*meu2*meu5*q*u - 4*d3*meu1*meu3*meu5*q*u - 
4*d2*lam2*meu1*meu3*meu5*q*u - 4*d2*lam3*meu1*meu2*meu5*p*v + 4*d3*meu1*meu3*meu5*p*v + 
4*d2*lam2*meu1*meu3*meu5*p*v + 4*a1*lam3*meu2*meu5*q*v - 4*a1*lam2*meu3*meu5*q*v};

double b16[]={-2*a2*lam5*meu1*meu4*q*u - 2*a3*lam5*meu1*meu4*q*u - 2*a2*lam4*meu1*meu5*q*u - 2*a3*lam4*meu1*meu5*q*u + 
2*a1*a4*lam3*meu2*pow(u,2) + 2*a1*a5*lam3*meu2*pow(u,2) + 2*a1*a4*lam2*meu3*pow(u,2) + 
2*a1*a5*lam2*meu3*pow(u,2) + 2*a2*lam5*meu1*meu4*p*v + 2*a3*lam5*meu1*meu4*p*v + 2*a2*lam4*meu1*meu5*p*v + 
2*a3*lam4*meu1*meu5*p*v + 2*a1*a4*lam3*meu2*pow(v,2) + 2*a1*a5*lam3*meu2*pow(v,2) + 
2*a1*a4*lam2*meu3*pow(v,2) + 2*a1*a5*lam2*meu3*pow(v,2),
-4*a1*lam5*meu2*meu4*p*u - 4*a1*lam4*meu2*meu5*p*u - 4*d2*lam5*meu1*meu2*meu4*q*u - 4*d2*lam4*meu1*meu2*meu5*q*u + 
4*a1*d5*meu2*meu4*pow(u,2) + 4*d2*lam5*meu1*meu2*meu4*p*v + 4*d2*lam4*meu1*meu2*meu5*p*v - 
4*a1*lam5*meu2*meu4*q*v - 4*a1*lam4*meu2*meu5*q*v + 4*a1*d5*meu2*meu4*pow(v,2),
2*a2*lam5*meu1*meu4*q*u - 2*a3*lam5*meu1*meu4*q*u + 2*a2*lam4*meu1*meu5*q*u - 2*a3*lam4*meu1*meu5*q*u - 
2*a1*a4*lam3*meu2*pow(u,2) - 2*a1*a5*lam3*meu2*pow(u,2) + 2*a1*a4*lam2*meu3*pow(u,2) + 
2*a1*a5*lam2*meu3*pow(u,2) - 2*a2*lam5*meu1*meu4*p*v + 2*a3*lam5*meu1*meu4*p*v - 2*a2*lam4*meu1*meu5*p*v + 
2*a3*lam4*meu1*meu5*p*v - 2*a1*a4*lam3*meu2*pow(v,2) - 2*a1*a5*lam3*meu2*pow(v,2) + 
2*a1*a4*lam2*meu3*pow(v,2) + 2*a1*a5*lam2*meu3*pow(v,2)};

double b17[]={-(a1*lam2*lam3*lam4*lam5*p*u) + a1*lam4*lam5*meu2*meu3*p*u + a1*lam3*lam5*meu2*meu4*p*u + 
a1*lam2*lam5*meu3*meu4*p*u - a1*lam3*lam4*meu2*meu5*p*u - a1*lam2*lam4*meu3*meu5*p*u - a1*lam2*lam3*meu4*meu5*p*u + 
a1*meu2*meu3*meu4*meu5*p*u - d5*lam5*meu1*q*u - d4*lam4*lam5*meu1*q*u - d3*lam3*lam4*lam5*meu1*q*u - 
d2*lam2*lam3*lam4*lam5*meu1*q*u + d2*lam4*lam5*meu1*meu2*meu3*q*u + d2*lam3*lam5*meu1*meu2*meu4*q*u + 
d3*lam5*meu1*meu3*meu4*q*u + d2*lam2*lam5*meu1*meu3*meu4*q*u - d2*lam3*lam4*meu1*meu2*meu5*q*u - 
d3*lam4*meu1*meu3*meu5*q*u - d2*lam2*lam4*meu1*meu3*meu5*q*u - d4*meu1*meu4*meu5*q*u - d3*lam3*meu1*meu4*meu5*q*u - 
d2*lam2*lam3*meu1*meu4*meu5*q*u + d2*meu1*meu2*meu3*meu4*meu5*q*u + a1*d2*pow(u,2) + a1*d1*lam1*pow(u,2) + 
a1*d3*lam2*pow(u,2) + a1*d4*lam2*lam3*pow(u,2) + a1*d5*lam2*lam3*lam4*pow(u,2) - a1*d4*meu2*meu3*pow(u,2) - 
a1*d5*lam4*meu2*meu3*pow(u,2) - a1*d5*lam3*meu2*meu4*pow(u,2) - a1*d5*lam2*meu3*meu4*pow(u,2) + 
meu1*p*q*pow(u,2) - a1*lam1*r*pow(u,2) + d5*lam5*meu1*p*v + d4*lam4*lam5*meu1*p*v + 
d3*lam3*lam4*lam5*meu1*p*v + d2*lam2*lam3*lam4*lam5*meu1*p*v - d2*lam4*lam5*meu1*meu2*meu3*p*v - 
d2*lam3*lam5*meu1*meu2*meu4*p*v - d3*lam5*meu1*meu3*meu4*p*v - d2*lam2*lam5*meu1*meu3*meu4*p*v + 
d2*lam3*lam4*meu1*meu2*meu5*p*v + d3*lam4*meu1*meu3*meu5*p*v + d2*lam2*lam4*meu1*meu3*meu5*p*v + 
d4*meu1*meu4*meu5*p*v + d3*lam3*meu1*meu4*meu5*p*v + d2*lam2*lam3*meu1*meu4*meu5*p*v - 
d2*meu1*meu2*meu3*meu4*meu5*p*v - a1*lam2*lam3*lam4*lam5*q*v + a1*lam4*lam5*meu2*meu3*q*v + 
a1*lam3*lam5*meu2*meu4*q*v + a1*lam2*lam5*meu3*meu4*q*v - a1*lam3*lam4*meu2*meu5*q*v - a1*lam2*lam4*meu3*meu5*q*v - 
a1*lam2*lam3*meu4*meu5*q*v + a1*meu2*meu3*meu4*meu5*q*v - meu1*pow(p,2)*u*v + meu1*pow(q,2)*u*v + 
a1*d2*pow(v,2) + a1*d1*lam1*pow(v,2) + a1*d3*lam2*pow(v,2) + a1*d4*lam2*lam3*pow(v,2) + 
a1*d5*lam2*lam3*lam4*pow(v,2) - a1*d4*meu2*meu3*pow(v,2) - a1*d5*lam4*meu2*meu3*pow(v,2) - 
a1*d5*lam3*meu2*meu4*pow(v,2) - a1*d5*lam2*meu3*meu4*pow(v,2) - meu1*p*q*pow(v,2) - a1*lam1*r*pow(v,2) + 
a1*lam1*p*u*w - d1*meu1*q*u*w + meu1*q*r*u*w + d1*meu1*p*v*w + a1*lam1*q*v*w - meu1*p*r*v*w,
-2*a2*lam4*lam5*meu1*meu3*q*u - 2*a2*lam3*lam5*meu1*meu4*q*u + 2*a2*lam3*lam4*meu1*meu5*q*u - 
2*a2*meu1*meu3*meu4*meu5*q*u + 2*a1*a3*meu2*pow(u,2) + 2*a1*a4*meu2*pow(u,2) - 2*a1*a5*meu2*pow(u,2) + 
2*a2*lam4*lam5*meu1*meu3*p*v + 2*a2*lam3*lam5*meu1*meu4*p*v - 2*a2*lam3*lam4*meu1*meu5*p*v + 
2*a2*meu1*meu3*meu4*meu5*p*v + 2*a1*a3*meu2*pow(v,2) + 2*a1*a4*meu2*pow(v,2) - 2*a1*a5*meu2*pow(v,2),
-(a1*lam2*lam3*lam4*lam5*p*u) - a1*lam4*lam5*meu2*meu3*p*u - a1*lam3*lam5*meu2*meu4*p*u + 
a1*lam2*lam5*meu3*meu4*p*u + a1*lam3*lam4*meu2*meu5*p*u - a1*lam2*lam4*meu3*meu5*p*u - a1*lam2*lam3*meu4*meu5*p*u - 
a1*meu2*meu3*meu4*meu5*p*u - d5*lam5*meu1*q*u - d4*lam4*lam5*meu1*q*u - d3*lam3*lam4*lam5*meu1*q*u - 
d2*lam2*lam3*lam4*lam5*meu1*q*u - d2*lam4*lam5*meu1*meu2*meu3*q*u - d2*lam3*lam5*meu1*meu2*meu4*q*u + 
d3*lam5*meu1*meu3*meu4*q*u + d2*lam2*lam5*meu1*meu3*meu4*q*u + d2*lam3*lam4*meu1*meu2*meu5*q*u - 
d3*lam4*meu1*meu3*meu5*q*u - d2*lam2*lam4*meu1*meu3*meu5*q*u - d4*meu1*meu4*meu5*q*u - d3*lam3*meu1*meu4*meu5*q*u - 
d2*lam2*lam3*meu1*meu4*meu5*q*u - d2*meu1*meu2*meu3*meu4*meu5*q*u + a1*d2*pow(u,2) + a1*d1*lam1*pow(u,2) + 
a1*d3*lam2*pow(u,2) + a1*d4*lam2*lam3*pow(u,2) + a1*d5*lam2*lam3*lam4*pow(u,2) + a1*d4*meu2*meu3*pow(u,2) + 
a1*d5*lam4*meu2*meu3*pow(u,2) + a1*d5*lam3*meu2*meu4*pow(u,2) - a1*d5*lam2*meu3*meu4*pow(u,2) + 
meu1*p*q*pow(u,2) - a1*lam1*r*pow(u,2) + d5*lam5*meu1*p*v + d4*lam4*lam5*meu1*p*v + 
d3*lam3*lam4*lam5*meu1*p*v + d2*lam2*lam3*lam4*lam5*meu1*p*v + d2*lam4*lam5*meu1*meu2*meu3*p*v + 
d2*lam3*lam5*meu1*meu2*meu4*p*v - d3*lam5*meu1*meu3*meu4*p*v - d2*lam2*lam5*meu1*meu3*meu4*p*v - 
d2*lam3*lam4*meu1*meu2*meu5*p*v + d3*lam4*meu1*meu3*meu5*p*v + d2*lam2*lam4*meu1*meu3*meu5*p*v + 
d4*meu1*meu4*meu5*p*v + d3*lam3*meu1*meu4*meu5*p*v + d2*lam2*lam3*meu1*meu4*meu5*p*v + 
d2*meu1*meu2*meu3*meu4*meu5*p*v - a1*lam2*lam3*lam4*lam5*q*v - a1*lam4*lam5*meu2*meu3*q*v - 
a1*lam3*lam5*meu2*meu4*q*v + a1*lam2*lam5*meu3*meu4*q*v + a1*lam3*lam4*meu2*meu5*q*v - a1*lam2*lam4*meu3*meu5*q*v - 
a1*lam2*lam3*meu4*meu5*q*v - a1*meu2*meu3*meu4*meu5*q*v - meu1*pow(p,2)*u*v + meu1*pow(q,2)*u*v + 
a1*d2*pow(v,2) + a1*d1*lam1*pow(v,2) + a1*d3*lam2*pow(v,2) + a1*d4*lam2*lam3*pow(v,2) + 
a1*d5*lam2*lam3*lam4*pow(v,2) + a1*d4*meu2*meu3*pow(v,2) + a1*d5*lam4*meu2*meu3*pow(v,2) + 
a1*d5*lam3*meu2*meu4*pow(v,2) - a1*d5*lam2*meu3*meu4*pow(v,2) - meu1*p*q*pow(v,2) - a1*lam1*r*pow(v,2) + 
a1*lam1*p*u*w - d1*meu1*q*u*w + meu1*q*r*u*w + d1*meu1*p*v*w + a1*lam1*q*v*w - meu1*p*r*v*w};


double b18[]={-2*a2*meu1*meu5*q*u - 2*a3*meu1*meu5*q*u - 2*a4*meu1*meu5*q*u + 2*a1*a5*lam3*lam4*meu2*pow(u,2) + 
2*a1*a5*lam2*lam4*meu3*pow(u,2) + 2*a1*a5*lam2*lam3*meu4*pow(u,2) - 2*a1*a5*meu2*meu3*meu4*pow(u,2) + 
2*a2*meu1*meu5*p*v + 2*a3*meu1*meu5*p*v + 2*a4*meu1*meu5*p*v + 2*a1*a5*lam3*lam4*meu2*pow(v,2) + 
2*a1*a5*lam2*lam4*meu3*pow(v,2) + 2*a1*a5*lam2*lam3*meu4*pow(v,2) - 2*a1*a5*meu2*meu3*meu4*pow(v,2),
-4*a1*meu2*meu5*p*u - 4*d2*meu1*meu2*meu5*q*u + 4*d2*meu1*meu2*meu5*p*v - 4*a1*meu2*meu5*q*v,
2*a2*meu1*meu5*q*u - 2*a3*meu1*meu5*q*u - 2*a4*meu1*meu5*q*u - 2*a1*a5*lam3*lam4*meu2*pow(u,2) + 
2*a1*a5*lam2*lam4*meu3*pow(u,2) + 2*a1*a5*lam2*lam3*meu4*pow(u,2) + 2*a1*a5*meu2*meu3*meu4*pow(u,2) - 
2*a2*meu1*meu5*p*v + 2*a3*meu1*meu5*p*v + 2*a4*meu1*meu5*p*v - 2*a1*a5*lam3*lam4*meu2*pow(v,2) + 
2*a1*a5*lam2*lam4*meu3*pow(v,2) + 2*a1*a5*lam2*lam3*meu4*pow(v,2) + 2*a1*a5*meu2*meu3*meu4*pow(v,2)};


double b19[]={-(a1*lam2*lam3*lam4*lam5*p*u) + a1*lam4*lam5*meu2*meu3*p*u + a1*lam3*lam5*meu2*meu4*p*u + 
a1*lam2*lam5*meu3*meu4*p*u + a1*lam3*lam4*meu2*meu5*p*u + a1*lam2*lam4*meu3*meu5*p*u + a1*lam2*lam3*meu4*meu5*p*u - 
a1*meu2*meu3*meu4*meu5*p*u - d5*lam5*meu1*q*u - d4*lam4*lam5*meu1*q*u - d3*lam3*lam4*lam5*meu1*q*u - 
d2*lam2*lam3*lam4*lam5*meu1*q*u + d2*lam4*lam5*meu1*meu2*meu3*q*u + d2*lam3*lam5*meu1*meu2*meu4*q*u + 
d3*lam5*meu1*meu3*meu4*q*u + d2*lam2*lam5*meu1*meu3*meu4*q*u + d2*lam3*lam4*meu1*meu2*meu5*q*u + 
d3*lam4*meu1*meu3*meu5*q*u + d2*lam2*lam4*meu1*meu3*meu5*q*u + d4*meu1*meu4*meu5*q*u + d3*lam3*meu1*meu4*meu5*q*u + 
d2*lam2*lam3*meu1*meu4*meu5*q*u - d2*meu1*meu2*meu3*meu4*meu5*q*u + a1*d2*pow(u,2) + a1*d1*lam1*pow(u,2) + 
a1*d3*lam2*pow(u,2) + a1*d4*lam2*lam3*pow(u,2) + a1*d5*lam2*lam3*lam4*pow(u,2) - a1*d4*meu2*meu3*pow(u,2) - 
a1*d5*lam4*meu2*meu3*pow(u,2) - a1*d5*lam3*meu2*meu4*pow(u,2) - a1*d5*lam2*meu3*meu4*pow(u,2) + 
meu1*p*q*pow(u,2) - a1*lam1*r*pow(u,2) + d5*lam5*meu1*p*v + d4*lam4*lam5*meu1*p*v + 
d3*lam3*lam4*lam5*meu1*p*v + d2*lam2*lam3*lam4*lam5*meu1*p*v - d2*lam4*lam5*meu1*meu2*meu3*p*v - 
d2*lam3*lam5*meu1*meu2*meu4*p*v - d3*lam5*meu1*meu3*meu4*p*v - d2*lam2*lam5*meu1*meu3*meu4*p*v - 
d2*lam3*lam4*meu1*meu2*meu5*p*v - d3*lam4*meu1*meu3*meu5*p*v - d2*lam2*lam4*meu1*meu3*meu5*p*v - 
d4*meu1*meu4*meu5*p*v - d3*lam3*meu1*meu4*meu5*p*v - d2*lam2*lam3*meu1*meu4*meu5*p*v + 
d2*meu1*meu2*meu3*meu4*meu5*p*v - a1*lam2*lam3*lam4*lam5*q*v + a1*lam4*lam5*meu2*meu3*q*v + 
a1*lam3*lam5*meu2*meu4*q*v + a1*lam2*lam5*meu3*meu4*q*v + a1*lam3*lam4*meu2*meu5*q*v + a1*lam2*lam4*meu3*meu5*q*v + 
a1*lam2*lam3*meu4*meu5*q*v - a1*meu2*meu3*meu4*meu5*q*v - meu1*pow(p,2)*u*v + meu1*pow(q,2)*u*v + 
a1*d2*pow(v,2) + a1*d1*lam1*pow(v,2) + a1*d3*lam2*pow(v,2) + a1*d4*lam2*lam3*pow(v,2) + 
a1*d5*lam2*lam3*lam4*pow(v,2) - a1*d4*meu2*meu3*pow(v,2) - a1*d5*lam4*meu2*meu3*pow(v,2) - 
a1*d5*lam3*meu2*meu4*pow(v,2) - a1*d5*lam2*meu3*meu4*pow(v,2) - meu1*p*q*pow(v,2) - a1*lam1*r*pow(v,2) + 
a1*lam1*p*u*w - d1*meu1*q*u*w + meu1*q*r*u*w + d1*meu1*p*v*w + a1*lam1*q*v*w - meu1*p*r*v*w,
-2*a2*lam4*lam5*meu1*meu3*q*u - 2*a2*lam3*lam5*meu1*meu4*q*u - 2*a2*lam3*lam4*meu1*meu5*q*u + 
2*a2*meu1*meu3*meu4*meu5*q*u + 2*a1*a3*meu2*pow(u,2) + 2*a1*a4*meu2*pow(u,2) + 2*a1*a5*meu2*pow(u,2) + 
2*a2*lam4*lam5*meu1*meu3*p*v + 2*a2*lam3*lam5*meu1*meu4*p*v + 2*a2*lam3*lam4*meu1*meu5*p*v - 
2*a2*meu1*meu3*meu4*meu5*p*v + 2*a1*a3*meu2*pow(v,2) + 2*a1*a4*meu2*pow(v,2) + 2*a1*a5*meu2*pow(v,2),
-(a1*lam2*lam3*lam4*lam5*p*u) - a1*lam4*lam5*meu2*meu3*p*u - a1*lam3*lam5*meu2*meu4*p*u + 
a1*lam2*lam5*meu3*meu4*p*u - a1*lam3*lam4*meu2*meu5*p*u + a1*lam2*lam4*meu3*meu5*p*u + a1*lam2*lam3*meu4*meu5*p*u + 
a1*meu2*meu3*meu4*meu5*p*u - d5*lam5*meu1*q*u - d4*lam4*lam5*meu1*q*u - d3*lam3*lam4*lam5*meu1*q*u - 
d2*lam2*lam3*lam4*lam5*meu1*q*u - d2*lam4*lam5*meu1*meu2*meu3*q*u - d2*lam3*lam5*meu1*meu2*meu4*q*u + 
d3*lam5*meu1*meu3*meu4*q*u + d2*lam2*lam5*meu1*meu3*meu4*q*u - d2*lam3*lam4*meu1*meu2*meu5*q*u + 
d3*lam4*meu1*meu3*meu5*q*u + d2*lam2*lam4*meu1*meu3*meu5*q*u + d4*meu1*meu4*meu5*q*u + d3*lam3*meu1*meu4*meu5*q*u + 
d2*lam2*lam3*meu1*meu4*meu5*q*u + d2*meu1*meu2*meu3*meu4*meu5*q*u + a1*d2*pow(u,2) + a1*d1*lam1*pow(u,2) + 
a1*d3*lam2*pow(u,2) + a1*d4*lam2*lam3*pow(u,2) + a1*d5*lam2*lam3*lam4*pow(u,2) + a1*d4*meu2*meu3*pow(u,2) + 
a1*d5*lam4*meu2*meu3*pow(u,2) + a1*d5*lam3*meu2*meu4*pow(u,2) - a1*d5*lam2*meu3*meu4*pow(u,2) + 
meu1*p*q*pow(u,2) - a1*lam1*r*pow(u,2) + d5*lam5*meu1*p*v + d4*lam4*lam5*meu1*p*v + 
d3*lam3*lam4*lam5*meu1*p*v + d2*lam2*lam3*lam4*lam5*meu1*p*v + d2*lam4*lam5*meu1*meu2*meu3*p*v + 
d2*lam3*lam5*meu1*meu2*meu4*p*v - d3*lam5*meu1*meu3*meu4*p*v - d2*lam2*lam5*meu1*meu3*meu4*p*v + 
d2*lam3*lam4*meu1*meu2*meu5*p*v - d3*lam4*meu1*meu3*meu5*p*v - d2*lam2*lam4*meu1*meu3*meu5*p*v - 
d4*meu1*meu4*meu5*p*v - d3*lam3*meu1*meu4*meu5*p*v - d2*lam2*lam3*meu1*meu4*meu5*p*v - 
d2*meu1*meu2*meu3*meu4*meu5*p*v - a1*lam2*lam3*lam4*lam5*q*v - a1*lam4*lam5*meu2*meu3*q*v - 
a1*lam3*lam5*meu2*meu4*q*v + a1*lam2*lam5*meu3*meu4*q*v - a1*lam3*lam4*meu2*meu5*q*v + a1*lam2*lam4*meu3*meu5*q*v + 
a1*lam2*lam3*meu4*meu5*q*v + a1*meu2*meu3*meu4*meu5*q*v - meu1*pow(p,2)*u*v + meu1*pow(q,2)*u*v + 
a1*d2*pow(v,2) + a1*d1*lam1*pow(v,2) + a1*d3*lam2*pow(v,2) + a1*d4*lam2*lam3*pow(v,2) + 
a1*d5*lam2*lam3*lam4*pow(v,2) + a1*d4*meu2*meu3*pow(v,2) + a1*d5*lam4*meu2*meu3*pow(v,2) + 
a1*d5*lam3*meu2*meu4*pow(v,2) - a1*d5*lam2*meu3*meu4*pow(v,2) - meu1*p*q*pow(v,2) - a1*lam1*r*pow(v,2) + 
a1*lam1*p*u*w - d1*meu1*q*u*w + meu1*q*r*u*w + d1*meu1*p*v*w + a1*lam1*q*v*w - meu1*p*r*v*w};


	i=0;
	for(j=0;j<3;j++)
		bval[i][j]=b11[j];

	i=1;
	for(j=0;j<3;j++)
		bval[i][j]=b12[j];

	i=2;
	for(j=0;j<3;j++)
		bval[i][j]=b13[j];

	i=3;
	for(j=0;j<3;j++)
		bval[i][j]=b14[j];

	i=4;
	for(j=0;j<3;j++)
		bval[i][j]=b15[j];

	i=5;
	for(j=0;j<3;j++)
		bval[i][j]=b16[j];

	i=6;
	for(j=0;j<3;j++)
		bval[i][j]=b17[j];


	i=7;
	for(j=0;j<3;j++)
		bval[i][j]=b18[j];

	i=8;
	for(j=0;j<3;j++)
		bval[i][j]=b19[j];



}
