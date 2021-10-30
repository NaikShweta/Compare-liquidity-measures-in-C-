//
// Created by Aishwarya Suresh on 12/9/20.
//


#ifndef _REALIZEDSPREAD_H_
#define _REALIZEDSPREAD_H_


class RealizedSpread {
public:
    double bid;
    double ask;
    double stockPrice;
    int d;

public:
    RealizedSpread();
    RealizedSpread(double inBid, double inStockPrice, double inAsk, int inD);
    double rSpread();

};


#endif //TEMPLATE_EFFECTIVESPREAD_H
