//
// Created by Shweta on 11/25/2020.
//
#include "std_lib_facilities.h"
#include "EffectiveSpread.h"

EffectiveSpread::EffectiveSpread() {
    bid = 0.0;
    ask = 0.0;
    stockPrice = 0.0;
    d = 0;
}

EffectiveSpread::EffectiveSpread(double inBid, double inStockPrice, double inAsk, int inD) {
    bid = inBid;
    ask = inAsk;
    stockPrice = inStockPrice;
    d = inD;
}
double EffectiveSpread::eSpread() {
    double result;

    double midpoint = (bid + ask) / 2;
    result = 2 * d* (stockPrice - midpoint);

    return result;
}
