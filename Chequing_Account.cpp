//
//  Chequing_Account.cpp
//  05_bank_account_class
//
//  Created by Andrea Zotelli on 2020-05-26.
//  Copyright © 2020 Andrea Zotelli. All rights reserved.
//

#include "Chequing_Account.h"

Chequing_Account::Chequing_Account(std::string name, double balance)
    : Account{name, balance} {
}

    //inherits the Account::deposit methods
bool Chequing_Account::withdraw(double amount) {
    amount += amount + def_wd_fee;
    return Account::withdraw(amount);
}

void Chequing_Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "Chequing Account: " << name << ": " << balance << std::endl;
}
