#ifndef __NORMAL_CPP
#define __NORMAL_CPP
#include "normal.h"
#include <cmath>

NormalDistribution::NormalDistribution(){
    mean = 0.0;
    SD =1.0;

}

NormalDistribution::NormalDistribution(const double& _mean,const double& _SD){
    mean = _mean;
    SD =_SD;

}
double NormalDistribution::getValueCDF(const double& x) const{
    return 0.5 * erfc(-(x-mean)/(SD*sqrt(2))); 
   //return return (1/(SD*sqrt(2*M_PI)))*exp((-0.5) * pow(((x-mean) /SD),2.0));

}

NormalDistribution::~NormalDistribution(){};
#endif