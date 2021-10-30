//
// Created by Shweta on 11/25/2020.
//

#ifndef _EFFECTIVESPREAD_H_
#define _EFFECTIVESPREAD_H_


class EffectiveSpread {
public:
    double bid;
    double ask;
    double stockPrice;
    int d;

public:
    EffectiveSpread();
    EffectiveSpread(double inBid, double inStockPrice, double inAsk, int inD);
    double eSpread();

};


#endif //TEMPLATE_EFFECTIVESPREAD_H
