#include <iostream>
#include "account.h"
using namespace std;

int main() {
    Account account("david", "1235123532", 100);
    account.show();
    account.store(50);
    account.show();
    account.withdraw(151);
    account.withdraw(55);
    account.show();
    return 0;
}