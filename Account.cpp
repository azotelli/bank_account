//
//  Account.cpp
//  05_bank_account_class
//
//  Created by Andrea Zotelli on 2020-05-25.
//  Copyright © 2020 Andrea Zotelli. All rights reserved.
//

#include "Account.h"

Account::Account(std::string name, double balance)
    :name{name}, balance{balance} {
}

bool Account::deposit(double amount) {
    if (amount < 0) {
        return false;
    } else {
        balance +=amount;
        return true;
        }
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    } else
        return false;
}


void Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "Account: " << name << ": " << balance << std::endl;
}
