//
//  Savings_Account.cpp
//  05_bank_account_class
//
//  Created by Andrea Zotelli on 2020-05-25.
//  Copyright © 2020 Andrea Zotelli. All rights reserved.
//

#include <iostream>
#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
    : Account {name, balance}, int_rate{int_rate} {
}

// Deposit:
//      Amount supplied to deposit will be incremented by
//      (amount * int_rate/100)
//      and then the updated amount will be deposited
//
bool Savings_Account::deposit(double amount) {
    amount += amount * (int_rate/100);
    return Account::deposit(amount);
}

void Savings_Account::print(std::ostream &os) const {
    os << "Savings_Account: " << name << ": " << balance << std::endl;
}
