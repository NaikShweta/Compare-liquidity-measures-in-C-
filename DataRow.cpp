//
// Created by Shweta on 11/25/2020.
//
#include "std_lib_facilities.h"
#include "DataRow.h"

DataRow::DataRow() {
    bid = 0.0;
    ask = 0.0;
    stockPrice = 0.0;
    effectiveSpread = 0.0;
    realizedSpread = 0.0;
}

istream& operator>>(istream &is, DataRow &obj){
    is >> obj.bid;
    is >> obj.stockPrice;
    is >> obj.ask;

    return (is);
}

ostream& operator<<(ostream &os, DataRow &obj){
    os << obj.bid << setw(15) << obj.stockPrice << setw(15) << obj.ask << setw(15) << obj.effectiveSpread << setw(15) << obj.realizedSpread;

    return (os);
}
