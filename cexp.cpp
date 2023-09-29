# include <iostream>
# include <math.h>


//cexp(double c11[3],double c12[3],double c13[3],double c14[3],double c15[3],double c16[3],double c17[3],double c18[3],double c19[3])
cexp(double cval[9][3],double meu[6],double lam[6],double a[6],double d[6],double u_r[6])
{
    int i,j;
    double meu1=meu[0];
    double meu2=meu[1];
    double meu3=meu[2];
    double meu4=meu[3];
    double meu5=meu[4];
    double meu6=meu[5];

    double lam1=lam[0];
    double lam2=lam[1];
    double lam3=lam[2];
    double lam4=lam[3];
    double lam5=lam[4];
    double lam6=lam[5];


    double a1=a[0];
    double a2=a[1];
    double a3=a[2];
    double a4=a[3];
    double a5=a[4];
    double a6=a[5];

    double d1=d[0];
    double d2=d[1];
    double d3=d[2];
    double d4=d[3];
    double d5=d[4];
    double d6=d[5];

    double u= u_r[0];
    double v= u_r[1];
    double w= u_r[2];
    double p= u_r[3];
    double q= u_r[4];
    double r= u_r[5];


double c11[]={-(d1*lam2*lam3*lam4*lam5*meu1*p*u) + d1*lam4*lam5*meu1*meu2*meu3*p*u - d1*lam3*lam5*meu1*meu2*meu4*p*u - 
    d1*lam2*lam5*meu1*meu3*meu4*p*u + d1*lam3*lam4*meu1*meu2*meu5*p*u + d1*lam2*lam4*meu1*meu3*meu5*p*u - 
    d1*lam2*lam3*meu1*meu4*meu5*p*u + d1*meu1*meu2*meu3*meu4*meu5*p*u - a1*lam1*lam2*lam3*lam4*lam5*q*u - 
    a2*lam3*lam4*lam5*meu1*meu2*q*u - a3*lam3*lam4*lam5*meu1*meu2*q*u + a4*lam3*lam4*lam5*meu1*meu2*q*u - 
    a5*lam3*lam4*lam5*meu1*meu2*q*u - a2*lam2*lam4*lam5*meu1*meu3*q*u - a3*lam2*lam4*lam5*meu1*meu3*q*u + 
    a4*lam2*lam4*lam5*meu1*meu3*q*u - a5*lam2*lam4*lam5*meu1*meu3*q*u + a1*lam1*lam4*lam5*meu2*meu3*q*u + 
    a2*lam2*lam3*lam5*meu1*meu4*q*u + a3*lam2*lam3*lam5*meu1*meu4*q*u - a4*lam2*lam3*lam5*meu1*meu4*q*u + 
    a5*lam2*lam3*lam5*meu1*meu4*q*u - a1*lam1*lam3*lam5*meu2*meu4*q*u - a1*lam1*lam2*lam5*meu3*meu4*q*u - 
    a2*lam5*meu1*meu2*meu3*meu4*q*u - a3*lam5*meu1*meu2*meu3*meu4*q*u + a4*lam5*meu1*meu2*meu3*meu4*q*u - 
    a5*lam5*meu1*meu2*meu3*meu4*q*u - a2*lam2*lam3*lam4*meu1*meu5*q*u - a3*lam2*lam3*lam4*meu1*meu5*q*u + 
    a4*lam2*lam3*lam4*meu1*meu5*q*u - a5*lam2*lam3*lam4*meu1*meu5*q*u + a1*lam1*lam3*lam4*meu2*meu5*q*u + 
    a1*lam1*lam2*lam4*meu3*meu5*q*u + a2*lam4*meu1*meu2*meu3*meu5*q*u + a3*lam4*meu1*meu2*meu3*meu5*q*u - 
    a4*lam4*meu1*meu2*meu3*meu5*q*u + a5*lam4*meu1*meu2*meu3*meu5*q*u - a1*lam1*lam2*lam3*meu4*meu5*q*u - 
    a2*lam3*meu1*meu2*meu4*meu5*q*u - a3*lam3*meu1*meu2*meu4*meu5*q*u + a4*lam3*meu1*meu2*meu4*meu5*q*u - 
    a5*lam3*meu1*meu2*meu4*meu5*q*u - a2*lam2*meu1*meu3*meu4*meu5*q*u - a3*lam2*meu1*meu3*meu4*meu5*q*u + 
    a4*lam2*meu1*meu3*meu4*meu5*q*u - a5*lam2*meu1*meu3*meu4*meu5*q*u + a1*lam1*meu2*meu3*meu4*meu5*q*u + 
    lam2*lam3*lam4*lam5*meu1*p*r*u - lam4*lam5*meu1*meu2*meu3*p*r*u + lam3*lam5*meu1*meu2*meu4*p*r*u + 
    lam2*lam5*meu1*meu3*meu4*p*r*u - lam3*lam4*meu1*meu2*meu5*p*r*u - lam2*lam4*meu1*meu3*meu5*p*r*u + 
    lam2*lam3*meu1*meu4*meu5*p*r*u - meu1*meu2*meu3*meu4*meu5*p*r*u + d1*d2*meu1*pow(u,2) + 
    pow(d1,2)*lam1*meu1*pow(u,2) + d1*d3*lam2*meu1*pow(u,2) + d1*d4*lam2*lam3*meu1*pow(u,2) + 
    d1*d5*lam2*lam3*lam4*meu1*pow(u,2) - d1*d4*meu1*meu2*meu3*pow(u,2) - d1*d5*lam4*meu1*meu2*meu3*pow(u,2) + 
    d1*d5*lam3*meu1*meu2*meu4*pow(u,2) + d1*d5*lam2*meu1*meu3*meu4*pow(u,2) + lam1*meu1*pow(q,2)*pow(u,2) - 
    d2*meu1*r*pow(u,2) - 2*d1*lam1*meu1*r*pow(u,2) - d3*lam2*meu1*r*pow(u,2) - d4*lam2*lam3*meu1*r*pow(u,2) - 
    d5*lam2*lam3*lam4*meu1*r*pow(u,2) + d4*meu1*meu2*meu3*r*pow(u,2) + d5*lam4*meu1*meu2*meu3*r*pow(u,2) - 
    d5*lam3*meu1*meu2*meu4*r*pow(u,2) - d5*lam2*meu1*meu3*meu4*r*pow(u,2) + lam1*meu1*pow(r,2)*pow(u,2) + 
    a1*lam1*lam2*lam3*lam4*lam5*p*v + a2*lam3*lam4*lam5*meu1*meu2*p*v + a3*lam3*lam4*lam5*meu1*meu2*p*v - 
    a4*lam3*lam4*lam5*meu1*meu2*p*v + a5*lam3*lam4*lam5*meu1*meu2*p*v + a2*lam2*lam4*lam5*meu1*meu3*p*v + 
    a3*lam2*lam4*lam5*meu1*meu3*p*v - a4*lam2*lam4*lam5*meu1*meu3*p*v + a5*lam2*lam4*lam5*meu1*meu3*p*v - 
    a1*lam1*lam4*lam5*meu2*meu3*p*v - a2*lam2*lam3*lam5*meu1*meu4*p*v - a3*lam2*lam3*lam5*meu1*meu4*p*v + 
    a4*lam2*lam3*lam5*meu1*meu4*p*v - a5*lam2*lam3*lam5*meu1*meu4*p*v + a1*lam1*lam3*lam5*meu2*meu4*p*v + 
    a1*lam1*lam2*lam5*meu3*meu4*p*v + a2*lam5*meu1*meu2*meu3*meu4*p*v + a3*lam5*meu1*meu2*meu3*meu4*p*v - 
    a4*lam5*meu1*meu2*meu3*meu4*p*v + a5*lam5*meu1*meu2*meu3*meu4*p*v + a2*lam2*lam3*lam4*meu1*meu5*p*v + 
    a3*lam2*lam3*lam4*meu1*meu5*p*v - a4*lam2*lam3*lam4*meu1*meu5*p*v + a5*lam2*lam3*lam4*meu1*meu5*p*v - 
    a1*lam1*lam3*lam4*meu2*meu5*p*v - a1*lam1*lam2*lam4*meu3*meu5*p*v - a2*lam4*meu1*meu2*meu3*meu5*p*v - 
    a3*lam4*meu1*meu2*meu3*meu5*p*v + a4*lam4*meu1*meu2*meu3*meu5*p*v - a5*lam4*meu1*meu2*meu3*meu5*p*v + 
    a1*lam1*lam2*lam3*meu4*meu5*p*v + a2*lam3*meu1*meu2*meu4*meu5*p*v + a3*lam3*meu1*meu2*meu4*meu5*p*v - 
    a4*lam3*meu1*meu2*meu4*meu5*p*v + a5*lam3*meu1*meu2*meu4*meu5*p*v + a2*lam2*meu1*meu3*meu4*meu5*p*v + 
    a3*lam2*meu1*meu3*meu4*meu5*p*v - a4*lam2*meu1*meu3*meu4*meu5*p*v + a5*lam2*meu1*meu3*meu4*meu5*p*v - 
    a1*lam1*meu2*meu3*meu4*meu5*p*v - d1*lam2*lam3*lam4*lam5*meu1*q*v + d1*lam4*lam5*meu1*meu2*meu3*q*v - 
    d1*lam3*lam5*meu1*meu2*meu4*q*v - d1*lam2*lam5*meu1*meu3*meu4*q*v + d1*lam3*lam4*meu1*meu2*meu5*q*v + 
    d1*lam2*lam4*meu1*meu3*meu5*q*v - d1*lam2*lam3*meu1*meu4*meu5*q*v + d1*meu1*meu2*meu3*meu4*meu5*q*v + 
    lam2*lam3*lam4*lam5*meu1*q*r*v - lam4*lam5*meu1*meu2*meu3*q*r*v + lam3*lam5*meu1*meu2*meu4*q*r*v + 
    lam2*lam5*meu1*meu3*meu4*q*r*v - lam3*lam4*meu1*meu2*meu5*q*r*v - lam2*lam4*meu1*meu3*meu5*q*r*v + 
    lam2*lam3*meu1*meu4*meu5*q*r*v - meu1*meu2*meu3*meu4*meu5*q*r*v - 2*lam1*meu1*p*q*u*v + d1*d2*meu1*pow(v,2) + 
    pow(d1,2)*lam1*meu1*pow(v,2) + d1*d3*lam2*meu1*pow(v,2) + d1*d4*lam2*lam3*meu1*pow(v,2) + 
    d1*d5*lam2*lam3*lam4*meu1*pow(v,2) - d1*d4*meu1*meu2*meu3*pow(v,2) - d1*d5*lam4*meu1*meu2*meu3*pow(v,2) + 
    d1*d5*lam3*meu1*meu2*meu4*pow(v,2) + d1*d5*lam2*meu1*meu3*meu4*pow(v,2) + lam1*meu1*pow(p,2)*pow(v,2) - 
    d2*meu1*r*pow(v,2) - 2*d1*lam1*meu1*r*pow(v,2) - d3*lam2*meu1*r*pow(v,2) - d4*lam2*lam3*meu1*r*pow(v,2) - 
    d5*lam2*lam3*lam4*meu1*r*pow(v,2) + d4*meu1*meu2*meu3*r*pow(v,2) + d5*lam4*meu1*meu2*meu3*r*pow(v,2) - 
    d5*lam3*meu1*meu2*meu4*r*pow(v,2) - d5*lam2*meu1*meu3*meu4*r*pow(v,2) + lam1*meu1*pow(r,2)*pow(v,2) - 
    lam2*lam3*lam4*lam5*meu1*pow(p,2)*w + lam4*lam5*meu1*meu2*meu3*pow(p,2)*w - 
    lam3*lam5*meu1*meu2*meu4*pow(p,2)*w - lam2*lam5*meu1*meu3*meu4*pow(p,2)*w + 
    lam3*lam4*meu1*meu2*meu5*pow(p,2)*w + lam2*lam4*meu1*meu3*meu5*pow(p,2)*w - 
    lam2*lam3*meu1*meu4*meu5*pow(p,2)*w + meu1*meu2*meu3*meu4*meu5*pow(p,2)*w - 
    lam2*lam3*lam4*lam5*meu1*pow(q,2)*w + lam4*lam5*meu1*meu2*meu3*pow(q,2)*w - 
    lam3*lam5*meu1*meu2*meu4*pow(q,2)*w - lam2*lam5*meu1*meu3*meu4*pow(q,2)*w + 
    lam3*lam4*meu1*meu2*meu5*pow(q,2)*w + lam2*lam4*meu1*meu3*meu5*pow(q,2)*w - 
    lam2*lam3*meu1*meu4*meu5*pow(q,2)*w + meu1*meu2*meu3*meu4*meu5*pow(q,2)*w + d2*meu1*p*u*w + 
    2*d1*lam1*meu1*p*u*w + d3*lam2*meu1*p*u*w + d4*lam2*lam3*meu1*p*u*w + d5*lam2*lam3*lam4*meu1*p*u*w - 
    d4*meu1*meu2*meu3*p*u*w - d5*lam4*meu1*meu2*meu3*p*u*w + d5*lam3*meu1*meu2*meu4*p*u*w + 
    d5*lam2*meu1*meu3*meu4*p*u*w + a1*q*u*w - 2*lam1*meu1*p*r*u*w - a1*p*v*w + d2*meu1*q*v*w + 2*d1*lam1*meu1*q*v*w + 
    d3*lam2*meu1*q*v*w + d4*lam2*lam3*meu1*q*v*w + d5*lam2*lam3*lam4*meu1*q*v*w - d4*meu1*meu2*meu3*q*v*w - 
    d5*lam4*meu1*meu2*meu3*q*v*w + d5*lam3*meu1*meu2*meu4*q*v*w + d5*lam2*meu1*meu3*meu4*q*v*w - 2*lam1*meu1*q*r*v*w + 
    lam1*meu1*pow(p,2)*pow(w,2) + lam1*meu1*pow(q,2)*pow(w,2),
   2*d3*lam4*lam5*meu1*meu2*meu3*q*u - 2*d4*lam5*meu1*meu2*meu4*q*u - 2*d3*lam3*lam5*meu1*meu2*meu4*q*u + 
    2*d5*meu1*meu2*meu5*q*u + 2*d4*lam4*meu1*meu2*meu5*q*u + 2*d3*lam3*lam4*meu1*meu2*meu5*q*u + 
    2*d3*meu1*meu2*meu3*meu4*meu5*q*u + 2*a3*d1*meu1*meu2*pow(u,2) - 2*a4*d1*meu1*meu2*pow(u,2) + 
    2*a5*d1*meu1*meu2*pow(u,2) - 2*a3*meu1*meu2*r*pow(u,2) + 2*a4*meu1*meu2*r*pow(u,2) - 
    2*a5*meu1*meu2*r*pow(u,2) - 2*d3*lam4*lam5*meu1*meu2*meu3*p*v + 2*d4*lam5*meu1*meu2*meu4*p*v + 
    2*d3*lam3*lam5*meu1*meu2*meu4*p*v - 2*d5*meu1*meu2*meu5*p*v - 2*d4*lam4*meu1*meu2*meu5*p*v - 
    2*d3*lam3*lam4*meu1*meu2*meu5*p*v - 2*d3*meu1*meu2*meu3*meu4*meu5*p*v + 2*a3*d1*meu1*meu2*pow(v,2) - 
    2*a4*d1*meu1*meu2*pow(v,2) + 2*a5*d1*meu1*meu2*pow(v,2) - 2*a3*meu1*meu2*r*pow(v,2) + 
    2*a4*meu1*meu2*r*pow(v,2) - 2*a5*meu1*meu2*r*pow(v,2) + 2*a3*meu1*meu2*p*u*w - 2*a4*meu1*meu2*p*u*w + 
    2*a5*meu1*meu2*p*u*w + 2*a3*meu1*meu2*q*v*w - 2*a4*meu1*meu2*q*v*w + 2*a5*meu1*meu2*q*v*w,
   -(d1*lam2*lam3*lam4*lam5*meu1*p*u) - d1*lam4*lam5*meu1*meu2*meu3*p*u + d1*lam3*lam5*meu1*meu2*meu4*p*u - 
    d1*lam2*lam5*meu1*meu3*meu4*p*u - d1*lam3*lam4*meu1*meu2*meu5*p*u + d1*lam2*lam4*meu1*meu3*meu5*p*u - 
    d1*lam2*lam3*meu1*meu4*meu5*p*u - d1*meu1*meu2*meu3*meu4*meu5*p*u - a1*lam1*lam2*lam3*lam4*lam5*q*u - 
    a2*lam3*lam4*lam5*meu1*meu2*q*u + a3*lam3*lam4*lam5*meu1*meu2*q*u - a4*lam3*lam4*lam5*meu1*meu2*q*u + 
    a5*lam3*lam4*lam5*meu1*meu2*q*u + a2*lam2*lam4*lam5*meu1*meu3*q*u - a3*lam2*lam4*lam5*meu1*meu3*q*u + 
    a4*lam2*lam4*lam5*meu1*meu3*q*u - a5*lam2*lam4*lam5*meu1*meu3*q*u - a1*lam1*lam4*lam5*meu2*meu3*q*u - 
    a2*lam2*lam3*lam5*meu1*meu4*q*u + a3*lam2*lam3*lam5*meu1*meu4*q*u - a4*lam2*lam3*lam5*meu1*meu4*q*u + 
    a5*lam2*lam3*lam5*meu1*meu4*q*u + a1*lam1*lam3*lam5*meu2*meu4*q*u - a1*lam1*lam2*lam5*meu3*meu4*q*u - 
    a2*lam5*meu1*meu2*meu3*meu4*q*u + a3*lam5*meu1*meu2*meu3*meu4*q*u - a4*lam5*meu1*meu2*meu3*meu4*q*u + 
    a5*lam5*meu1*meu2*meu3*meu4*q*u + a2*lam2*lam3*lam4*meu1*meu5*q*u - a3*lam2*lam3*lam4*meu1*meu5*q*u + 
    a4*lam2*lam3*lam4*meu1*meu5*q*u - a5*lam2*lam3*lam4*meu1*meu5*q*u - a1*lam1*lam3*lam4*meu2*meu5*q*u + 
    a1*lam1*lam2*lam4*meu3*meu5*q*u + a2*lam4*meu1*meu2*meu3*meu5*q*u - a3*lam4*meu1*meu2*meu3*meu5*q*u + 
    a4*lam4*meu1*meu2*meu3*meu5*q*u - a5*lam4*meu1*meu2*meu3*meu5*q*u - a1*lam1*lam2*lam3*meu4*meu5*q*u - 
    a2*lam3*meu1*meu2*meu4*meu5*q*u + a3*lam3*meu1*meu2*meu4*meu5*q*u - a4*lam3*meu1*meu2*meu4*meu5*q*u + 
    a5*lam3*meu1*meu2*meu4*meu5*q*u + a2*lam2*meu1*meu3*meu4*meu5*q*u - a3*lam2*meu1*meu3*meu4*meu5*q*u + 
    a4*lam2*meu1*meu3*meu4*meu5*q*u - a5*lam2*meu1*meu3*meu4*meu5*q*u - a1*lam1*meu2*meu3*meu4*meu5*q*u + 
    lam2*lam3*lam4*lam5*meu1*p*r*u + lam4*lam5*meu1*meu2*meu3*p*r*u - lam3*lam5*meu1*meu2*meu4*p*r*u + 
    lam2*lam5*meu1*meu3*meu4*p*r*u + lam3*lam4*meu1*meu2*meu5*p*r*u - lam2*lam4*meu1*meu3*meu5*p*r*u + 
    lam2*lam3*meu1*meu4*meu5*p*r*u + meu1*meu2*meu3*meu4*meu5*p*r*u + d1*d2*meu1*pow(u,2) + 
    pow(d1,2)*lam1*meu1*pow(u,2) + d1*d3*lam2*meu1*pow(u,2) + d1*d4*lam2*lam3*meu1*pow(u,2) + 
    d1*d5*lam2*lam3*lam4*meu1*pow(u,2) + d1*d4*meu1*meu2*meu3*pow(u,2) + d1*d5*lam4*meu1*meu2*meu3*pow(u,2) - 
    d1*d5*lam3*meu1*meu2*meu4*pow(u,2) + d1*d5*lam2*meu1*meu3*meu4*pow(u,2) + lam1*meu1*pow(q,2)*pow(u,2) - 
    d2*meu1*r*pow(u,2) - 2*d1*lam1*meu1*r*pow(u,2) - d3*lam2*meu1*r*pow(u,2) - d4*lam2*lam3*meu1*r*pow(u,2) - 
    d5*lam2*lam3*lam4*meu1*r*pow(u,2) - d4*meu1*meu2*meu3*r*pow(u,2) - d5*lam4*meu1*meu2*meu3*r*pow(u,2) + 
    d5*lam3*meu1*meu2*meu4*r*pow(u,2) - d5*lam2*meu1*meu3*meu4*r*pow(u,2) + lam1*meu1*pow(r,2)*pow(u,2) + 
    a1*lam1*lam2*lam3*lam4*lam5*p*v + a2*lam3*lam4*lam5*meu1*meu2*p*v - a3*lam3*lam4*lam5*meu1*meu2*p*v + 
    a4*lam3*lam4*lam5*meu1*meu2*p*v - a5*lam3*lam4*lam5*meu1*meu2*p*v - a2*lam2*lam4*lam5*meu1*meu3*p*v + 
    a3*lam2*lam4*lam5*meu1*meu3*p*v - a4*lam2*lam4*lam5*meu1*meu3*p*v + a5*lam2*lam4*lam5*meu1*meu3*p*v + 
    a1*lam1*lam4*lam5*meu2*meu3*p*v + a2*lam2*lam3*lam5*meu1*meu4*p*v - a3*lam2*lam3*lam5*meu1*meu4*p*v + 
    a4*lam2*lam3*lam5*meu1*meu4*p*v - a5*lam2*lam3*lam5*meu1*meu4*p*v - a1*lam1*lam3*lam5*meu2*meu4*p*v + 
    a1*lam1*lam2*lam5*meu3*meu4*p*v + a2*lam5*meu1*meu2*meu3*meu4*p*v - a3*lam5*meu1*meu2*meu3*meu4*p*v + 
    a4*lam5*meu1*meu2*meu3*meu4*p*v - a5*lam5*meu1*meu2*meu3*meu4*p*v - a2*lam2*lam3*lam4*meu1*meu5*p*v + 
    a3*lam2*lam3*lam4*meu1*meu5*p*v - a4*lam2*lam3*lam4*meu1*meu5*p*v + a5*lam2*lam3*lam4*meu1*meu5*p*v + 
    a1*lam1*lam3*lam4*meu2*meu5*p*v - a1*lam1*lam2*lam4*meu3*meu5*p*v - a2*lam4*meu1*meu2*meu3*meu5*p*v + 
    a3*lam4*meu1*meu2*meu3*meu5*p*v - a4*lam4*meu1*meu2*meu3*meu5*p*v + a5*lam4*meu1*meu2*meu3*meu5*p*v + 
    a1*lam1*lam2*lam3*meu4*meu5*p*v + a2*lam3*meu1*meu2*meu4*meu5*p*v - a3*lam3*meu1*meu2*meu4*meu5*p*v + 
    a4*lam3*meu1*meu2*meu4*meu5*p*v - a5*lam3*meu1*meu2*meu4*meu5*p*v - a2*lam2*meu1*meu3*meu4*meu5*p*v + 
    a3*lam2*meu1*meu3*meu4*meu5*p*v - a4*lam2*meu1*meu3*meu4*meu5*p*v + a5*lam2*meu1*meu3*meu4*meu5*p*v + 
    a1*lam1*meu2*meu3*meu4*meu5*p*v - d1*lam2*lam3*lam4*lam5*meu1*q*v - d1*lam4*lam5*meu1*meu2*meu3*q*v + 
    d1*lam3*lam5*meu1*meu2*meu4*q*v - d1*lam2*lam5*meu1*meu3*meu4*q*v - d1*lam3*lam4*meu1*meu2*meu5*q*v + 
    d1*lam2*lam4*meu1*meu3*meu5*q*v - d1*lam2*lam3*meu1*meu4*meu5*q*v - d1*meu1*meu2*meu3*meu4*meu5*q*v + 
    lam2*lam3*lam4*lam5*meu1*q*r*v + lam4*lam5*meu1*meu2*meu3*q*r*v - lam3*lam5*meu1*meu2*meu4*q*r*v + 
    lam2*lam5*meu1*meu3*meu4*q*r*v + lam3*lam4*meu1*meu2*meu5*q*r*v - lam2*lam4*meu1*meu3*meu5*q*r*v + 
    lam2*lam3*meu1*meu4*meu5*q*r*v + meu1*meu2*meu3*meu4*meu5*q*r*v - 2*lam1*meu1*p*q*u*v + d1*d2*meu1*pow(v,2) + 
    pow(d1,2)*lam1*meu1*pow(v,2) + d1*d3*lam2*meu1*pow(v,2) + d1*d4*lam2*lam3*meu1*pow(v,2) + 
    d1*d5*lam2*lam3*lam4*meu1*pow(v,2) + d1*d4*meu1*meu2*meu3*pow(v,2) + d1*d5*lam4*meu1*meu2*meu3*pow(v,2) - 
    d1*d5*lam3*meu1*meu2*meu4*pow(v,2) + d1*d5*lam2*meu1*meu3*meu4*pow(v,2) + lam1*meu1*pow(p,2)*pow(v,2) - 
    d2*meu1*r*pow(v,2) - 2*d1*lam1*meu1*r*pow(v,2) - d3*lam2*meu1*r*pow(v,2) - d4*lam2*lam3*meu1*r*pow(v,2) - 
    d5*lam2*lam3*lam4*meu1*r*pow(v,2) - d4*meu1*meu2*meu3*r*pow(v,2) - d5*lam4*meu1*meu2*meu3*r*pow(v,2) + 
    d5*lam3*meu1*meu2*meu4*r*pow(v,2) - d5*lam2*meu1*meu3*meu4*r*pow(v,2) + lam1*meu1*pow(r,2)*pow(v,2) - 
    lam2*lam3*lam4*lam5*meu1*pow(p,2)*w - lam4*lam5*meu1*meu2*meu3*pow(p,2)*w + 
    lam3*lam5*meu1*meu2*meu4*pow(p,2)*w - lam2*lam5*meu1*meu3*meu4*pow(p,2)*w - 
    lam3*lam4*meu1*meu2*meu5*pow(p,2)*w + lam2*lam4*meu1*meu3*meu5*pow(p,2)*w - 
    lam2*lam3*meu1*meu4*meu5*pow(p,2)*w - meu1*meu2*meu3*meu4*meu5*pow(p,2)*w - 
    lam2*lam3*lam4*lam5*meu1*pow(q,2)*w - lam4*lam5*meu1*meu2*meu3*pow(q,2)*w + 
    lam3*lam5*meu1*meu2*meu4*pow(q,2)*w - lam2*lam5*meu1*meu3*meu4*pow(q,2)*w - 
    lam3*lam4*meu1*meu2*meu5*pow(q,2)*w + lam2*lam4*meu1*meu3*meu5*pow(q,2)*w - 
    lam2*lam3*meu1*meu4*meu5*pow(q,2)*w - meu1*meu2*meu3*meu4*meu5*pow(q,2)*w + d2*meu1*p*u*w + 
    2*d1*lam1*meu1*p*u*w + d3*lam2*meu1*p*u*w + d4*lam2*lam3*meu1*p*u*w + d5*lam2*lam3*lam4*meu1*p*u*w + 
    d4*meu1*meu2*meu3*p*u*w + d5*lam4*meu1*meu2*meu3*p*u*w - d5*lam3*meu1*meu2*meu4*p*u*w + 
    d5*lam2*meu1*meu3*meu4*p*u*w + a1*q*u*w - 2*lam1*meu1*p*r*u*w - a1*p*v*w + d2*meu1*q*v*w + 2*d1*lam1*meu1*q*v*w + 
    d3*lam2*meu1*q*v*w + d4*lam2*lam3*meu1*q*v*w + d5*lam2*lam3*lam4*meu1*q*v*w + d4*meu1*meu2*meu3*q*v*w + 
    d5*lam4*meu1*meu2*meu3*q*v*w - d5*lam3*meu1*meu2*meu4*q*v*w + d5*lam2*meu1*meu3*meu4*q*v*w - 2*lam1*meu1*q*r*v*w + 
    lam1*meu1*pow(p,2)*pow(w,2) + lam1*meu1*pow(q,2)*pow(w,2)};




    double c12[]={-2*d3*meu1*meu2*meu5*q*u - 2*d4*lam3*meu1*meu2*meu5*q*u - 2*d5*lam3*lam4*meu1*meu2*meu5*q*u - 
    2*d4*lam2*meu1*meu3*meu5*q*u - 2*d5*lam2*lam4*meu1*meu3*meu5*q*u + 2*d5*lam2*lam3*meu1*meu4*meu5*q*u - 
    2*d5*meu1*meu2*meu3*meu4*meu5*q*u - 2*a5*d1*lam3*lam4*meu1*meu2*pow(u,2) - 
    2*a5*d1*lam2*lam4*meu1*meu3*pow(u,2) + 2*a5*d1*lam2*lam3*meu1*meu4*pow(u,2) - 
    2*a5*d1*meu1*meu2*meu3*meu4*pow(u,2) + 2*a5*lam3*lam4*meu1*meu2*r*pow(u,2) + 
    2*a5*lam2*lam4*meu1*meu3*r*pow(u,2) - 2*a5*lam2*lam3*meu1*meu4*r*pow(u,2) + 
    2*a5*meu1*meu2*meu3*meu4*r*pow(u,2) + 2*d3*meu1*meu2*meu5*p*v + 2*d4*lam3*meu1*meu2*meu5*p*v + 
    2*d5*lam3*lam4*meu1*meu2*meu5*p*v + 2*d4*lam2*meu1*meu3*meu5*p*v + 2*d5*lam2*lam4*meu1*meu3*meu5*p*v - 
    2*d5*lam2*lam3*meu1*meu4*meu5*p*v + 2*d5*meu1*meu2*meu3*meu4*meu5*p*v - 2*a5*d1*lam3*lam4*meu1*meu2*pow(v,2) - 
    2*a5*d1*lam2*lam4*meu1*meu3*pow(v,2) + 2*a5*d1*lam2*lam3*meu1*meu4*pow(v,2) - 
    2*a5*d1*meu1*meu2*meu3*meu4*pow(v,2) + 2*a5*lam3*lam4*meu1*meu2*r*pow(v,2) + 
    2*a5*lam2*lam4*meu1*meu3*r*pow(v,2) - 2*a5*lam2*lam3*meu1*meu4*r*pow(v,2) + 
    2*a5*meu1*meu2*meu3*meu4*r*pow(v,2) - 2*a5*lam3*lam4*meu1*meu2*p*u*w - 2*a5*lam2*lam4*meu1*meu3*p*u*w + 
    2*a5*lam2*lam3*meu1*meu4*p*u*w - 2*a5*meu1*meu2*meu3*meu4*p*u*w - 2*a5*lam3*lam4*meu1*meu2*q*v*w - 
    2*a5*lam2*lam4*meu1*meu3*q*v*w + 2*a5*lam2*lam3*meu1*meu4*q*v*w - 2*a5*meu1*meu2*meu3*meu4*q*v*w,
   4*d1*meu1*meu2*meu5*p*u - 4*a5*lam5*meu1*meu2*q*u - 4*a2*lam2*meu1*meu5*q*u + 4*a1*lam1*meu2*meu5*q*u - 
    4*meu1*meu2*meu5*p*r*u + 4*a5*lam5*meu1*meu2*p*v + 4*a2*lam2*meu1*meu5*p*v - 4*a1*lam1*meu2*meu5*p*v + 
    4*d1*meu1*meu2*meu5*q*v - 4*meu1*meu2*meu5*q*r*v + 4*meu1*meu2*meu5*pow(p,2)*w + 4*meu1*meu2*meu5*pow(q,2)*w,
   2*d3*meu1*meu2*meu5*q*u + 2*d4*lam3*meu1*meu2*meu5*q*u + 2*d5*lam3*lam4*meu1*meu2*meu5*q*u - 
    2*d4*lam2*meu1*meu3*meu5*q*u - 2*d5*lam2*lam4*meu1*meu3*meu5*q*u + 2*d5*lam2*lam3*meu1*meu4*meu5*q*u + 
    2*d5*meu1*meu2*meu3*meu4*meu5*q*u + 2*a5*d1*lam3*lam4*meu1*meu2*pow(u,2) - 
    2*a5*d1*lam2*lam4*meu1*meu3*pow(u,2) + 2*a5*d1*lam2*lam3*meu1*meu4*pow(u,2) + 
    2*a5*d1*meu1*meu2*meu3*meu4*pow(u,2) - 2*a5*lam3*lam4*meu1*meu2*r*pow(u,2) + 
    2*a5*lam2*lam4*meu1*meu3*r*pow(u,2) - 2*a5*lam2*lam3*meu1*meu4*r*pow(u,2) - 
    2*a5*meu1*meu2*meu3*meu4*r*pow(u,2) - 2*d3*meu1*meu2*meu5*p*v - 2*d4*lam3*meu1*meu2*meu5*p*v - 
    2*d5*lam3*lam4*meu1*meu2*meu5*p*v + 2*d4*lam2*meu1*meu3*meu5*p*v + 2*d5*lam2*lam4*meu1*meu3*meu5*p*v - 
    2*d5*lam2*lam3*meu1*meu4*meu5*p*v - 2*d5*meu1*meu2*meu3*meu4*meu5*p*v + 2*a5*d1*lam3*lam4*meu1*meu2*pow(v,2) - 
    2*a5*d1*lam2*lam4*meu1*meu3*pow(v,2) + 2*a5*d1*lam2*lam3*meu1*meu4*pow(v,2) + 
    2*a5*d1*meu1*meu2*meu3*meu4*pow(v,2) - 2*a5*lam3*lam4*meu1*meu2*r*pow(v,2) + 
    2*a5*lam2*lam4*meu1*meu3*r*pow(v,2) - 2*a5*lam2*lam3*meu1*meu4*r*pow(v,2) - 
    2*a5*meu1*meu2*meu3*meu4*r*pow(v,2) + 2*a5*lam3*lam4*meu1*meu2*p*u*w - 2*a5*lam2*lam4*meu1*meu3*p*u*w + 
    2*a5*lam2*lam3*meu1*meu4*p*u*w + 2*a5*meu1*meu2*meu3*meu4*p*u*w + 2*a5*lam3*lam4*meu1*meu2*q*v*w - 
    2*a5*lam2*lam4*meu1*meu3*q*v*w + 2*a5*lam2*lam3*meu1*meu4*q*v*w + 2*a5*meu1*meu2*meu3*meu4*q*v*w};



    double c13[]={-(d1*lam2*lam3*lam4*lam5*meu1*p*u) + d1*lam4*lam5*meu1*meu2*meu3*p*u - d1*lam3*lam5*meu1*meu2*meu4*p*u - 
    d1*lam2*lam5*meu1*meu3*meu4*p*u - d1*lam3*lam4*meu1*meu2*meu5*p*u - d1*lam2*lam4*meu1*meu3*meu5*p*u + 
    d1*lam2*lam3*meu1*meu4*meu5*p*u - d1*meu1*meu2*meu3*meu4*meu5*p*u - a1*lam1*lam2*lam3*lam4*lam5*q*u - 
    a2*lam3*lam4*lam5*meu1*meu2*q*u - a3*lam3*lam4*lam5*meu1*meu2*q*u + a4*lam3*lam4*lam5*meu1*meu2*q*u + 
    a5*lam3*lam4*lam5*meu1*meu2*q*u - a2*lam2*lam4*lam5*meu1*meu3*q*u - a3*lam2*lam4*lam5*meu1*meu3*q*u + 
    a4*lam2*lam4*lam5*meu1*meu3*q*u + a5*lam2*lam4*lam5*meu1*meu3*q*u + a1*lam1*lam4*lam5*meu2*meu3*q*u + 
    a2*lam2*lam3*lam5*meu1*meu4*q*u + a3*lam2*lam3*lam5*meu1*meu4*q*u - a4*lam2*lam3*lam5*meu1*meu4*q*u - 
    a5*lam2*lam3*lam5*meu1*meu4*q*u - a1*lam1*lam3*lam5*meu2*meu4*q*u - a1*lam1*lam2*lam5*meu3*meu4*q*u - 
    a2*lam5*meu1*meu2*meu3*meu4*q*u - a3*lam5*meu1*meu2*meu3*meu4*q*u + a4*lam5*meu1*meu2*meu3*meu4*q*u + 
    a5*lam5*meu1*meu2*meu3*meu4*q*u + a2*lam2*lam3*lam4*meu1*meu5*q*u + a3*lam2*lam3*lam4*meu1*meu5*q*u - 
    a4*lam2*lam3*lam4*meu1*meu5*q*u - a5*lam2*lam3*lam4*meu1*meu5*q*u - a1*lam1*lam3*lam4*meu2*meu5*q*u - 
    a1*lam1*lam2*lam4*meu3*meu5*q*u - a2*lam4*meu1*meu2*meu3*meu5*q*u - a3*lam4*meu1*meu2*meu3*meu5*q*u + 
    a4*lam4*meu1*meu2*meu3*meu5*q*u + a5*lam4*meu1*meu2*meu3*meu5*q*u + a1*lam1*lam2*lam3*meu4*meu5*q*u + 
    a2*lam3*meu1*meu2*meu4*meu5*q*u + a3*lam3*meu1*meu2*meu4*meu5*q*u - a4*lam3*meu1*meu2*meu4*meu5*q*u - 
    a5*lam3*meu1*meu2*meu4*meu5*q*u + a2*lam2*meu1*meu3*meu4*meu5*q*u + a3*lam2*meu1*meu3*meu4*meu5*q*u - 
    a4*lam2*meu1*meu3*meu4*meu5*q*u - a5*lam2*meu1*meu3*meu4*meu5*q*u - a1*lam1*meu2*meu3*meu4*meu5*q*u + 
    lam2*lam3*lam4*lam5*meu1*p*r*u - lam4*lam5*meu1*meu2*meu3*p*r*u + lam3*lam5*meu1*meu2*meu4*p*r*u + 
    lam2*lam5*meu1*meu3*meu4*p*r*u + lam3*lam4*meu1*meu2*meu5*p*r*u + lam2*lam4*meu1*meu3*meu5*p*r*u - 
    lam2*lam3*meu1*meu4*meu5*p*r*u + meu1*meu2*meu3*meu4*meu5*p*r*u + d1*d2*meu1*pow(u,2) + 
    pow(d1,2)*lam1*meu1*pow(u,2) + d1*d3*lam2*meu1*pow(u,2) + d1*d4*lam2*lam3*meu1*pow(u,2) + 
    d1*d5*lam2*lam3*lam4*meu1*pow(u,2) - d1*d4*meu1*meu2*meu3*pow(u,2) - d1*d5*lam4*meu1*meu2*meu3*pow(u,2) + 
    d1*d5*lam3*meu1*meu2*meu4*pow(u,2) + d1*d5*lam2*meu1*meu3*meu4*pow(u,2) + lam1*meu1*pow(q,2)*pow(u,2) - 
    d2*meu1*r*pow(u,2) - 2*d1*lam1*meu1*r*pow(u,2) - d3*lam2*meu1*r*pow(u,2) - d4*lam2*lam3*meu1*r*pow(u,2) - 
    d5*lam2*lam3*lam4*meu1*r*pow(u,2) + d4*meu1*meu2*meu3*r*pow(u,2) + d5*lam4*meu1*meu2*meu3*r*pow(u,2) - 
    d5*lam3*meu1*meu2*meu4*r*pow(u,2) - d5*lam2*meu1*meu3*meu4*r*pow(u,2) + lam1*meu1*pow(r,2)*pow(u,2) + 
    a1*lam1*lam2*lam3*lam4*lam5*p*v + a2*lam3*lam4*lam5*meu1*meu2*p*v + a3*lam3*lam4*lam5*meu1*meu2*p*v - 
    a4*lam3*lam4*lam5*meu1*meu2*p*v - a5*lam3*lam4*lam5*meu1*meu2*p*v + a2*lam2*lam4*lam5*meu1*meu3*p*v + 
    a3*lam2*lam4*lam5*meu1*meu3*p*v - a4*lam2*lam4*lam5*meu1*meu3*p*v - a5*lam2*lam4*lam5*meu1*meu3*p*v - 
    a1*lam1*lam4*lam5*meu2*meu3*p*v - a2*lam2*lam3*lam5*meu1*meu4*p*v - a3*lam2*lam3*lam5*meu1*meu4*p*v + 
    a4*lam2*lam3*lam5*meu1*meu4*p*v + a5*lam2*lam3*lam5*meu1*meu4*p*v + a1*lam1*lam3*lam5*meu2*meu4*p*v + 
    a1*lam1*lam2*lam5*meu3*meu4*p*v + a2*lam5*meu1*meu2*meu3*meu4*p*v + a3*lam5*meu1*meu2*meu3*meu4*p*v - 
    a4*lam5*meu1*meu2*meu3*meu4*p*v - a5*lam5*meu1*meu2*meu3*meu4*p*v - a2*lam2*lam3*lam4*meu1*meu5*p*v - 
    a3*lam2*lam3*lam4*meu1*meu5*p*v + a4*lam2*lam3*lam4*meu1*meu5*p*v + a5*lam2*lam3*lam4*meu1*meu5*p*v + 
    a1*lam1*lam3*lam4*meu2*meu5*p*v + a1*lam1*lam2*lam4*meu3*meu5*p*v + a2*lam4*meu1*meu2*meu3*meu5*p*v + 
    a3*lam4*meu1*meu2*meu3*meu5*p*v - a4*lam4*meu1*meu2*meu3*meu5*p*v - a5*lam4*meu1*meu2*meu3*meu5*p*v - 
    a1*lam1*lam2*lam3*meu4*meu5*p*v - a2*lam3*meu1*meu2*meu4*meu5*p*v - a3*lam3*meu1*meu2*meu4*meu5*p*v + 
    a4*lam3*meu1*meu2*meu4*meu5*p*v + a5*lam3*meu1*meu2*meu4*meu5*p*v - a2*lam2*meu1*meu3*meu4*meu5*p*v - 
    a3*lam2*meu1*meu3*meu4*meu5*p*v + a4*lam2*meu1*meu3*meu4*meu5*p*v + a5*lam2*meu1*meu3*meu4*meu5*p*v + 
    a1*lam1*meu2*meu3*meu4*meu5*p*v - d1*lam2*lam3*lam4*lam5*meu1*q*v + d1*lam4*lam5*meu1*meu2*meu3*q*v - 
    d1*lam3*lam5*meu1*meu2*meu4*q*v - d1*lam2*lam5*meu1*meu3*meu4*q*v - d1*lam3*lam4*meu1*meu2*meu5*q*v - 
    d1*lam2*lam4*meu1*meu3*meu5*q*v + d1*lam2*lam3*meu1*meu4*meu5*q*v - d1*meu1*meu2*meu3*meu4*meu5*q*v + 
    lam2*lam3*lam4*lam5*meu1*q*r*v - lam4*lam5*meu1*meu2*meu3*q*r*v + lam3*lam5*meu1*meu2*meu4*q*r*v + 
    lam2*lam5*meu1*meu3*meu4*q*r*v + lam3*lam4*meu1*meu2*meu5*q*r*v + lam2*lam4*meu1*meu3*meu5*q*r*v - 
    lam2*lam3*meu1*meu4*meu5*q*r*v + meu1*meu2*meu3*meu4*meu5*q*r*v - 2*lam1*meu1*p*q*u*v + d1*d2*meu1*pow(v,2) + 
    pow(d1,2)*lam1*meu1*pow(v,2) + d1*d3*lam2*meu1*pow(v,2) + d1*d4*lam2*lam3*meu1*pow(v,2) + 
    d1*d5*lam2*lam3*lam4*meu1*pow(v,2) - d1*d4*meu1*meu2*meu3*pow(v,2) - d1*d5*lam4*meu1*meu2*meu3*pow(v,2) + 
    d1*d5*lam3*meu1*meu2*meu4*pow(v,2) + d1*d5*lam2*meu1*meu3*meu4*pow(v,2) + lam1*meu1*pow(p,2)*pow(v,2) - 
    d2*meu1*r*pow(v,2) - 2*d1*lam1*meu1*r*pow(v,2) - d3*lam2*meu1*r*pow(v,2) - d4*lam2*lam3*meu1*r*pow(v,2) - 
    d5*lam2*lam3*lam4*meu1*r*pow(v,2) + d4*meu1*meu2*meu3*r*pow(v,2) + d5*lam4*meu1*meu2*meu3*r*pow(v,2) - 
    d5*lam3*meu1*meu2*meu4*r*pow(v,2) - d5*lam2*meu1*meu3*meu4*r*pow(v,2) + lam1*meu1*pow(r,2)*pow(v,2) - 
    lam2*lam3*lam4*lam5*meu1*pow(p,2)*w + lam4*lam5*meu1*meu2*meu3*pow(p,2)*w - 
    lam3*lam5*meu1*meu2*meu4*pow(p,2)*w - lam2*lam5*meu1*meu3*meu4*pow(p,2)*w - 
    lam3*lam4*meu1*meu2*meu5*pow(p,2)*w - lam2*lam4*meu1*meu3*meu5*pow(p,2)*w + 
    lam2*lam3*meu1*meu4*meu5*pow(p,2)*w - meu1*meu2*meu3*meu4*meu5*pow(p,2)*w - 
    lam2*lam3*lam4*lam5*meu1*pow(q,2)*w + lam4*lam5*meu1*meu2*meu3*pow(q,2)*w - 
    lam3*lam5*meu1*meu2*meu4*pow(q,2)*w - lam2*lam5*meu1*meu3*meu4*pow(q,2)*w - 
    lam3*lam4*meu1*meu2*meu5*pow(q,2)*w - lam2*lam4*meu1*meu3*meu5*pow(q,2)*w + 
    lam2*lam3*meu1*meu4*meu5*pow(q,2)*w - meu1*meu2*meu3*meu4*meu5*pow(q,2)*w + d2*meu1*p*u*w + 
    2*d1*lam1*meu1*p*u*w + d3*lam2*meu1*p*u*w + d4*lam2*lam3*meu1*p*u*w + d5*lam2*lam3*lam4*meu1*p*u*w - 
    d4*meu1*meu2*meu3*p*u*w - d5*lam4*meu1*meu2*meu3*p*u*w + d5*lam3*meu1*meu2*meu4*p*u*w + 
    d5*lam2*meu1*meu3*meu4*p*u*w + a1*q*u*w - 2*lam1*meu1*p*r*u*w - a1*p*v*w + d2*meu1*q*v*w + 2*d1*lam1*meu1*q*v*w + 
    d3*lam2*meu1*q*v*w + d4*lam2*lam3*meu1*q*v*w + d5*lam2*lam3*lam4*meu1*q*v*w - d4*meu1*meu2*meu3*q*v*w - 
    d5*lam4*meu1*meu2*meu3*q*v*w + d5*lam3*meu1*meu2*meu4*q*v*w + d5*lam2*meu1*meu3*meu4*q*v*w - 2*lam1*meu1*q*r*v*w + 
    lam1*meu1*pow(p,2)*pow(w,2) + lam1*meu1*pow(q,2)*pow(w,2),
   2*d3*lam4*lam5*meu1*meu2*meu3*q*u - 2*d4*lam5*meu1*meu2*meu4*q*u - 2*d3*lam3*lam5*meu1*meu2*meu4*q*u - 
    2*d5*meu1*meu2*meu5*q*u - 2*d4*lam4*meu1*meu2*meu5*q*u - 2*d3*lam3*lam4*meu1*meu2*meu5*q*u - 
    2*d3*meu1*meu2*meu3*meu4*meu5*q*u + 2*a3*d1*meu1*meu2*pow(u,2) - 2*a4*d1*meu1*meu2*pow(u,2) - 
    2*a5*d1*meu1*meu2*pow(u,2) - 2*a3*meu1*meu2*r*pow(u,2) + 2*a4*meu1*meu2*r*pow(u,2) + 
    2*a5*meu1*meu2*r*pow(u,2) - 2*d3*lam4*lam5*meu1*meu2*meu3*p*v + 2*d4*lam5*meu1*meu2*meu4*p*v + 
    2*d3*lam3*lam5*meu1*meu2*meu4*p*v + 2*d5*meu1*meu2*meu5*p*v + 2*d4*lam4*meu1*meu2*meu5*p*v + 
    2*d3*lam3*lam4*meu1*meu2*meu5*p*v + 2*d3*meu1*meu2*meu3*meu4*meu5*p*v + 2*a3*d1*meu1*meu2*pow(v,2) - 
    2*a4*d1*meu1*meu2*pow(v,2) - 2*a5*d1*meu1*meu2*pow(v,2) - 2*a3*meu1*meu2*r*pow(v,2) + 
    2*a4*meu1*meu2*r*pow(v,2) + 2*a5*meu1*meu2*r*pow(v,2) + 2*a3*meu1*meu2*p*u*w - 2*a4*meu1*meu2*p*u*w - 
    2*a5*meu1*meu2*p*u*w + 2*a3*meu1*meu2*q*v*w - 2*a4*meu1*meu2*q*v*w - 2*a5*meu1*meu2*q*v*w,
   -(d1*lam2*lam3*lam4*lam5*meu1*p*u) - d1*lam4*lam5*meu1*meu2*meu3*p*u + d1*lam3*lam5*meu1*meu2*meu4*p*u - 
    d1*lam2*lam5*meu1*meu3*meu4*p*u + d1*lam3*lam4*meu1*meu2*meu5*p*u - d1*lam2*lam4*meu1*meu3*meu5*p*u + 
    d1*lam2*lam3*meu1*meu4*meu5*p*u + d1*meu1*meu2*meu3*meu4*meu5*p*u - a1*lam1*lam2*lam3*lam4*lam5*q*u - 
    a2*lam3*lam4*lam5*meu1*meu2*q*u + a3*lam3*lam4*lam5*meu1*meu2*q*u - a4*lam3*lam4*lam5*meu1*meu2*q*u - 
    a5*lam3*lam4*lam5*meu1*meu2*q*u + a2*lam2*lam4*lam5*meu1*meu3*q*u - a3*lam2*lam4*lam5*meu1*meu3*q*u + 
    a4*lam2*lam4*lam5*meu1*meu3*q*u + a5*lam2*lam4*lam5*meu1*meu3*q*u - a1*lam1*lam4*lam5*meu2*meu3*q*u - 
    a2*lam2*lam3*lam5*meu1*meu4*q*u + a3*lam2*lam3*lam5*meu1*meu4*q*u - a4*lam2*lam3*lam5*meu1*meu4*q*u - 
    a5*lam2*lam3*lam5*meu1*meu4*q*u + a1*lam1*lam3*lam5*meu2*meu4*q*u - a1*lam1*lam2*lam5*meu3*meu4*q*u - 
    a2*lam5*meu1*meu2*meu3*meu4*q*u + a3*lam5*meu1*meu2*meu3*meu4*q*u - a4*lam5*meu1*meu2*meu3*meu4*q*u - 
    a5*lam5*meu1*meu2*meu3*meu4*q*u - a2*lam2*lam3*lam4*meu1*meu5*q*u + a3*lam2*lam3*lam4*meu1*meu5*q*u - 
    a4*lam2*lam3*lam4*meu1*meu5*q*u - a5*lam2*lam3*lam4*meu1*meu5*q*u + a1*lam1*lam3*lam4*meu2*meu5*q*u - 
    a1*lam1*lam2*lam4*meu3*meu5*q*u - a2*lam4*meu1*meu2*meu3*meu5*q*u + a3*lam4*meu1*meu2*meu3*meu5*q*u - 
    a4*lam4*meu1*meu2*meu3*meu5*q*u - a5*lam4*meu1*meu2*meu3*meu5*q*u + a1*lam1*lam2*lam3*meu4*meu5*q*u + 
    a2*lam3*meu1*meu2*meu4*meu5*q*u - a3*lam3*meu1*meu2*meu4*meu5*q*u + a4*lam3*meu1*meu2*meu4*meu5*q*u + 
    a5*lam3*meu1*meu2*meu4*meu5*q*u - a2*lam2*meu1*meu3*meu4*meu5*q*u + a3*lam2*meu1*meu3*meu4*meu5*q*u - 
    a4*lam2*meu1*meu3*meu4*meu5*q*u - a5*lam2*meu1*meu3*meu4*meu5*q*u + a1*lam1*meu2*meu3*meu4*meu5*q*u + 
    lam2*lam3*lam4*lam5*meu1*p*r*u + lam4*lam5*meu1*meu2*meu3*p*r*u - lam3*lam5*meu1*meu2*meu4*p*r*u + 
    lam2*lam5*meu1*meu3*meu4*p*r*u - lam3*lam4*meu1*meu2*meu5*p*r*u + lam2*lam4*meu1*meu3*meu5*p*r*u - 
    lam2*lam3*meu1*meu4*meu5*p*r*u - meu1*meu2*meu3*meu4*meu5*p*r*u + d1*d2*meu1*pow(u,2) + 
    pow(d1,2)*lam1*meu1*pow(u,2) + d1*d3*lam2*meu1*pow(u,2) + d1*d4*lam2*lam3*meu1*pow(u,2) + 
    d1*d5*lam2*lam3*lam4*meu1*pow(u,2) + d1*d4*meu1*meu2*meu3*pow(u,2) + d1*d5*lam4*meu1*meu2*meu3*pow(u,2) - 
    d1*d5*lam3*meu1*meu2*meu4*pow(u,2) + d1*d5*lam2*meu1*meu3*meu4*pow(u,2) + lam1*meu1*pow(q,2)*pow(u,2) - 
    d2*meu1*r*pow(u,2) - 2*d1*lam1*meu1*r*pow(u,2) - d3*lam2*meu1*r*pow(u,2) - d4*lam2*lam3*meu1*r*pow(u,2) - 
    d5*lam2*lam3*lam4*meu1*r*pow(u,2) - d4*meu1*meu2*meu3*r*pow(u,2) - d5*lam4*meu1*meu2*meu3*r*pow(u,2) + 
    d5*lam3*meu1*meu2*meu4*r*pow(u,2) - d5*lam2*meu1*meu3*meu4*r*pow(u,2) + lam1*meu1*pow(r,2)*pow(u,2) + 
    a1*lam1*lam2*lam3*lam4*lam5*p*v + a2*lam3*lam4*lam5*meu1*meu2*p*v - a3*lam3*lam4*lam5*meu1*meu2*p*v + 
    a4*lam3*lam4*lam5*meu1*meu2*p*v + a5*lam3*lam4*lam5*meu1*meu2*p*v - a2*lam2*lam4*lam5*meu1*meu3*p*v + 
    a3*lam2*lam4*lam5*meu1*meu3*p*v - a4*lam2*lam4*lam5*meu1*meu3*p*v - a5*lam2*lam4*lam5*meu1*meu3*p*v + 
    a1*lam1*lam4*lam5*meu2*meu3*p*v + a2*lam2*lam3*lam5*meu1*meu4*p*v - a3*lam2*lam3*lam5*meu1*meu4*p*v + 
    a4*lam2*lam3*lam5*meu1*meu4*p*v + a5*lam2*lam3*lam5*meu1*meu4*p*v - a1*lam1*lam3*lam5*meu2*meu4*p*v + 
    a1*lam1*lam2*lam5*meu3*meu4*p*v + a2*lam5*meu1*meu2*meu3*meu4*p*v - a3*lam5*meu1*meu2*meu3*meu4*p*v + 
    a4*lam5*meu1*meu2*meu3*meu4*p*v + a5*lam5*meu1*meu2*meu3*meu4*p*v + a2*lam2*lam3*lam4*meu1*meu5*p*v - 
    a3*lam2*lam3*lam4*meu1*meu5*p*v + a4*lam2*lam3*lam4*meu1*meu5*p*v + a5*lam2*lam3*lam4*meu1*meu5*p*v - 
    a1*lam1*lam3*lam4*meu2*meu5*p*v + a1*lam1*lam2*lam4*meu3*meu5*p*v + a2*lam4*meu1*meu2*meu3*meu5*p*v - 
    a3*lam4*meu1*meu2*meu3*meu5*p*v + a4*lam4*meu1*meu2*meu3*meu5*p*v + a5*lam4*meu1*meu2*meu3*meu5*p*v - 
    a1*lam1*lam2*lam3*meu4*meu5*p*v - a2*lam3*meu1*meu2*meu4*meu5*p*v + a3*lam3*meu1*meu2*meu4*meu5*p*v - 
    a4*lam3*meu1*meu2*meu4*meu5*p*v - a5*lam3*meu1*meu2*meu4*meu5*p*v + a2*lam2*meu1*meu3*meu4*meu5*p*v - 
    a3*lam2*meu1*meu3*meu4*meu5*p*v + a4*lam2*meu1*meu3*meu4*meu5*p*v + a5*lam2*meu1*meu3*meu4*meu5*p*v - 
    a1*lam1*meu2*meu3*meu4*meu5*p*v - d1*lam2*lam3*lam4*lam5*meu1*q*v - d1*lam4*lam5*meu1*meu2*meu3*q*v + 
    d1*lam3*lam5*meu1*meu2*meu4*q*v - d1*lam2*lam5*meu1*meu3*meu4*q*v + d1*lam3*lam4*meu1*meu2*meu5*q*v - 
    d1*lam2*lam4*meu1*meu3*meu5*q*v + d1*lam2*lam3*meu1*meu4*meu5*q*v + d1*meu1*meu2*meu3*meu4*meu5*q*v + 
    lam2*lam3*lam4*lam5*meu1*q*r*v + lam4*lam5*meu1*meu2*meu3*q*r*v - lam3*lam5*meu1*meu2*meu4*q*r*v + 
    lam2*lam5*meu1*meu3*meu4*q*r*v - lam3*lam4*meu1*meu2*meu5*q*r*v + lam2*lam4*meu1*meu3*meu5*q*r*v - 
    lam2*lam3*meu1*meu4*meu5*q*r*v - meu1*meu2*meu3*meu4*meu5*q*r*v - 2*lam1*meu1*p*q*u*v + d1*d2*meu1*pow(v,2) + 
    pow(d1,2)*lam1*meu1*pow(v,2) + d1*d3*lam2*meu1*pow(v,2) + d1*d4*lam2*lam3*meu1*pow(v,2) + 
    d1*d5*lam2*lam3*lam4*meu1*pow(v,2) + d1*d4*meu1*meu2*meu3*pow(v,2) + d1*d5*lam4*meu1*meu2*meu3*pow(v,2) - 
    d1*d5*lam3*meu1*meu2*meu4*pow(v,2) + d1*d5*lam2*meu1*meu3*meu4*pow(v,2) + lam1*meu1*pow(p,2)*pow(v,2) - 
    d2*meu1*r*pow(v,2) - 2*d1*lam1*meu1*r*pow(v,2) - d3*lam2*meu1*r*pow(v,2) - d4*lam2*lam3*meu1*r*pow(v,2) - 
    d5*lam2*lam3*lam4*meu1*r*pow(v,2) - d4*meu1*meu2*meu3*r*pow(v,2) - d5*lam4*meu1*meu2*meu3*r*pow(v,2) + 
    d5*lam3*meu1*meu2*meu4*r*pow(v,2) - d5*lam2*meu1*meu3*meu4*r*pow(v,2) + lam1*meu1*pow(r,2)*pow(v,2) - 
    lam2*lam3*lam4*lam5*meu1*pow(p,2)*w - lam4*lam5*meu1*meu2*meu3*pow(p,2)*w + 
    lam3*lam5*meu1*meu2*meu4*pow(p,2)*w - lam2*lam5*meu1*meu3*meu4*pow(p,2)*w + 
    lam3*lam4*meu1*meu2*meu5*pow(p,2)*w - lam2*lam4*meu1*meu3*meu5*pow(p,2)*w + 
    lam2*lam3*meu1*meu4*meu5*pow(p,2)*w + meu1*meu2*meu3*meu4*meu5*pow(p,2)*w - 
    lam2*lam3*lam4*lam5*meu1*pow(q,2)*w - lam4*lam5*meu1*meu2*meu3*pow(q,2)*w + 
    lam3*lam5*meu1*meu2*meu4*pow(q,2)*w - lam2*lam5*meu1*meu3*meu4*pow(q,2)*w + 
    lam3*lam4*meu1*meu2*meu5*pow(q,2)*w - lam2*lam4*meu1*meu3*meu5*pow(q,2)*w + 
    lam2*lam3*meu1*meu4*meu5*pow(q,2)*w + meu1*meu2*meu3*meu4*meu5*pow(q,2)*w + d2*meu1*p*u*w + 
    2*d1*lam1*meu1*p*u*w + d3*lam2*meu1*p*u*w + d4*lam2*lam3*meu1*p*u*w + d5*lam2*lam3*lam4*meu1*p*u*w + 
    d4*meu1*meu2*meu3*p*u*w + d5*lam4*meu1*meu2*meu3*p*u*w - d5*lam3*meu1*meu2*meu4*p*u*w + 
    d5*lam2*meu1*meu3*meu4*p*u*w + a1*q*u*w - 2*lam1*meu1*p*r*u*w - a1*p*v*w + d2*meu1*q*v*w + 2*d1*lam1*meu1*q*v*w + 
    d3*lam2*meu1*q*v*w + d4*lam2*lam3*meu1*q*v*w + d5*lam2*lam3*lam4*meu1*q*v*w + d4*meu1*meu2*meu3*q*v*w + 
    d5*lam4*meu1*meu2*meu3*q*v*w - d5*lam3*meu1*meu2*meu4*q*v*w + d5*lam2*meu1*meu3*meu4*q*v*w - 2*lam1*meu1*q*r*v*w + 
    lam1*meu1*pow(p,2)*pow(w,2) + lam1*meu1*pow(q,2)*pow(w,2)};



    double c14[]={2*d3*lam5*meu1*meu2*meu4*q*u + 2*d4*lam3*lam5*meu1*meu2*meu4*q*u + 2*d4*lam2*lam5*meu1*meu3*meu4*q*u - 
    2*d5*lam3*meu1*meu2*meu5*q*u - 2*d3*lam4*meu1*meu2*meu5*q*u - 2*d4*lam3*lam4*meu1*meu2*meu5*q*u - 
    2*d5*lam2*meu1*meu3*meu5*q*u - 2*d4*lam2*lam4*meu1*meu3*meu5*q*u + 2*a4*d1*lam3*meu1*meu2*pow(u,2) - 
    2*a5*d1*lam3*meu1*meu2*pow(u,2) + 2*a4*d1*lam2*meu1*meu3*pow(u,2) - 2*a5*d1*lam2*meu1*meu3*pow(u,2) - 
    2*a4*lam3*meu1*meu2*r*pow(u,2) + 2*a5*lam3*meu1*meu2*r*pow(u,2) - 2*a4*lam2*meu1*meu3*r*pow(u,2) + 
    2*a5*lam2*meu1*meu3*r*pow(u,2) - 2*d3*lam5*meu1*meu2*meu4*p*v - 2*d4*lam3*lam5*meu1*meu2*meu4*p*v - 
    2*d4*lam2*lam5*meu1*meu3*meu4*p*v + 2*d5*lam3*meu1*meu2*meu5*p*v + 2*d3*lam4*meu1*meu2*meu5*p*v + 
    2*d4*lam3*lam4*meu1*meu2*meu5*p*v + 2*d5*lam2*meu1*meu3*meu5*p*v + 2*d4*lam2*lam4*meu1*meu3*meu5*p*v + 
    2*a4*d1*lam3*meu1*meu2*pow(v,2) - 2*a5*d1*lam3*meu1*meu2*pow(v,2) + 2*a4*d1*lam2*meu1*meu3*pow(v,2) - 
    2*a5*d1*lam2*meu1*meu3*pow(v,2) - 2*a4*lam3*meu1*meu2*r*pow(v,2) + 2*a5*lam3*meu1*meu2*r*pow(v,2) - 
    2*a4*lam2*meu1*meu3*r*pow(v,2) + 2*a5*lam2*meu1*meu3*r*pow(v,2) + 2*a4*lam3*meu1*meu2*p*u*w - 
    2*a5*lam3*meu1*meu2*p*u*w + 2*a4*lam2*meu1*meu3*p*u*w - 2*a5*lam2*meu1*meu3*p*u*w + 2*a4*lam3*meu1*meu2*q*v*w - 
    2*a5*lam3*meu1*meu2*q*v*w + 2*a4*lam2*meu1*meu3*q*v*w - 2*a5*lam2*meu1*meu3*q*v*w,
   -4*d1*lam5*meu1*meu2*meu4*p*u + 4*d1*lam4*meu1*meu2*meu5*p*u + 4*a4*lam4*lam5*meu1*meu2*q*u - 
    4*a5*lam4*lam5*meu1*meu2*q*u + 4*a2*lam2*lam5*meu1*meu4*q*u - 4*a1*lam1*lam5*meu2*meu4*q*u - 
    4*a2*lam2*lam4*meu1*meu5*q*u + 4*a1*lam1*lam4*meu2*meu5*q*u + 4*a4*meu1*meu2*meu4*meu5*q*u - 
    4*a5*meu1*meu2*meu4*meu5*q*u + 4*lam5*meu1*meu2*meu4*p*r*u - 4*lam4*meu1*meu2*meu5*p*r*u + 
    4*d1*d5*meu1*meu2*meu4*pow(u,2) - 4*d5*meu1*meu2*meu4*r*pow(u,2) - 4*a4*lam4*lam5*meu1*meu2*p*v + 
    4*a5*lam4*lam5*meu1*meu2*p*v - 4*a2*lam2*lam5*meu1*meu4*p*v + 4*a1*lam1*lam5*meu2*meu4*p*v + 
    4*a2*lam2*lam4*meu1*meu5*p*v - 4*a1*lam1*lam4*meu2*meu5*p*v - 4*a4*meu1*meu2*meu4*meu5*p*v + 
    4*a5*meu1*meu2*meu4*meu5*p*v - 4*d1*lam5*meu1*meu2*meu4*q*v + 4*d1*lam4*meu1*meu2*meu5*q*v + 
    4*lam5*meu1*meu2*meu4*q*r*v - 4*lam4*meu1*meu2*meu5*q*r*v + 4*d1*d5*meu1*meu2*meu4*pow(v,2) - 
    4*d5*meu1*meu2*meu4*r*pow(v,2) - 4*lam5*meu1*meu2*meu4*pow(p,2)*w + 4*lam4*meu1*meu2*meu5*pow(p,2)*w - 
    4*lam5*meu1*meu2*meu4*pow(q,2)*w + 4*lam4*meu1*meu2*meu5*pow(q,2)*w + 4*d5*meu1*meu2*meu4*p*u*w + 
    4*d5*meu1*meu2*meu4*q*v*w,-2*d3*lam5*meu1*meu2*meu4*q*u - 2*d4*lam3*lam5*meu1*meu2*meu4*q*u + 
    2*d4*lam2*lam5*meu1*meu3*meu4*q*u + 2*d5*lam3*meu1*meu2*meu5*q*u + 2*d3*lam4*meu1*meu2*meu5*q*u + 
    2*d4*lam3*lam4*meu1*meu2*meu5*q*u - 2*d5*lam2*meu1*meu3*meu5*q*u - 2*d4*lam2*lam4*meu1*meu3*meu5*q*u - 
    2*a4*d1*lam3*meu1*meu2*pow(u,2) + 2*a5*d1*lam3*meu1*meu2*pow(u,2) + 2*a4*d1*lam2*meu1*meu3*pow(u,2) - 
    2*a5*d1*lam2*meu1*meu3*pow(u,2) + 2*a4*lam3*meu1*meu2*r*pow(u,2) - 2*a5*lam3*meu1*meu2*r*pow(u,2) - 
    2*a4*lam2*meu1*meu3*r*pow(u,2) + 2*a5*lam2*meu1*meu3*r*pow(u,2) + 2*d3*lam5*meu1*meu2*meu4*p*v + 
    2*d4*lam3*lam5*meu1*meu2*meu4*p*v - 2*d4*lam2*lam5*meu1*meu3*meu4*p*v - 2*d5*lam3*meu1*meu2*meu5*p*v - 
    2*d3*lam4*meu1*meu2*meu5*p*v - 2*d4*lam3*lam4*meu1*meu2*meu5*p*v + 2*d5*lam2*meu1*meu3*meu5*p*v + 
    2*d4*lam2*lam4*meu1*meu3*meu5*p*v - 2*a4*d1*lam3*meu1*meu2*pow(v,2) + 2*a5*d1*lam3*meu1*meu2*pow(v,2) + 
    2*a4*d1*lam2*meu1*meu3*pow(v,2) - 2*a5*d1*lam2*meu1*meu3*pow(v,2) + 2*a4*lam3*meu1*meu2*r*pow(v,2) - 
    2*a5*lam3*meu1*meu2*r*pow(v,2) - 2*a4*lam2*meu1*meu3*r*pow(v,2) + 2*a5*lam2*meu1*meu3*r*pow(v,2) - 
    2*a4*lam3*meu1*meu2*p*u*w + 2*a5*lam3*meu1*meu2*p*u*w + 2*a4*lam2*meu1*meu3*p*u*w - 2*a5*lam2*meu1*meu3*p*u*w - 
    2*a4*lam3*meu1*meu2*q*v*w + 2*a5*lam3*meu1*meu2*q*v*w + 2*a4*lam2*meu1*meu3*q*v*w - 2*a5*lam2*meu1*meu3*q*v*w};



    double c15[]={-4*d1*lam3*meu1*meu2*meu5*p*u - 4*d1*lam2*meu1*meu3*meu5*p*u + 4*a5*lam3*lam5*meu1*meu2*q*u + 
    4*a5*lam2*lam5*meu1*meu3*q*u + 4*a2*lam2*lam3*meu1*meu5*q*u + 4*a3*lam2*lam3*meu1*meu5*q*u - 
    4*a1*lam1*lam3*meu2*meu5*q*u - 4*a1*lam1*lam2*meu3*meu5*q*u - 4*a2*meu1*meu2*meu3*meu5*q*u - 
    4*a3*meu1*meu2*meu3*meu5*q*u + 4*lam3*meu1*meu2*meu5*p*r*u + 4*lam2*meu1*meu3*meu5*p*r*u - 
    4*a5*lam3*lam5*meu1*meu2*p*v - 4*a5*lam2*lam5*meu1*meu3*p*v - 4*a2*lam2*lam3*meu1*meu5*p*v - 
    4*a3*lam2*lam3*meu1*meu5*p*v + 4*a1*lam1*lam3*meu2*meu5*p*v + 4*a1*lam1*lam2*meu3*meu5*p*v + 
    4*a2*meu1*meu2*meu3*meu5*p*v + 4*a3*meu1*meu2*meu3*meu5*p*v - 4*d1*lam3*meu1*meu2*meu5*q*v - 
    4*d1*lam2*meu1*meu3*meu5*q*v + 4*lam3*meu1*meu2*meu5*q*r*v + 4*lam2*meu1*meu3*meu5*q*r*v - 
    4*lam3*meu1*meu2*meu5*pow(p,2)*w - 4*lam2*meu1*meu3*meu5*pow(p,2)*w - 4*lam3*meu1*meu2*meu5*pow(q,2)*w - 
    4*lam2*meu1*meu3*meu5*pow(q,2)*w,-8*d4*meu1*meu2*meu5*q*u - 8*d3*lam3*meu1*meu2*meu5*q*u - 
    8*d5*lam4*meu1*meu2*meu5*q*u - 8*a5*d1*lam4*meu1*meu2*pow(u,2) + 8*a5*lam4*meu1*meu2*r*pow(u,2) + 
    8*d4*meu1*meu2*meu5*p*v + 8*d3*lam3*meu1*meu2*meu5*p*v + 8*d5*lam4*meu1*meu2*meu5*p*v - 
    8*a5*d1*lam4*meu1*meu2*pow(v,2) + 8*a5*lam4*meu1*meu2*r*pow(v,2) - 8*a5*lam4*meu1*meu2*p*u*w - 
    8*a5*lam4*meu1*meu2*q*v*w,4*d1*lam3*meu1*meu2*meu5*p*u - 4*d1*lam2*meu1*meu3*meu5*p*u - 
    4*a5*lam3*lam5*meu1*meu2*q*u + 4*a5*lam2*lam5*meu1*meu3*q*u - 4*a2*lam2*lam3*meu1*meu5*q*u + 
    4*a3*lam2*lam3*meu1*meu5*q*u + 4*a1*lam1*lam3*meu2*meu5*q*u - 4*a1*lam1*lam2*meu3*meu5*q*u - 
    4*a2*meu1*meu2*meu3*meu5*q*u + 4*a3*meu1*meu2*meu3*meu5*q*u - 4*lam3*meu1*meu2*meu5*p*r*u + 
    4*lam2*meu1*meu3*meu5*p*r*u + 4*a5*lam3*lam5*meu1*meu2*p*v - 4*a5*lam2*lam5*meu1*meu3*p*v + 
    4*a2*lam2*lam3*meu1*meu5*p*v - 4*a3*lam2*lam3*meu1*meu5*p*v - 4*a1*lam1*lam3*meu2*meu5*p*v + 
    4*a1*lam1*lam2*meu3*meu5*p*v + 4*a2*meu1*meu2*meu3*meu5*p*v - 4*a3*meu1*meu2*meu3*meu5*p*v + 
    4*d1*lam3*meu1*meu2*meu5*q*v - 4*d1*lam2*meu1*meu3*meu5*q*v - 4*lam3*meu1*meu2*meu5*q*r*v + 
    4*lam2*meu1*meu3*meu5*q*r*v + 4*lam3*meu1*meu2*meu5*pow(p,2)*w - 4*lam2*meu1*meu3*meu5*pow(p,2)*w + 
    4*lam3*meu1*meu2*meu5*pow(q,2)*w - 4*lam2*meu1*meu3*meu5*pow(q,2)*w};



    double c16[]={2*d3*lam5*meu1*meu2*meu4*q*u + 2*d4*lam3*lam5*meu1*meu2*meu4*q*u + 2*d4*lam2*lam5*meu1*meu3*meu4*q*u + 2*d5*lam3*meu1*meu2*meu5*q*u + 2*d3*lam4*meu1*meu2*meu5*q*u + 2*d4*lam3*lam4*meu1*meu2*meu5*q*u + 2*d5*lam2*meu1*meu3*meu5*q*u + 2*d4*lam2*lam4*meu1*meu3*meu5*q*u + 2*a4*d1*lam3*meu1*meu2*pow(u,2) + 2*a5*d1*lam3*meu1*meu2*pow(u,2) + 2*a4*d1*lam2*meu1*meu3*pow(u,2) + 2*a5*d1*lam2*meu1*meu3*pow(u,2) - 2*a4*lam3*meu1*meu2*r*pow(u,2) - 2*a5*lam3*meu1*meu2*r*pow(u,2) - 2*a4*lam2*meu1*meu3*r*pow(u,2) - 2*a5*lam2*meu1*meu3*r*pow(u,2) - 2*d3*lam5*meu1*meu2*meu4*p*v - 2*d4*lam3*lam5*meu1*meu2*meu4*p*v - 2*d4*lam2*lam5*meu1*meu3*meu4*p*v - 2*d5*lam3*meu1*meu2*meu5*p*v - 2*d3*lam4*meu1*meu2*meu5*p*v - 2*d4*lam3*lam4*meu1*meu2*meu5*p*v - 2*d5*lam2*meu1*meu3*meu5*p*v - 2*d4*lam2*lam4*meu1*meu3*meu5*p*v + 2*a4*d1*lam3*meu1*meu2*pow(v,2) + 2*a5*d1*lam3*meu1*meu2*pow(v,2) + 2*a4*d1*lam2*meu1*meu3*pow(v,2) + 2*a5*d1*lam2*meu1*meu3*pow(v,2) - 2*a4*lam3*meu1*meu2*r*pow(v,2) - 2*a5*lam3*meu1*meu2*r*pow(v,2) - 2*a4*lam2*meu1*meu3*r*pow(v,2) - 2*a5*lam2*meu1*meu3*r*pow(v,2) + 2*a4*lam3*meu1*meu2*p*u*w + 2*a5*lam3*meu1*meu2*p*u*w + 2*a4*lam2*meu1*meu3*p*u*w + 2*a5*lam2*meu1*meu3*p*u*w + 2*a4*lam3*meu1*meu2*q*v*w + 2*a5*lam3*meu1*meu2*q*v*w + 2*a4*lam2*meu1*meu3*q*v*w + 2*a5*lam2*meu1*meu3*q*v*w,-4*d1*lam5*meu1*meu2*meu4*p*u - 4*d1*lam4*meu1*meu2*meu5*p*u + 4*a4*lam4*lam5*meu1*meu2*q*u + 4*a5*lam4*lam5*meu1*meu2*q*u + 4*a2*lam2*lam5*meu1*meu4*q*u - 4*a1*lam1*lam5*meu2*meu4*q*u + 4*a2*lam2*lam4*meu1*meu5*q*u - 4*a1*lam1*lam4*meu2*meu5*q*u - 4*a4*meu1*meu2*meu4*meu5*q*u - 4*a5*meu1*meu2*meu4*meu5*q*u + 4*lam5*meu1*meu2*meu4*p*r*u + 4*lam4*meu1*meu2*meu5*p*r*u + 4*d1*d5*meu1*meu2*meu4*pow(u,2) - 4*d5*meu1*meu2*meu4*r*pow(u,2) - 4*a4*lam4*lam5*meu1*meu2*p*v - 4*a5*lam4*lam5*meu1*meu2*p*v - 4*a2*lam2*lam5*meu1*meu4*p*v + 4*a1*lam1*lam5*meu2*meu4*p*v - 4*a2*lam2*lam4*meu1*meu5*p*v + 4*a1*lam1*lam4*meu2*meu5*p*v + 4*a4*meu1*meu2*meu4*meu5*p*v + 4*a5*meu1*meu2*meu4*meu5*p*v - 4*d1*lam5*meu1*meu2*meu4*q*v - 4*d1*lam4*meu1*meu2*meu5*q*v + 4*lam5*meu1*meu2*meu4*q*r*v + 4*lam4*meu1*meu2*meu5*q*r*v + 4*d1*d5*meu1*meu2*meu4*pow(v,2) - 4*d5*meu1*meu2*meu4*r*pow(v,2) - 4*lam5*meu1*meu2*meu4*pow(p,2)*w - 4*lam4*meu1*meu2*meu5*pow(p,2)*w - 4*lam5*meu1*meu2*meu4*pow(q,2)*w - 4*lam4*meu1*meu2*meu5*pow(q,2)*w + 4*d5*meu1*meu2*meu4*p*u*w + 4*d5*meu1*meu2*meu4*q*v*w,-2*d3*lam5*meu1*meu2*meu4*q*u - 2*d4*lam3*lam5*meu1*meu2*meu4*q*u + 2*d4*lam2*lam5*meu1*meu3*meu4*q*u - 2*d5*lam3*meu1*meu2*meu5*q*u - 2*d3*lam4*meu1*meu2*meu5*q*u - 2*d4*lam3*lam4*meu1*meu2*meu5*q*u + 2*d5*lam2*meu1*meu3*meu5*q*u + 2*d4*lam2*lam4*meu1*meu3*meu5*q*u - 2*a4*d1*lam3*meu1*meu2*pow(u,2) - 2*a5*d1*lam3*meu1*meu2*pow(u,2) + 2*a4*d1*lam2*meu1*meu3*pow(u,2) + 2*a5*d1*lam2*meu1*meu3*pow(u,2) + 2*a4*lam3*meu1*meu2*r*pow(u,2) + 2*a5*lam3*meu1*meu2*r*pow(u,2) - 2*a4*lam2*meu1*meu3*r*pow(u,2) - 2*a5*lam2*meu1*meu3*r*pow(u,2) + 2*d3*lam5*meu1*meu2*meu4*p*v + 2*d4*lam3*lam5*meu1*meu2*meu4*p*v - 2*d4*lam2*lam5*meu1*meu3*meu4*p*v + 2*d5*lam3*meu1*meu2*meu5*p*v + 2*d3*lam4*meu1*meu2*meu5*p*v + 2*d4*lam3*lam4*meu1*meu2*meu5*p*v - 2*d5*lam2*meu1*meu3*meu5*p*v - 2*d4*lam2*lam4*meu1*meu3*meu5*p*v - 2*a4*d1*lam3*meu1*meu2*pow(v,2) - 2*a5*d1*lam3*meu1*meu2*pow(v,2) + 2*a4*d1*lam2*meu1*meu3*pow(v,2) + 2*a5*d1*lam2*meu1*meu3*pow(v,2) + 2*a4*lam3*meu1*meu2*r*pow(v,2) + 2*a5*lam3*meu1*meu2*r*pow(v,2) - 2*a4*lam2*meu1*meu3*r*pow(v,2) - 2*a5*lam2*meu1*meu3*r*pow(v,2) - 2*a4*lam3*meu1*meu2*p*u*w - 2*a5*lam3*meu1*meu2*p*u*w + 2*a4*lam2*meu1*meu3*p*u*w + 2*a5*lam2*meu1*meu3*p*u*w - 2*a4*lam3*meu1*meu2*q*v*w - 2*a5*lam3*meu1*meu2*q*v*w + 2*a4*lam2*meu1*meu3*q*v*w + 2*a5*lam2*meu1*meu3*q*v*w};


    double c17[]={-(d1*lam2*lam3*lam4*lam5*meu1*p*u) + d1*lam4*lam5*meu1*meu2*meu3*p*u + d1*lam3*lam5*meu1*meu2*meu4*p*u + d1*lam2*lam5*meu1*meu3*meu4*p*u - d1*lam3*lam4*meu1*meu2*meu5*p*u - d1*lam2*lam4*meu1*meu3*meu5*p*u - d1*lam2*lam3*meu1*meu4*meu5*p*u + d1*meu1*meu2*meu3*meu4*meu5*p*u - a1*lam1*lam2*lam3*lam4*lam5*q*u - a2*lam3*lam4*lam5*meu1*meu2*q*u - a3*lam3*lam4*lam5*meu1*meu2*q*u - a4*lam3*lam4*lam5*meu1*meu2*q*u + a5*lam3*lam4*lam5*meu1*meu2*q*u - a2*lam2*lam4*lam5*meu1*meu3*q*u - a3*lam2*lam4*lam5*meu1*meu3*q*u - a4*lam2*lam4*lam5*meu1*meu3*q*u + a5*lam2*lam4*lam5*meu1*meu3*q*u + a1*lam1*lam4*lam5*meu2*meu3*q*u - a2*lam2*lam3*lam5*meu1*meu4*q*u - a3*lam2*lam3*lam5*meu1*meu4*q*u - a4*lam2*lam3*lam5*meu1*meu4*q*u + a5*lam2*lam3*lam5*meu1*meu4*q*u + a1*lam1*lam3*lam5*meu2*meu4*q*u + a1*lam1*lam2*lam5*meu3*meu4*q*u + a2*lam5*meu1*meu2*meu3*meu4*q*u + a3*lam5*meu1*meu2*meu3*meu4*q*u + a4*lam5*meu1*meu2*meu3*meu4*q*u - a5*lam5*meu1*meu2*meu3*meu4*q*u + a2*lam2*lam3*lam4*meu1*meu5*q*u + a3*lam2*lam3*lam4*meu1*meu5*q*u + a4*lam2*lam3*lam4*meu1*meu5*q*u - a5*lam2*lam3*lam4*meu1*meu5*q*u - a1*lam1*lam3*lam4*meu2*meu5*q*u - a1*lam1*lam2*lam4*meu3*meu5*q*u - a2*lam4*meu1*meu2*meu3*meu5*q*u - a3*lam4*meu1*meu2*meu3*meu5*q*u - a4*lam4*meu1*meu2*meu3*meu5*q*u + a5*lam4*meu1*meu2*meu3*meu5*q*u - a1*lam1*lam2*lam3*meu4*meu5*q*u - a2*lam3*meu1*meu2*meu4*meu5*q*u - a3*lam3*meu1*meu2*meu4*meu5*q*u - a4*lam3*meu1*meu2*meu4*meu5*q*u + a5*lam3*meu1*meu2*meu4*meu5*q*u - a2*lam2*meu1*meu3*meu4*meu5*q*u - a3*lam2*meu1*meu3*meu4*meu5*q*u - a4*lam2*meu1*meu3*meu4*meu5*q*u + a5*lam2*meu1*meu3*meu4*meu5*q*u + a1*lam1*meu2*meu3*meu4*meu5*q*u + lam2*lam3*lam4*lam5*meu1*p*r*u - lam4*lam5*meu1*meu2*meu3*p*r*u - lam3*lam5*meu1*meu2*meu4*p*r*u - lam2*lam5*meu1*meu3*meu4*p*r*u + lam3*lam4*meu1*meu2*meu5*p*r*u + lam2*lam4*meu1*meu3*meu5*p*r*u + lam2*lam3*meu1*meu4*meu5*p*r*u - meu1*meu2*meu3*meu4*meu5*p*r*u + d1*d2*meu1*pow(u,2) + pow(d1,2)*lam1*meu1*pow(u,2) + d1*d3*lam2*meu1*pow(u,2) + d1*d4*lam2*lam3*meu1*pow(u,2) + d1*d5*lam2*lam3*lam4*meu1*pow(u,2) - d1*d4*meu1*meu2*meu3*pow(u,2) - d1*d5*lam4*meu1*meu2*meu3*pow(u,2) - d1*d5*lam3*meu1*meu2*meu4*pow(u,2) - d1*d5*lam2*meu1*meu3*meu4*pow(u,2) + lam1*meu1*pow(q,2)*pow(u,2) - d2*meu1*r*pow(u,2) - 2*d1*lam1*meu1*r*pow(u,2) - d3*lam2*meu1*r*pow(u,2) - d4*lam2*lam3*meu1*r*pow(u,2) - d5*lam2*lam3*lam4*meu1*r*pow(u,2) + d4*meu1*meu2*meu3*r*pow(u,2) + d5*lam4*meu1*meu2*meu3*r*pow(u,2) + d5*lam3*meu1*meu2*meu4*r*pow(u,2) + d5*lam2*meu1*meu3*meu4*r*pow(u,2) + lam1*meu1*pow(r,2)*pow(u,2) + a1*lam1*lam2*lam3*lam4*lam5*p*v + a2*lam3*lam4*lam5*meu1*meu2*p*v + a3*lam3*lam4*lam5*meu1*meu2*p*v + a4*lam3*lam4*lam5*meu1*meu2*p*v - a5*lam3*lam4*lam5*meu1*meu2*p*v + a2*lam2*lam4*lam5*meu1*meu3*p*v + a3*lam2*lam4*lam5*meu1*meu3*p*v + a4*lam2*lam4*lam5*meu1*meu3*p*v - a5*lam2*lam4*lam5*meu1*meu3*p*v - a1*lam1*lam4*lam5*meu2*meu3*p*v + a2*lam2*lam3*lam5*meu1*meu4*p*v + a3*lam2*lam3*lam5*meu1*meu4*p*v + a4*lam2*lam3*lam5*meu1*meu4*p*v - a5*lam2*lam3*lam5*meu1*meu4*p*v - a1*lam1*lam3*lam5*meu2*meu4*p*v - a1*lam1*lam2*lam5*meu3*meu4*p*v - a2*lam5*meu1*meu2*meu3*meu4*p*v - a3*lam5*meu1*meu2*meu3*meu4*p*v - a4*lam5*meu1*meu2*meu3*meu4*p*v + a5*lam5*meu1*meu2*meu3*meu4*p*v - a2*lam2*lam3*lam4*meu1*meu5*p*v - a3*lam2*lam3*lam4*meu1*meu5*p*v - a4*lam2*lam3*lam4*meu1*meu5*p*v + a5*lam2*lam3*lam4*meu1*meu5*p*v + a1*lam1*lam3*lam4*meu2*meu5*p*v + a1*lam1*lam2*lam4*meu3*meu5*p*v + a2*lam4*meu1*meu2*meu3*meu5*p*v + a3*lam4*meu1*meu2*meu3*meu5*p*v + a4*lam4*meu1*meu2*meu3*meu5*p*v - a5*lam4*meu1*meu2*meu3*meu5*p*v + a1*lam1*lam2*lam3*meu4*meu5*p*v + a2*lam3*meu1*meu2*meu4*meu5*p*v + a3*lam3*meu1*meu2*meu4*meu5*p*v + a4*lam3*meu1*meu2*meu4*meu5*p*v - a5*lam3*meu1*meu2*meu4*meu5*p*v + a2*lam2*meu1*meu3*meu4*meu5*p*v + a3*lam2*meu1*meu3*meu4*meu5*p*v + a4*lam2*meu1*meu3*meu4*meu5*p*v - a5*lam2*meu1*meu3*meu4*meu5*p*v - a1*lam1*meu2*meu3*meu4*meu5*p*v - d1*lam2*lam3*lam4*lam5*meu1*q*v + d1*lam4*lam5*meu1*meu2*meu3*q*v + d1*lam3*lam5*meu1*meu2*meu4*q*v + d1*lam2*lam5*meu1*meu3*meu4*q*v - d1*lam3*lam4*meu1*meu2*meu5*q*v - d1*lam2*lam4*meu1*meu3*meu5*q*v - d1*lam2*lam3*meu1*meu4*meu5*q*v + d1*meu1*meu2*meu3*meu4*meu5*q*v + lam2*lam3*lam4*lam5*meu1*q*r*v - lam4*lam5*meu1*meu2*meu3*q*r*v - lam3*lam5*meu1*meu2*meu4*q*r*v - lam2*lam5*meu1*meu3*meu4*q*r*v + lam3*lam4*meu1*meu2*meu5*q*r*v + lam2*lam4*meu1*meu3*meu5*q*r*v + lam2*lam3*meu1*meu4*meu5*q*r*v - meu1*meu2*meu3*meu4*meu5*q*r*v - 2*lam1*meu1*p*q*u*v + d1*d2*meu1*pow(v,2) + pow(d1,2)*lam1*meu1*pow(v,2) + d1*d3*lam2*meu1*pow(v,2) + d1*d4*lam2*lam3*meu1*pow(v,2) + d1*d5*lam2*lam3*lam4*meu1*pow(v,2) - d1*d4*meu1*meu2*meu3*pow(v,2) - d1*d5*lam4*meu1*meu2*meu3*pow(v,2) - d1*d5*lam3*meu1*meu2*meu4*pow(v,2) - d1*d5*lam2*meu1*meu3*meu4*pow(v,2) + lam1*meu1*pow(p,2)*pow(v,2) - d2*meu1*r*pow(v,2) - 2*d1*lam1*meu1*r*pow(v,2) - d3*lam2*meu1*r*pow(v,2) - d4*lam2*lam3*meu1*r*pow(v,2) - d5*lam2*lam3*lam4*meu1*r*pow(v,2) + d4*meu1*meu2*meu3*r*pow(v,2) + d5*lam4*meu1*meu2*meu3*r*pow(v,2) + d5*lam3*meu1*meu2*meu4*r*pow(v,2) + d5*lam2*meu1*meu3*meu4*r*pow(v,2) + lam1*meu1*pow(r,2)*pow(v,2) - lam2*lam3*lam4*lam5*meu1*pow(p,2)*w + lam4*lam5*meu1*meu2*meu3*pow(p,2)*w + lam3*lam5*meu1*meu2*meu4*pow(p,2)*w + lam2*lam5*meu1*meu3*meu4*pow(p,2)*w - lam3*lam4*meu1*meu2*meu5*pow(p,2)*w - lam2*lam4*meu1*meu3*meu5*pow(p,2)*w - lam2*lam3*meu1*meu4*meu5*pow(p,2)*w + meu1*meu2*meu3*meu4*meu5*pow(p,2)*w - lam2*lam3*lam4*lam5*meu1*pow(q,2)*w + lam4*lam5*meu1*meu2*meu3*pow(q,2)*w + lam3*lam5*meu1*meu2*meu4*pow(q,2)*w + lam2*lam5*meu1*meu3*meu4*pow(q,2)*w - lam3*lam4*meu1*meu2*meu5*pow(q,2)*w - lam2*lam4*meu1*meu3*meu5*pow(q,2)*w - lam2*lam3*meu1*meu4*meu5*pow(q,2)*w + meu1*meu2*meu3*meu4*meu5*pow(q,2)*w + d2*meu1*p*u*w + 2*d1*lam1*meu1*p*u*w + d3*lam2*meu1*p*u*w + d4*lam2*lam3*meu1*p*u*w + d5*lam2*lam3*lam4*meu1*p*u*w - d4*meu1*meu2*meu3*p*u*w - d5*lam4*meu1*meu2*meu3*p*u*w - d5*lam3*meu1*meu2*meu4*p*u*w - d5*lam2*meu1*meu3*meu4*p*u*w + a1*q*u*w - 2*lam1*meu1*p*r*u*w - a1*p*v*w + d2*meu1*q*v*w + 2*d1*lam1*meu1*q*v*w + d3*lam2*meu1*q*v*w + d4*lam2*lam3*meu1*q*v*w + d5*lam2*lam3*lam4*meu1*q*v*w - d4*meu1*meu2*meu3*q*v*w - d5*lam4*meu1*meu2*meu3*q*v*w - d5*lam3*meu1*meu2*meu4*q*v*w - d5*lam2*meu1*meu3*meu4*q*v*w - 2*lam1*meu1*q*r*v*w + lam1*meu1*pow(p,2)*pow(w,2) + lam1*meu1*pow(q,2)*pow(w,2),2*d3*lam4*lam5*meu1*meu2*meu3*q*u + 2*d4*lam5*meu1*meu2*meu4*q*u + 2*d3*lam3*lam5*meu1*meu2*meu4*q*u - 2*d5*meu1*meu2*meu5*q*u - 2*d4*lam4*meu1*meu2*meu5*q*u - 2*d3*lam3*lam4*meu1*meu2*meu5*q*u + 2*d3*meu1*meu2*meu3*meu4*meu5*q*u + 2*a3*d1*meu1*meu2*pow(u,2) + 2*a4*d1*meu1*meu2*pow(u,2) - 2*a5*d1*meu1*meu2*pow(u,2) - 2*a3*meu1*meu2*r*pow(u,2) - 2*a4*meu1*meu2*r*pow(u,2) + 2*a5*meu1*meu2*r*pow(u,2) - 2*d3*lam4*lam5*meu1*meu2*meu3*p*v - 2*d4*lam5*meu1*meu2*meu4*p*v - 2*d3*lam3*lam5*meu1*meu2*meu4*p*v + 2*d5*meu1*meu2*meu5*p*v + 2*d4*lam4*meu1*meu2*meu5*p*v + 2*d3*lam3*lam4*meu1*meu2*meu5*p*v - 2*d3*meu1*meu2*meu3*meu4*meu5*p*v + 2*a3*d1*meu1*meu2*pow(v,2) + 2*a4*d1*meu1*meu2*pow(v,2) - 2*a5*d1*meu1*meu2*pow(v,2) - 2*a3*meu1*meu2*r*pow(v,2) - 2*a4*meu1*meu2*r*pow(v,2) + 2*a5*meu1*meu2*r*pow(v,2) + 2*a3*meu1*meu2*p*u*w + 2*a4*meu1*meu2*p*u*w - 2*a5*meu1*meu2*p*u*w + 2*a3*meu1*meu2*q*v*w + 2*a4*meu1*meu2*q*v*w - 2*a5*meu1*meu2*q*v*w,-(d1*lam2*lam3*lam4*lam5*meu1*p*u) - d1*lam4*lam5*meu1*meu2*meu3*p*u - d1*lam3*lam5*meu1*meu2*meu4*p*u + d1*lam2*lam5*meu1*meu3*meu4*p*u + d1*lam3*lam4*meu1*meu2*meu5*p*u - d1*lam2*lam4*meu1*meu3*meu5*p*u - d1*lam2*lam3*meu1*meu4*meu5*p*u - d1*meu1*meu2*meu3*meu4*meu5*p*u - a1*lam1*lam2*lam3*lam4*lam5*q*u - a2*lam3*lam4*lam5*meu1*meu2*q*u + a3*lam3*lam4*lam5*meu1*meu2*q*u + a4*lam3*lam4*lam5*meu1*meu2*q*u - a5*lam3*lam4*lam5*meu1*meu2*q*u + a2*lam2*lam4*lam5*meu1*meu3*q*u - a3*lam2*lam4*lam5*meu1*meu3*q*u - a4*lam2*lam4*lam5*meu1*meu3*q*u + a5*lam2*lam4*lam5*meu1*meu3*q*u - a1*lam1*lam4*lam5*meu2*meu3*q*u + a2*lam2*lam3*lam5*meu1*meu4*q*u - a3*lam2*lam3*lam5*meu1*meu4*q*u - a4*lam2*lam3*lam5*meu1*meu4*q*u + a5*lam2*lam3*lam5*meu1*meu4*q*u - a1*lam1*lam3*lam5*meu2*meu4*q*u + a1*lam1*lam2*lam5*meu3*meu4*q*u + a2*lam5*meu1*meu2*meu3*meu4*q*u - a3*lam5*meu1*meu2*meu3*meu4*q*u - a4*lam5*meu1*meu2*meu3*meu4*q*u + a5*lam5*meu1*meu2*meu3*meu4*q*u - a2*lam2*lam3*lam4*meu1*meu5*q*u + a3*lam2*lam3*lam4*meu1*meu5*q*u + a4*lam2*lam3*lam4*meu1*meu5*q*u - a5*lam2*lam3*lam4*meu1*meu5*q*u + a1*lam1*lam3*lam4*meu2*meu5*q*u - a1*lam1*lam2*lam4*meu3*meu5*q*u - a2*lam4*meu1*meu2*meu3*meu5*q*u + a3*lam4*meu1*meu2*meu3*meu5*q*u + a4*lam4*meu1*meu2*meu3*meu5*q*u - a5*lam4*meu1*meu2*meu3*meu5*q*u - a1*lam1*lam2*lam3*meu4*meu5*q*u - a2*lam3*meu1*meu2*meu4*meu5*q*u + a3*lam3*meu1*meu2*meu4*meu5*q*u + a4*lam3*meu1*meu2*meu4*meu5*q*u - a5*lam3*meu1*meu2*meu4*meu5*q*u + a2*lam2*meu1*meu3*meu4*meu5*q*u - a3*lam2*meu1*meu3*meu4*meu5*q*u - a4*lam2*meu1*meu3*meu4*meu5*q*u + a5*lam2*meu1*meu3*meu4*meu5*q*u - a1*lam1*meu2*meu3*meu4*meu5*q*u + lam2*lam3*lam4*lam5*meu1*p*r*u + lam4*lam5*meu1*meu2*meu3*p*r*u + lam3*lam5*meu1*meu2*meu4*p*r*u - lam2*lam5*meu1*meu3*meu4*p*r*u - lam3*lam4*meu1*meu2*meu5*p*r*u + lam2*lam4*meu1*meu3*meu5*p*r*u + lam2*lam3*meu1*meu4*meu5*p*r*u + meu1*meu2*meu3*meu4*meu5*p*r*u + d1*d2*meu1*pow(u,2) + pow(d1,2)*lam1*meu1*pow(u,2) + d1*d3*lam2*meu1*pow(u,2) + d1*d4*lam2*lam3*meu1*pow(u,2) + d1*d5*lam2*lam3*lam4*meu1*pow(u,2) + d1*d4*meu1*meu2*meu3*pow(u,2) + d1*d5*lam4*meu1*meu2*meu3*pow(u,2) + d1*d5*lam3*meu1*meu2*meu4*pow(u,2) - d1*d5*lam2*meu1*meu3*meu4*pow(u,2) + lam1*meu1*pow(q,2)*pow(u,2) - d2*meu1*r*pow(u,2) - 2*d1*lam1*meu1*r*pow(u,2) - d3*lam2*meu1*r*pow(u,2) - d4*lam2*lam3*meu1*r*pow(u,2) - d5*lam2*lam3*lam4*meu1*r*pow(u,2) - d4*meu1*meu2*meu3*r*pow(u,2) - d5*lam4*meu1*meu2*meu3*r*pow(u,2) - d5*lam3*meu1*meu2*meu4*r*pow(u,2)
 + d5*lam2*meu1*meu3*meu4*r*pow(u,2) + lam1*meu1*pow(r,2)*pow(u,2) + a1*lam1*lam2*lam3*lam4*lam5*p*v + a2*lam3*lam4*lam5*meu1*meu2*p*v - a3*lam3*lam4*lam5*meu1*meu2*p*v - a4*lam3*lam4*lam5*meu1*meu2*p*v + a5*lam3*lam4*lam5*meu1*meu2*p*v - a2*lam2*lam4*lam5*meu1*meu3*p*v + a3*lam2*lam4*lam5*meu1*meu3*p*v + a4*lam2*lam4*lam5*meu1*meu3*p*v - a5*lam2*lam4*lam5*meu1*meu3*p*v + a1*lam1*lam4*lam5*meu2*meu3*p*v - a2*lam2*lam3*lam5*meu1*meu4*p*v + a3*lam2*lam3*lam5*meu1*meu4*p*v + a4*lam2*lam3*lam5*meu1*meu4*p*v - a5*lam2*lam3*lam5*meu1*meu4*p*v + a1*lam1*lam3*lam5*meu2*meu4*p*v - a1*lam1*lam2*lam5*meu3*meu4*p*v - a2*lam5*meu1*meu2*meu3*meu4*p*v + a3*lam5*meu1*meu2*meu3*meu4*p*v + a4*lam5*meu1*meu2*meu3*meu4*p*v - a5*lam5*meu1*meu2*meu3*meu4*p*v + a2*lam2*lam3*lam4*meu1*meu5*p*v - a3*lam2*lam3*lam4*meu1*meu5*p*v - a4*lam2*lam3*lam4*meu1*meu5*p*v + a5*lam2*lam3*lam4*meu1*meu5*p*v - a1*lam1*lam3*lam4*meu2*meu5*p*v + a1*lam1*lam2*lam4*meu3*meu5*p*v + a2*lam4*meu1*meu2*meu3*meu5*p*v - a3*lam4*meu1*meu2*meu3*meu5*p*v - a4*lam4*meu1*meu2*meu3*meu5*p*v + a5*lam4*meu1*meu2*meu3*meu5*p*v + a1*lam1*lam2*lam3*meu4*meu5*p*v + a2*lam3*meu1*meu2*meu4*meu5*p*v - a3*lam3*meu1*meu2*meu4*meu5*p*v - a4*lam3*meu1*meu2*meu4*meu5*p*v + a5*lam3*meu1*meu2*meu4*meu5*p*v - a2*lam2*meu1*meu3*meu4*meu5*p*v + a3*lam2*meu1*meu3*meu4*meu5*p*v + a4*lam2*meu1*meu3*meu4*meu5*p*v - a5*lam2*meu1*meu3*meu4*meu5*p*v + a1*lam1*meu2*meu3*meu4*meu5*p*v - d1*lam2*lam3*lam4*lam5*meu1*q*v - d1*lam4*lam5*meu1*meu2*meu3*q*v - d1*lam3*lam5*meu1*meu2*meu4*q*v + d1*lam2*lam5*meu1*meu3*meu4*q*v + d1*lam3*lam4*meu1*meu2*meu5*q*v - d1*lam2*lam4*meu1*meu3*meu5*q*v - d1*lam2*lam3*meu1*meu4*meu5*q*v - d1*meu1*meu2*meu3*meu4*meu5*q*v + lam2*lam3*lam4*lam5*meu1*q*r*v + lam4*lam5*meu1*meu2*meu3*q*r*v + lam3*lam5*meu1*meu2*meu4*q*r*v - lam2*lam5*meu1*meu3*meu4*q*r*v - lam3*lam4*meu1*meu2*meu5*q*r*v + lam2*lam4*meu1*meu3*meu5*q*r*v + lam2*lam3*meu1*meu4*meu5*q*r*v + meu1*meu2*meu3*meu4*meu5*q*r*v - 2*lam1*meu1*p*q*u*v + d1*d2*meu1*pow(v,2) + pow(d1,2)*lam1*meu1*pow(v,2) + d1*d3*lam2*meu1*pow(v,2) + d1*d4*lam2*lam3*meu1*pow(v,2) + d1*d5*lam2*lam3*lam4*meu1*pow(v,2) + d1*d4*meu1*meu2*meu3*pow(v,2) + d1*d5*lam4*meu1*meu2*meu3*pow(v,2) + d1*d5*lam3*meu1*meu2*meu4*pow(v,2) - d1*d5*lam2*meu1*meu3*meu4*pow(v,2) + lam1*meu1*pow(p,2)*pow(v,2) - d2*meu1*r*pow(v,2) - 2*d1*lam1*meu1*r*pow(v,2) - d3*lam2*meu1*r*pow(v,2) - d4*lam2*lam3*meu1*r*pow(v,2) - d5*lam2*lam3*lam4*meu1*r*pow(v,2) - d4*meu1*meu2*meu3*r*pow(v,2) - d5*lam4*meu1*meu2*meu3*r*pow(v,2) - d5*lam3*meu1*meu2*meu4*r*pow(v,2) + d5*lam2*meu1*meu3*meu4*r*pow(v,2) + lam1*meu1*pow(r,2)*pow(v,2) - lam2*lam3*lam4*lam5*meu1*pow(p,2)*w - lam4*lam5*meu1*meu2*meu3*pow(p,2)*w - lam3*lam5*meu1*meu2*meu4*pow(p,2)*w + lam2*lam5*meu1*meu3*meu4*pow(p,2)*w + lam3*lam4*meu1*meu2*meu5*pow(p,2)*w - lam2*lam4*meu1*meu3*meu5*pow(p,2)*w - lam2*lam3*meu1*meu4*meu5*pow(p,2)*w - meu1*meu2*meu3*meu4*meu5*pow(p,2)*w - lam2*lam3*lam4*lam5*meu1*pow(q,2)*w - lam4*lam5*meu1*meu2*meu3*pow(q,2)*w - lam3*lam5*meu1*meu2*meu4*pow(q,2)*w + lam2*lam5*meu1*meu3*meu4*pow(q,2)*w + lam3*lam4*meu1*meu2*meu5*pow(q,2)*w - lam2*lam4*meu1*meu3*meu5*pow(q,2)*w - lam2*lam3*meu1*meu4*meu5*pow(q,2)*w - meu1*meu2*meu3*meu4*meu5*pow(q,2)*w + d2*meu1*p*u*w + 2*d1*lam1*meu1*p*u*w + d3*lam2*meu1*p*u*w + d4*lam2*lam3*meu1*p*u*w + d5*lam2*lam3*lam4*meu1*p*u*w + d4*meu1*meu2*meu3*p*u*w + d5*lam4*meu1*meu2*meu3*p*u*w + d5*lam3*meu1*meu2*meu4*p*u*w - d5*lam2*meu1*meu3*meu4*p*u*w + a1*q*u*w - 2*lam1*meu1*p*r*u*w - a1*p*v*w + d2*meu1*q*v*w + 2*d1*lam1*meu1*q*v*w + d3*lam2*meu1*q*v*w + d4*lam2*lam3*meu1*q*v*w + d5*lam2*lam3*lam4*meu1*q*v*w + d4*meu1*meu2*meu3*q*v*w + d5*lam4*meu1*meu2*meu3*q*v*w + d5*lam3*meu1*meu2*meu4*q*v*w - d5*lam2*meu1*meu3*meu4*q*v*w - 2*lam1*meu1*q*r*v*w + lam1*meu1*pow(p,2)*pow(w,2) + lam1*meu1*pow(q,2)*pow(w,2)};


    double c18[]={2*d3*meu1*meu2*meu5*q*u + 2*d4*lam3*meu1*meu2*meu5*q*u + 2*d5*lam3*lam4*meu1*meu2*meu5*q*u + 2*d4*lam2*meu1*meu3*meu5*q*u + 2*d5*lam2*lam4*meu1*meu3*meu5*q*u + 2*d5*lam2*lam3*meu1*meu4*meu5*q*u - 2*d5*meu1*meu2*meu3*meu4*meu5*q*u + 2*a5*d1*lam3*lam4*meu1*meu2*pow(u,2) + 2*a5*d1*lam2*lam4*meu1*meu3*pow(u,2) + 2*a5*d1*lam2*lam3*meu1*meu4*pow(u,2) - 2*a5*d1*meu1*meu2*meu3*meu4*pow(u,2) - 2*a5*lam3*lam4*meu1*meu2*r*pow(u,2) - 2*a5*lam2*lam4*meu1*meu3*r*pow(u,2) - 2*a5*lam2*lam3*meu1*meu4*r*pow(u,2) + 2*a5*meu1*meu2*meu3*meu4*r*pow(u,2) - 2*d3*meu1*meu2*meu5*p*v - 2*d4*lam3*meu1*meu2*meu5*p*v - 2*d5*lam3*lam4*meu1*meu2*meu5*p*v - 2*d4*lam2*meu1*meu3*meu5*p*v - 2*d5*lam2*lam4*meu1*meu3*meu5*p*v - 2*d5*lam2*lam3*meu1*meu4*meu5*p*v + 2*d5*meu1*meu2*meu3*meu4*meu5*p*v + 2*a5*d1*lam3*lam4*meu1*meu2*pow(v,2) + 2*a5*d1*lam2*lam4*meu1*meu3*pow(v,2) + 2*a5*d1*lam2*lam3*meu1*meu4*pow(v,2) - 2*a5*d1*meu1*meu2*meu3*meu4*pow(v,2) - 2*a5*lam3*lam4*meu1*meu2*r*pow(v,2) - 2*a5*lam2*lam4*meu1*meu3*r*pow(v,2) - 2*a5*lam2*lam3*meu1*meu4*r*pow(v,2) + 2*a5*meu1*meu2*meu3*meu4*r*pow(v,2) + 2*a5*lam3*lam4*meu1*meu2*p*u*w + 2*a5*lam2*lam4*meu1*meu3*p*u*w + 2*a5*lam2*lam3*meu1*meu4*p*u*w - 2*a5*meu1*meu2*meu3*meu4*p*u*w + 2*a5*lam3*lam4*meu1*meu2*q*v*w + 2*a5*lam2*lam4*meu1*meu3*q*v*w + 2*a5*lam2*lam3*meu1*meu4*q*v*w - 2*a5*meu1*meu2*meu3*meu4*q*v*w,-4*d1*meu1*meu2*meu5*p*u + 4*a5*lam5*meu1*meu2*q*u + 4*a2*lam2*meu1*meu5*q*u - 4*a1*lam1*meu2*meu5*q*u + 4*meu1*meu2*meu5*p*r*u - 4*a5*lam5*meu1*meu2*p*v - 4*a2*lam2*meu1*meu5*p*v + 4*a1*lam1*meu2*meu5*p*v - 4*d1*meu1*meu2*meu5*q*v + 4*meu1*meu2*meu5*q*r*v - 4*meu1*meu2*meu5*pow(p,2)*w - 4*meu1*meu2*meu5*pow(q,2)*w,-2*d3*meu1*meu2*meu5*q*u - 2*d4*lam3*meu1*meu2*meu5*q*u - 2*d5*lam3*lam4*meu1*meu2*meu5*q*u + 2*d4*lam2*meu1*meu3*meu5*q*u + 2*d5*lam2*lam4*meu1*meu3*meu5*q*u + 2*d5*lam2*lam3*meu1*meu4*meu5*q*u + 2*d5*meu1*meu2*meu3*meu4*meu5*q*u - 2*a5*d1*lam3*lam4*meu1*meu2*pow(u,2) + 2*a5*d1*lam2*lam4*meu1*meu3*pow(u,2) + 2*a5*d1*lam2*lam3*meu1*meu4*pow(u,2) + 2*a5*d1*meu1*meu2*meu3*meu4*pow(u,2) + 2*a5*lam3*lam4*meu1*meu2*r*pow(u,2) - 2*a5*lam2*lam4*meu1*meu3*r*pow(u,2) - 2*a5*lam2*lam3*meu1*meu4*r*pow(u,2) - 2*a5*meu1*meu2*meu3*meu4*r*pow(u,2) + 2*d3*meu1*meu2*meu5*p*v + 2*d4*lam3*meu1*meu2*meu5*p*v + 2*d5*lam3*lam4*meu1*meu2*meu5*p*v - 2*d4*lam2*meu1*meu3*meu5*p*v - 2*d5*lam2*lam4*meu1*meu3*meu5*p*v - 2*d5*lam2*lam3*meu1*meu4*meu5*p*v - 2*d5*meu1*meu2*meu3*meu4*meu5*p*v - 2*a5*d1*lam3*lam4*meu1*meu2*pow(v,2) + 2*a5*d1*lam2*lam4*meu1*meu3*pow(v,2) + 2*a5*d1*lam2*lam3*meu1*meu4*pow(v,2) + 2*a5*d1*meu1*meu2*meu3*meu4*pow(v,2) + 2*a5*lam3*lam4*meu1*meu2*r*pow(v,2) - 2*a5*lam2*lam4*meu1*meu3*r*pow(v,2) - 2*a5*lam2*lam3*meu1*meu4*r*pow(v,2) - 2*a5*meu1*meu2*meu3*meu4*r*pow(v,2) - 2*a5*lam3*lam4*meu1*meu2*p*u*w + 2*a5*lam2*lam4*meu1*meu3*p*u*w + 2*a5*lam2*lam3*meu1*meu4*p*u*w + 2*a5*meu1*meu2*meu3*meu4*p*u*w - 2*a5*lam3*lam4*meu1*meu2*q*v*w + 2*a5*lam2*lam4*meu1*meu3*q*v*w + 2*a5*lam2*lam3*meu1*meu4*q*v*w + 2*a5*meu1*meu2*meu3*meu4*q*v*w};


    double c19[]={-(d1*lam2*lam3*lam4*lam5*meu1*p*u) + d1*lam4*lam5*meu1*meu2*meu3*p*u + d1*lam3*lam5*meu1*meu2*meu4*p*u + d1*lam2*lam5*meu1*meu3*meu4*p*u + d1*lam3*lam4*meu1*meu2*meu5*p*u + d1*lam2*lam4*meu1*meu3*meu5*p*u + d1*lam2*lam3*meu1*meu4*meu5*p*u - d1*meu1*meu2*meu3*meu4*meu5*p*u - a1*lam1*lam2*lam3*lam4*lam5*q*u - a2*lam3*lam4*lam5*meu1*meu2*q*u - a3*lam3*lam4*lam5*meu1*meu2*q*u - a4*lam3*lam4*lam5*meu1*meu2*q*u - a5*lam3*lam4*lam5*meu1*meu2*q*u - a2*lam2*lam4*lam5*meu1*meu3*q*u - a3*lam2*lam4*lam5*meu1*meu3*q*u - a4*lam2*lam4*lam5*meu1*meu3*q*u - a5*lam2*lam4*lam5*meu1*meu3*q*u + a1*lam1*lam4*lam5*meu2*meu3*q*u - a2*lam2*lam3*lam5*meu1*meu4*q*u - a3*lam2*lam3*lam5*meu1*meu4*q*u - a4*lam2*lam3*lam5*meu1*meu4*q*u - a5*lam2*lam3*lam5*meu1*meu4*q*u + a1*lam1*lam3*lam5*meu2*meu4*q*u + a1*lam1*lam2*lam5*meu3*meu4*q*u + a2*lam5*meu1*meu2*meu3*meu4*q*u + a3*lam5*meu1*meu2*meu3*meu4*q*u + a4*lam5*meu1*meu2*meu3*meu4*q*u + a5*lam5*meu1*meu2*meu3*meu4*q*u - a2*lam2*lam3*lam4*meu1*meu5*q*u - a3*lam2*lam3*lam4*meu1*meu5*q*u - a4*lam2*lam3*lam4*meu1*meu5*q*u - a5*lam2*lam3*lam4*meu1*meu5*q*u + a1*lam1*lam3*lam4*meu2*meu5*q*u + a1*lam1*lam2*lam4*meu3*meu5*q*u + a2*lam4*meu1*meu2*meu3*meu5*q*u + a3*lam4*meu1*meu2*meu3*meu5*q*u + a4*lam4*meu1*meu2*meu3*meu5*q*u + a5*lam4*meu1*meu2*meu3*meu5*q*u + a1*lam1*lam2*lam3*meu4*meu5*q*u + a2*lam3*meu1*meu2*meu4*meu5*q*u + a3*lam3*meu1*meu2*meu4*meu5*q*u + a4*lam3*meu1*meu2*meu4*meu5*q*u + a5*lam3*meu1*meu2*meu4*meu5*q*u + a2*lam2*meu1*meu3*meu4*meu5*q*u + a3*lam2*meu1*meu3*meu4*meu5*q*u + a4*lam2*meu1*meu3*meu4*meu5*q*u + a5*lam2*meu1*meu3*meu4*meu5*q*u - a1*lam1*meu2*meu3*meu4*meu5*q*u + lam2*lam3*lam4*lam5*meu1*p*r*u - lam4*lam5*meu1*meu2*meu3*p*r*u - lam3*lam5*meu1*meu2*meu4*p*r*u - lam2*lam5*meu1*meu3*meu4*p*r*u - lam3*lam4*meu1*meu2*meu5*p*r*u - lam2*lam4*meu1*meu3*meu5*p*r*u - lam2*lam3*meu1*meu4*meu5*p*r*u + meu1*meu2*meu3*meu4*meu5*p*r*u + d1*d2*meu1*pow(u,2) + pow(d1,2)*lam1*meu1*pow(u,2) + d1*d3*lam2*meu1*pow(u,2) + d1*d4*lam2*lam3*meu1*pow(u,2) + d1*d5*lam2*lam3*lam4*meu1*pow(u,2) - d1*d4*meu1*meu2*meu3*pow(u,2) - d1*d5*lam4*meu1*meu2*meu3*pow(u,2) - d1*d5*lam3*meu1*meu2*meu4*pow(u,2) - d1*d5*lam2*meu1*meu3*meu4*pow(u,2) + lam1*meu1*pow(q,2)*pow(u,2) - d2*meu1*r*pow(u,2) - 2*d1*lam1*meu1*r*pow(u,2) - d3*lam2*meu1*r*pow(u,2) - d4*lam2*lam3*meu1*r*pow(u,2) - d5*lam2*lam3*lam4*meu1*r*pow(u,2) + d4*meu1*meu2*meu3*r*pow(u,2) + d5*lam4*meu1*meu2*meu3*r*pow(u,2) + d5*lam3*meu1*meu2*meu4*r*pow(u,2) + d5*lam2*meu1*meu3*meu4*r*pow(u,2) + lam1*meu1*pow(r,2)*pow(u,2) + a1*lam1*lam2*lam3*lam4*lam5*p*v + a2*lam3*lam4*lam5*meu1*meu2*p*v + a3*lam3*lam4*lam5*meu1*meu2*p*v + a4*lam3*lam4*lam5*meu1*meu2*p*v + a5*lam3*lam4*lam5*meu1*meu2*p*v + a2*lam2*lam4*lam5*meu1*meu3*p*v + a3*lam2*lam4*lam5*meu1*meu3*p*v + a4*lam2*lam4*lam5*meu1*meu3*p*v + a5*lam2*lam4*lam5*meu1*meu3*p*v - a1*lam1*lam4*lam5*meu2*meu3*p*v + a2*lam2*lam3*lam5*meu1*meu4*p*v + a3*lam2*lam3*lam5*meu1*meu4*p*v + a4*lam2*lam3*lam5*meu1*meu4*p*v + a5*lam2*lam3*lam5*meu1*meu4*p*v - a1*lam1*lam3*lam5*meu2*meu4*p*v - a1*lam1*lam2*lam5*meu3*meu4*p*v - a2*lam5*meu1*meu2*meu3*meu4*p*v - a3*lam5*meu1*meu2*meu3*meu4*p*v - a4*lam5*meu1*meu2*meu3*meu4*p*v - a5*lam5*meu1*meu2*meu3*meu4*p*v + a2*lam2*lam3*lam4*meu1*meu5*p*v + a3*lam2*lam3*lam4*meu1*meu5*p*v + a4*lam2*lam3*lam4*meu1*meu5*p*v + a5*lam2*lam3*lam4*meu1*meu5*p*v - a1*lam1*lam3*lam4*meu2*meu5*p*v - a1*lam1*lam2*lam4*meu3*meu5*p*v - a2*lam4*meu1*meu2*meu3*meu5*p*v - a3*lam4*meu1*meu2*meu3*meu5*p*v - a4*lam4*meu1*meu2*meu3*meu5*p*v - a5*lam4*meu1*meu2*meu3*meu5*p*v - a1*lam1*lam2*lam3*meu4*meu5*p*v - a2*lam3*meu1*meu2*meu4*meu5*p*v - a3*lam3*meu1*meu2*meu4*meu5*p*v - a4*lam3*meu1*meu2*meu4*meu5*p*v - a5*lam3*meu1*meu2*meu4*meu5*p*v - a2*lam2*meu1*meu3*meu4*meu5*p*v - a3*lam2*meu1*meu3*meu4*meu5*p*v - a4*lam2*meu1*meu3*meu4*meu5*p*v - a5*lam2*meu1*meu3*meu4*meu5*p*v + a1*lam1*meu2*meu3*meu4*meu5*p*v - d1*lam2*lam3*lam4*lam5*meu1*q*v + d1*lam4*lam5*meu1*meu2*meu3*q*v + d1*lam3*lam5*meu1*meu2*meu4*q*v + d1*lam2*lam5*meu1*meu3*meu4*q*v + d1*lam3*lam4*meu1*meu2*meu5*q*v + d1*lam2*lam4*meu1*meu3*meu5*q*v + d1*lam2*lam3*meu1*meu4*meu5*q*v - d1*meu1*meu2*meu3*meu4*meu5*q*v + lam2*lam3*lam4*lam5*meu1*q*r*v - lam4*lam5*meu1*meu2*meu3*q*r*v - lam3*lam5*meu1*meu2*meu4*q*r*v - lam2*lam5*meu1*meu3*meu4*q*r*v - lam3*lam4*meu1*meu2*meu5*q*r*v - lam2*lam4*meu1*meu3*meu5*q*r*v - lam2*lam3*meu1*meu4*meu5*q*r*v + meu1*meu2*meu3*meu4*meu5*q*r*v - 2*lam1*meu1*p*q*u*v + d1*d2*meu1*pow(v,2) + pow(d1,2)*lam1*meu1*pow(v,2) + d1*d3*lam2*meu1*pow(v,2) + d1*d4*lam2*lam3*meu1*pow(v,2) + d1*d5*lam2*lam3*lam4*meu1*pow(v,2) - d1*d4*meu1*meu2*meu3*pow(v,2) - d1*d5*lam4*meu1*meu2*meu3*pow(v,2) - d1*d5*lam3*meu1*meu2*meu4*pow(v,2) - d1*d5*lam2*meu1*meu3*meu4*pow(v,2) + lam1*meu1*pow(p,2)*pow(v,2) - d2*meu1*r*pow(v,2) - 2*d1*lam1*meu1*r*pow(v,2) - d3*lam2*meu1*r*pow(v,2) - d4*lam2*lam3*meu1*r*pow(v,2) - d5*lam2*lam3*lam4*meu1*r*pow(v,2) + d4*meu1*meu2*meu3*r*pow(v,2) + d5*lam4*meu1*meu2*meu3*r*pow(v,2) + d5*lam3*meu1*meu2*meu4*r*pow(v,2) + d5*lam2*meu1*meu3*meu4*r*pow(v,2) + lam1*meu1*pow(r,2)*pow(v,2) - lam2*lam3*lam4*lam5*meu1*pow(p,2)*w + lam4*lam5*meu1*meu2*meu3*pow(p,2)*w + lam3*lam5*meu1*meu2*meu4*pow(p,2)*w + lam2*lam5*meu1*meu3*meu4*pow(p,2)*w + lam3*lam4*meu1*meu2*meu5*pow(p,2)*w + lam2*lam4*meu1*meu3*meu5*pow(p,2)*w + lam2*lam3*meu1*meu4*meu5*pow(p,2)*w - meu1*meu2*meu3*meu4*meu5*pow(p,2)*w - lam2*lam3*lam4*lam5*meu1*pow(q,2)*w + lam4*lam5*meu1*meu2*meu3*pow(q,2)*w + lam3*lam5*meu1*meu2*meu4*pow(q,2)*w + lam2*lam5*meu1*meu3*meu4*pow(q,2)*w + lam3*lam4*meu1*meu2*meu5*pow(q,2)*w + lam2*lam4*meu1*meu3*meu5*pow(q,2)*w + lam2*lam3*meu1*meu4*meu5*pow(q,2)*w - meu1*meu2*meu3*meu4*meu5*pow(q,2)*w + d2*meu1*p*u*w + 2*d1*lam1*meu1*p*u*w + d3*lam2*meu1*p*u*w + d4*lam2*lam3*meu1*p*u*w + d5*lam2*lam3*lam4*meu1*p*u*w - d4*meu1*meu2*meu3*p*u*w - d5*lam4*meu1*meu2*meu3*p*u*w - d5*lam3*meu1*meu2*meu4*p*u*w - d5*lam2*meu1*meu3*meu4*p*u*w + a1*q*u*w - 2*lam1*meu1*p*r*u*w - a1*p*v*w + d2*meu1*q*v*w + 2*d1*lam1*meu1*q*v*w + d3*lam2*meu1*q*v*w + d4*lam2*lam3*meu1*q*v*w + d5*lam2*lam3*lam4*meu1*q*v*w - d4*meu1*meu2*meu3*q*v*w - d5*lam4*meu1*meu2*meu3*q*v*w - d5*lam3*meu1*meu2*meu4*q*v*w - d5*lam2*meu1*meu3*meu4*q*v*w - 2*lam1*meu1*q*r*v*w + lam1*meu1*pow(p,2)*pow(w,2) + lam1*meu1*pow(q,2)*pow(w,2),2*d3*lam4*lam5*meu1*meu2*meu3*q*u + 2*d4*lam5*meu1*meu2*meu4*q*u + 2*d3*lam3*lam5*meu1*meu2*meu4*q*u + 2*d5*meu1*meu2*meu5*q*u + 2*d4*lam4*meu1*meu2*meu5*q*u + 2*d3*lam3*lam4*meu1*meu2*meu5*q*u - 2*d3*meu1*meu2*meu3*meu4*meu5*q*u + 2*a3*d1*meu1*meu2*pow(u,2) + 2*a4*d1*meu1*meu2*pow(u,2) + 2*a5*d1*meu1*meu2*pow(u,2) - 2*a3*meu1*meu2*r*pow(u,2) - 2*a4*meu1*meu2*r*pow(u,2) - 2*a5*meu1*meu2*r*pow(u,2) - 2*d3*lam4*lam5*meu1*meu2*meu3*p*v - 2*d4*lam5*meu1*meu2*meu4*p*v - 2*d3*lam3*lam5*meu1*meu2*meu4*p*v - 2*d5*meu1*meu2*meu5*p*v - 2*d4*lam4*meu1*meu2*meu5*p*v - 2*d3*lam3*lam4*meu1*meu2*meu5*p*v + 2*d3*meu1*meu2*meu3*meu4*meu5*p*v + 2*a3*d1*meu1*meu2*pow(v,2) + 2*a4*d1*meu1*meu2*pow(v,2) + 2*a5*d1*meu1*meu2*pow(v,2) - 2*a3*meu1*meu2*r*pow(v,2) - 2*a4*meu1*meu2*r*pow(v,2) - 2*a5*meu1*meu2*r*pow(v,2) + 2*a3*meu1*meu2*p*u*w + 2*a4*meu1*meu2*p*u*w + 2*a5*meu1*meu2*p*u*w + 2*a3*meu1*meu2*q*v*w + 2*a4*meu1*meu2*q*v*w + 2*a5*meu1*meu2*q*v*w,-(d1*lam2*lam3*lam4*lam5*meu1*p*u) - d1*lam4*lam5*meu1*meu2*meu3*p*u - d1*lam3*lam5*meu1*meu2*meu4*p*u + d1*lam2*lam5*meu1*meu3*meu4*p*u - d1*lam3*lam4*meu1*meu2*meu5*p*u + d1*lam2*lam4*meu1*meu3*meu5*p*u + d1*lam2*lam3*meu1*meu4*meu5*p*u + d1*meu1*meu2*meu3*meu4*meu5*p*u - a1*lam1*lam2*lam3*lam4*lam5*q*u - a2*lam3*lam4*lam5*meu1*meu2*q*u + a3*lam3*lam4*lam5*meu1*meu2*q*u + a4*lam3*lam4*lam5*meu1*meu2*q*u + a5*lam3*lam4*lam5*meu1*meu2*q*u + a2*lam2*lam4*lam5*meu1*meu3*q*u - a3*lam2*lam4*lam5*meu1*meu3*q*u - a4*lam2*lam4*lam5*meu1*meu3*q*u - a5*lam2*lam4*lam5*meu1*meu3*q*u - a1*lam1*lam4*lam5*meu2*meu3*q*u + a2*lam2*lam3*lam5*meu1*meu4*q*u - a3*lam2*lam3*lam5*meu1*meu4*q*u - a4*lam2*lam3*lam5*meu1*meu4*q*u - a5*lam2*lam3*lam5*meu1*meu4*q*u - a1*lam1*lam3*lam5*meu2*meu4*q*u + a1*lam1*lam2*lam5*meu3*meu4*q*u + a2*lam5*meu1*meu2*meu3*meu4*q*u - a3*lam5*meu1*meu2*meu3*meu4*q*u - a4*lam5*meu1*meu2*meu3*meu4*q*u - a5*lam5*meu1*meu2*meu3*meu4*q*u + a2*lam2*lam3*lam4*meu1*meu5*q*u - a3*lam2*lam3*lam4*meu1*meu5*q*u - a4*lam2*lam3*lam4*meu1*meu5*q*u - a5*lam2*lam3*lam4*meu1*meu5*q*u - a1*lam1*lam3*lam4*meu2*meu5*q*u + a1*lam1*lam2*lam4*meu3*meu5*q*u + a2*lam4*meu1*meu2*meu3*meu5*q*u - a3*lam4*meu1*meu2*meu3*meu5*q*u - a4*lam4*meu1*meu2*meu3*meu5*q*u - a5*lam4*meu1*meu2*meu3*meu5*q*u + a1*lam1*lam2*lam3*meu4*meu5*q*u + a2*lam3*meu1*meu2*meu4*meu5*q*u - a3*lam3*meu1*meu2*meu4*meu5*q*u - a4*lam3*meu1*meu2*meu4*meu5*q*u - a5*lam3*meu1*meu2*meu4*meu5*q*u - a2*lam2*meu1*meu3*meu4*meu5*q*u + a3*lam2*meu1*meu3*meu4*meu5*q*u + a4*lam2*meu1*meu3*meu4*meu5*q*u + a5*lam2*meu1*meu3*meu4*meu5*q*u + a1*lam1*meu2*meu3*meu4*meu5*q*u + lam2*lam3*lam4*lam5*meu1*p*r*u + lam4*lam5*meu1*meu2*meu3*p*r*u + lam3*lam5*meu1*meu2*meu4*p*r*u - lam2*lam5*meu1*meu3*meu4*p*r*u + lam3*lam4*meu1*meu2*meu5*p*r*u - lam2*lam4*meu1*meu3*meu5*p*r*u - lam2*lam3*meu1*meu4*meu5*p*r*u - meu1*meu2*meu3*meu4*meu5*p*r*u + d1*d2*meu1*pow(u,2) + pow(d1,2)*lam1*meu1*pow(u,2) + d1*d3*lam2*meu1*pow(u,2) + d1*d4*lam2*lam3*meu1*pow(u,2) + d1*d5*lam2*lam3*lam4*meu1*pow(u,2) + d1*d4*meu1*meu2*meu3*pow(u,2) + d1*d5*lam4*meu1*meu2*meu3*pow(u,2) + d1*d5*lam3*meu1*meu2*meu4*pow(u,2) - d1*d5*lam2*meu1*meu3*meu4*pow(u,2) + lam1*meu1*pow(q,2)*pow(u,2) - d2*meu1*r*pow(u,2) - 2*d1*lam1*meu1*r*pow(u,2) - d3*lam2*meu1*r*pow(u,2) - d4*lam2*lam3*meu1*r*pow(u,2) - d5*lam2*lam3*lam4*meu1*r*pow(u,2) - d4*meu1*meu2*meu3*r*pow(u,2) - d5*lam4*meu1*meu2*meu3*r*pow(u,2) - d5*lam3*meu1*meu2*meu4*r*pow(u,2)
 + d5*lam2*meu1*meu3*meu4*r*pow(u,2) + lam1*meu1*pow(r,2)*pow(u,2) + a1*lam1*lam2*lam3*lam4*lam5*p*v + a2*lam3*lam4*lam5*meu1*meu2*p*v - a3*lam3*lam4*lam5*meu1*meu2*p*v - a4*lam3*lam4*lam5*meu1*meu2*p*v - a5*lam3*lam4*lam5*meu1*meu2*p*v - a2*lam2*lam4*lam5*meu1*meu3*p*v + a3*lam2*lam4*lam5*meu1*meu3*p*v + a4*lam2*lam4*lam5*meu1*meu3*p*v + a5*lam2*lam4*lam5*meu1*meu3*p*v + a1*lam1*lam4*lam5*meu2*meu3*p*v - a2*lam2*lam3*lam5*meu1*meu4*p*v + a3*lam2*lam3*lam5*meu1*meu4*p*v + a4*lam2*lam3*lam5*meu1*meu4*p*v + a5*lam2*lam3*lam5*meu1*meu4*p*v + a1*lam1*lam3*lam5*meu2*meu4*p*v - a1*lam1*lam2*lam5*meu3*meu4*p*v - a2*lam5*meu1*meu2*meu3*meu4*p*v + a3*lam5*meu1*meu2*meu3*meu4*p*v + a4*lam5*meu1*meu2*meu3*meu4*p*v + a5*lam5*meu1*meu2*meu3*meu4*p*v - a2*lam2*lam3*lam4*meu1*meu5*p*v + a3*lam2*lam3*lam4*meu1*meu5*p*v + a4*lam2*lam3*lam4*meu1*meu5*p*v + a5*lam2*lam3*lam4*meu1*meu5*p*v + a1*lam1*lam3*lam4*meu2*meu5*p*v - a1*lam1*lam2*lam4*meu3*meu5*p*v - a2*lam4*meu1*meu2*meu3*meu5*p*v + a3*lam4*meu1*meu2*meu3*meu5*p*v + a4*lam4*meu1*meu2*meu3*meu5*p*v + a5*lam4*meu1*meu2*meu3*meu5*p*v - a1*lam1*lam2*lam3*meu4*meu5*p*v - a2*lam3*meu1*meu2*meu4*meu5*p*v + a3*lam3*meu1*meu2*meu4*meu5*p*v + a4*lam3*meu1*meu2*meu4*meu5*p*v + a5*lam3*meu1*meu2*meu4*meu5*p*v + a2*lam2*meu1*meu3*meu4*meu5*p*v - a3*lam2*meu1*meu3*meu4*meu5*p*v - a4*lam2*meu1*meu3*meu4*meu5*p*v - a5*lam2*meu1*meu3*meu4*meu5*p*v - a1*lam1*meu2*meu3*meu4*meu5*p*v - d1*lam2*lam3*lam4*lam5*meu1*q*v - d1*lam4*lam5*meu1*meu2*meu3*q*v - d1*lam3*lam5*meu1*meu2*meu4*q*v + d1*lam2*lam5*meu1*meu3*meu4*q*v - d1*lam3*lam4*meu1*meu2*meu5*q*v + d1*lam2*lam4*meu1*meu3*meu5*q*v + d1*lam2*lam3*meu1*meu4*meu5*q*v + d1*meu1*meu2*meu3*meu4*meu5*q*v + lam2*lam3*lam4*lam5*meu1*q*r*v + lam4*lam5*meu1*meu2*meu3*q*r*v + lam3*lam5*meu1*meu2*meu4*q*r*v - lam2*lam5*meu1*meu3*meu4*q*r*v + lam3*lam4*meu1*meu2*meu5*q*r*v - lam2*lam4*meu1*meu3*meu5*q*r*v - lam2*lam3*meu1*meu4*meu5*q*r*v - meu1*meu2*meu3*meu4*meu5*q*r*v - 2*lam1*meu1*p*q*u*v + d1*d2*meu1*pow(v,2) + pow(d1,2)*lam1*meu1*pow(v,2) + d1*d3*lam2*meu1*pow(v,2) + d1*d4*lam2*lam3*meu1*pow(v,2) + d1*d5*lam2*lam3*lam4*meu1*pow(v,2) + d1*d4*meu1*meu2*meu3*pow(v,2) + d1*d5*lam4*meu1*meu2*meu3*pow(v,2) + d1*d5*lam3*meu1*meu2*meu4*pow(v,2) - d1*d5*lam2*meu1*meu3*meu4*pow(v,2) + lam1*meu1*pow(p,2)*pow(v,2) - d2*meu1*r*pow(v,2) - 2*d1*lam1*meu1*r*pow(v,2) - d3*lam2*meu1*r*pow(v,2) - d4*lam2*lam3*meu1*r*pow(v,2) - d5*lam2*lam3*lam4*meu1*r*pow(v,2) - d4*meu1*meu2*meu3*r*pow(v,2) - d5*lam4*meu1*meu2*meu3*r*pow(v,2) - d5*lam3*meu1*meu2*meu4*r*pow(v,2) + d5*lam2*meu1*meu3*meu4*r*pow(v,2) + lam1*meu1*pow(r,2)*pow(v,2) - lam2*lam3*lam4*lam5*meu1*pow(p,2)*w - lam4*lam5*meu1*meu2*meu3*pow(p,2)*w - lam3*lam5*meu1*meu2*meu4*pow(p,2)*w + lam2*lam5*meu1*meu3*meu4*pow(p,2)*w - lam3*lam4*meu1*meu2*meu5*pow(p,2)*w + lam2*lam4*meu1*meu3*meu5*pow(p,2)*w + lam2*lam3*meu1*meu4*meu5*pow(p,2)*w + meu1*meu2*meu3*meu4*meu5*pow(p,2)*w - lam2*lam3*lam4*lam5*meu1*pow(q,2)*w - lam4*lam5*meu1*meu2*meu3*pow(q,2)*w - lam3*lam5*meu1*meu2*meu4*pow(q,2)*w + lam2*lam5*meu1*meu3*meu4*pow(q,2)*w - lam3*lam4*meu1*meu2*meu5*pow(q,2)*w + lam2*lam4*meu1*meu3*meu5*pow(q,2)*w + lam2*lam3*meu1*meu4*meu5*pow(q,2)*w + meu1*meu2*meu3*meu4*meu5*pow(q,2)*w + d2*meu1*p*u*w + 2*d1*lam1*meu1*p*u*w + d3*lam2*meu1*p*u*w + d4*lam2*lam3*meu1*p*u*w + d5*lam2*lam3*lam4*meu1*p*u*w + d4*meu1*meu2*meu3*p*u*w + d5*lam4*meu1*meu2*meu3*p*u*w + d5*lam3*meu1*meu2*meu4*p*u*w - d5*lam2*meu1*meu3*meu4*p*u*w + a1*q*u*w - 2*lam1*meu1*p*r*u*w - a1*p*v*w + d2*meu1*q*v*w + 2*d1*lam1*meu1*q*v*w + d3*lam2*meu1*q*v*w + d4*lam2*lam3*meu1*q*v*w + d5*lam2*lam3*lam4*meu1*q*v*w + d4*meu1*meu2*meu3*q*v*w + d5*lam4*meu1*meu2*meu3*q*v*w + d5*lam3*meu1*meu2*meu4*q*v*w - d5*lam2*meu1*meu3*meu4*q*v*w - 2*lam1*meu1*q*r*v*w + lam1*meu1*pow(p,2)*pow(w,2) + lam1*meu1*pow(q,2)*pow(w,2)};


i=0;
    for(j=0;j<3;j++)
        cval[i][j]=c11[j];

    i=1;
    for(j=0;j<3;j++)
        cval[i][j]=c12[j];

    i=2;
    for(j=0;j<3;j++)
        cval[i][j]=c13[j];

    i=3;
    for(j=0;j<3;j++)
        cval[i][j]=c14[j];

    i=4;
    for(j=0;j<3;j++)
        cval[i][j]=c15[j];

    i=5;
    for(j=0;j<3;j++)
        cval[i][j]=c16[j];

    i=6;
    for(j=0;j<3;j++)
        cval[i][j]=c17[j];


    i=7;
    for(j=0;j<3;j++)
        cval[i][j]=c18[j];

    i=8;
    for(j=0;j<3;j++)
        cval[i][j]=c19[j];


}
