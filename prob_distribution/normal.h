#ifndef __NORMAL_H
#define __NORMAL_H


/**
 * This class is generating holding the values and methods for Normal distribution
 */

class NormalDistribution{
    private:
        double mean;
        double SD;
    public:
        NormalDistribution(); //def con.
        NormalDistribution(const double& _mean,const double& _SD);

        virtual ~NormalDistribution();

        double getValueCDF(const double& x) const;
        /*void setMean();
        void setSD();
        double getMean();
        double getSD();*/
};


#endif