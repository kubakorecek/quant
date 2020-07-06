#ifndef __VANILA_OPTION_H
#define __VANILA_OPTION_H

class VanillaOption
{
   


    private:
        void init();
        void copy(const VanillaOption& rhs);

        double K; // strike price
        double r; // interest rate
        double T; //option expiration time
        double S;//Asset price
        double sigma;//Volatility
        double d1;
        double d2;
        double KeRT; 

    public:
      
     VanillaOption(); // Def. constructor
     VanillaOption(const double& _K, const double& _r, 
        const double& _T,const double& _S,
        const double& _sigma);
     VanillaOption(const VanillaOption& rhs);
     VanillaOption& operator=(const VanillaOption& rhs);

     virtual ~VanillaOption();

     void setD1() ;
     void setD2() ;

     double getK() const;
     double getT() const;
     double getr() const;
     double getS() const;
     double getsigma() const;

     double call_price() const;
     double put_price() const;


}
;

#endif