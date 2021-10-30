//
// Created by Aishwarya Suresh on 12/9/20.
//
#include "std_lib_facilities.h"
#include "RealizedSpread.h"

RealizedSpread::RealizedSpread() {
    bid = 0.0;
    ask = 0.0;
    stockPrice = 0.0;
    d = 0;
}

RealizedSpread::RealizedSpread(double inBid, double inStockPrice, double inAsk, int inD) {
    bid = inBid;
    ask = inAsk;
    stockPrice = inStockPrice;
    d = inD;
}
double RealizedSpread::rSpread() {

    double result;
    double lag = 0.0833; //lag of 5 min
    double midpoint = (bid + ask) / 2;
    result = 2 * d * lag *(stockPrice - midpoint);

    return result;
}
