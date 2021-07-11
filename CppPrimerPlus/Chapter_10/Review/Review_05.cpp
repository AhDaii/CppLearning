#include <string>
#include <iostream>

class Account {

private:
    std::string name, account_number;
    int deposit;

public:
    Account(std::string name, std::string account_number, int deposit);
    void show() const;
    void store(const int money);
    void withdraw(const int money);
};