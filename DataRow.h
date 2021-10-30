//
// Created by Shweta on 11/25/2020.
//

#ifndef _DATAROW_H_
#define _DATAROW_H_


class DataRow {
public:
    double bid;
    double ask;
    double stockPrice;
    double effectiveSpread;
    double realizedSpread;

public:
    DataRow();

};

istream& operator>>(istream &is, DataRow &obj);
ostream& operator<<(ostream &os, DataRow &obj);



#endif //TEMPLATE_DATAROW_H
