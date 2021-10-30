//
// Created by manas on 13/12/20.
//

#ifndef PROJECT_ROLLMODEL_H
#define PROJECT_ROLLMODEL_H
#include "std_lib_facilities.h"
#include "DataRow.h"

class RollModel {
private:
    vector<double> RollData;
    double spread;
public:
    explicit RollModel(vector<DataRow>& data);
    double RollSpread();
    static double mean(vector<double>& arr, int n);
    static double covariance(vector<double>& arr1, vector<double>& arr2, int n);
};


#endif //PROJECT_ROLLMODEL_H
