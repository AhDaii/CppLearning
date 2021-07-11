#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>
#include <iostream>

class Account {

private:
    std::string name, account_number;
    int deposit;

public:
    Account(std::string name, std::string account_number, int deposit) {
        this->name = name;
        this->account_number = account_number;
        this->deposit = deposit;
    }
    void show() const;
    void store(const int money);
    void withdraw(const int money);
};

#endif