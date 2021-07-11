#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>

class Stock {

private:
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }

public:
    Stock();
    ~Stock();
    Stock(const std::string &co, long n = 0, double pr = 0.0);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show()const;
    Stock& opval(const Stock & s) const;
    const std::string& getCompany() const { return company; }
    const int getShares() const { return shares; }
    const double getShareVal() const { return share_val; }
    const double getTotalVal() const { return total_val; }

};

#endif