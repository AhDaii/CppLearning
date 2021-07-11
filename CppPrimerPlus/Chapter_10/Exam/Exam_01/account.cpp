#include <iostream>
#include "account.h"
using namespace std;


void Account::show() const {
    std::cout << "[SHOW] name = " << name << ", account number = " << account_number << ", " << deposit << endl;
}

void Account::store(const int money) {
    deposit += money;
}


void Account::withdraw(const int money) {
    if(money > deposit) {
        cout << "withdraw failed! No so much money!" << endl;
        return ;
    }
    deposit -= money;
}