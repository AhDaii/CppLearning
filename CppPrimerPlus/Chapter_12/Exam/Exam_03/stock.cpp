#include <iostream>
#include <cstring>
#include "stock.h"

Stock::Stock() {
    company = new char[8];
    strcpy(company, "no name");
    shares = 0;
    share_val = 0;
    total_val = 0;
}

Stock::Stock(const char *co, long n, double pr) {
    company = new char[strlen(co)];
    strcpy(company, co);
    if(n < 0) {
        std::cout << "Number of shares can't be negative; " << company << " shares set to 0.\n";
        shares = 0;
    }
    else 
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock() {

}

void Stock::buy(long num, double price) {
    if(num < 0) {
        std::cout << "Number of shares purchased can't be negative. Transaction is aborted.\n";
    }
    else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    using std::cout;
    if(num < 0) {
        cout << "Number of shares sold can't be negative. Transaction is aborted.\n";
    }
    else if(num > shares) {
        cout << "You can't sell more than you have! Transaction is aborted.\n";
    }
    else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

ostream& operator<<(ostream &os, const Stock& stock) {
    using std::cout;
    using std::ios_base;

    ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    os << "Company: " << stock.company << " Shares: " << stock.shares << '\n';
    os << " Share Price: $" << stock.share_val;

    os.precision(2);
    os << " Total Worth: $" << stock.total_val << '\n';

    os.setf(orig, ios_base::floatfield);
    os.precision(prec);
    return os;
}

const Stock& Stock::topval(const Stock &s) const {
    if(s.total_val > total_val)
        return s;
    else 
        return *this;
}