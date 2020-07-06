

#include <iostream>
#include "prob_distribution/normal.h"
#include "options/vanilla_option.h"
#include "prob_distribution/normal.cpp"
#include "options/vanilla_option.cpp"



int main(void){

    double x;
    double out;

    NormalDistribution test(0.0,1.0);

    /*std::cout<<test.getValueCDF(1.0);
    std::cout<<test.getValueCDF(0.0);
    std::cout<<test.getValueCDF(4.0)*/;
    // S=42, K =40, r = 0.1, sigma = 0.2, T = 0.5,
    // should call price 4.76
    VanillaOption vanillaOption(40.0,0.1,0.5,42.0,0.2);
    std::cout<<vanillaOption.call_price()<<"\n";


}