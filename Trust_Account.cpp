//
//  Trust_Account.cpp
//  05_bank_account_class
//
//  Created by Andrea Zotelli on 2020-05-26.
//  Copyright © 2020 Andrea Zotelli. All rights reserved.
//


#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
: Savings_Account {name, balance, int_rate}, count_withdrawals{0} {
}

// Deposits additional $50 bonus when amount >= $5000
bool Trust_Account::deposit(double amount) {
    if (amount >= bonus_threshold)
        amount += def_bonus;
    return Savings_Account::deposit(amount);
}

// Only allowed 3 withdrawals, each can be up to a maximum of 20% of the account's value
bool Trust_Account::withdraw(double amount) {
    if ((count_withdrawals >= max_withdrawals) || (amount > balance * max_withdrawal_amount)) {
        std::cout << "Withdraw not authorized. ";
        return false;
    } else {
        count_withdrawals++;
        return Savings_Account::withdraw(amount);
    }
}

void Trust_Account::print(std::ostream &os) const {
    os << "Trust_Account: " << name << ": " << balance << std::endl;
}
