#ifndef __VANILA_OPTION_CPP
#define __VANILA_OPTION_CPP
#include "vanilla_option.h"
#include "../prob_distribution/normal.h"
#include "../prob_distribution/normal.cpp"
#include <cmath>
/*
This is the funcion module able to calculate Vanilla Option.

*/
VanillaOption::VanillaOption(const double& _K, const double& _r, 
        const double& _T,const double& _S,
        const double& _sigma){
            K=_K;
            T=_T;
            r=_r;
            S=_S;
            sigma=_sigma;
            setD1();
 setD2();
        }


void VanillaOption::init(){
    K=0.0;
    T=0.0;
    r=0.0;
    S=0.0;
    sigma=0;
    setD1();
 setD2();
};

void VanillaOption::copy(const VanillaOption& rhs){
 K=rhs.getK();
 T=rhs.getT();
 r=rhs.getr();
 S=rhs.getS();
 sigma=rhs.getsigma();
 setD1();
 setD2();
 
};
double VanillaOption::getT() const {return T;};
double VanillaOption::getr() const {return r;};
double VanillaOption::getK() const {return K;};
double VanillaOption::getS() const {return S;};
double VanillaOption::getsigma() const {return sigma;};

VanillaOption& VanillaOption::operator=(const VanillaOption& rhs){
    if(this == &rhs){
        return *this;

    }
    copy(rhs);
    return *this;
};


void VanillaOption::setD1() {
 d1 = (log(S/K) + (r + pow(sigma,2)*0.5)*T)/(sigma*sqrt(1-T));
}
void VanillaOption::setD2() {
d2 = d1 - (sigma*sqrt(1-T));
};

double VanillaOption::call_price() const{
    NormalDistribution N(0.0,1.0);
    return S*N.getValueCDF(d1)-K * exp(-r*T)*N.getValueCDF(d2);
 
};


VanillaOption::~VanillaOption(){};   
#endif