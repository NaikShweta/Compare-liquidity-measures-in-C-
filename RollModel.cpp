//
// Created by manas on 13/12/20.
//

#include "RollModel.h"

RollModel::RollModel(vector <DataRow>& data) {
    spread = 0;
    for(int i = 0; i < data.size(); i++){
        if(data.at(i).stockPrice!=0){
            RollData.push_back(data.at(i).stockPrice);
        }

    }
}

double RollModel::RollSpread() {
    vector<double> deltaP;
    for(int i=1; i<RollData.size()-1;i++){
        deltaP.push_back(RollData.at(i)-RollData.at(i-1));
    }
    vector<double> deltaP1;
    for(int i=2; i<RollData.size();i++){
        deltaP1.push_back(RollData.at(i)-RollData.at(i-1));
    }

    double cov = covariance(deltaP,deltaP1, deltaP.size());
    spread = 2*sqrt(-1*cov);
    return spread;
}

double RollModel::mean(Vector<double> &arr, int n) {
    double sum = 0;
    for(int i = 0; i < n; i++)
        sum = sum + arr[i];
    return sum / n;
}

double RollModel::covariance(Vector<double> &arr1, Vector<double> &arr2, int n) {
    double sum = 0;
    for(int i = 0; i < n; i++)
        sum = sum + (arr1[i] - mean(arr1, n)) *
                    (arr2[i] - mean(arr2, n));
    return sum / (n - 1);
}
