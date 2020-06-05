#ifndef SALES_DATE_H
#define SALES_DATE_H
#include <string>
struct Sales_data {
    std::string isbn;
    int sold_out = 0;
    double price = 0.0;
    double revenue = 0.0;
};
#endif
