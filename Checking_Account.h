//
//  Checking_Account.h
//  05_bank_account_class
//
//  Created by Andrea Zotelli on 2020-05-26.
//  Copyright © 2020 Andrea Zotelli. All rights reserved.
//

#ifndef Checking_Account_h
#define Checking_Account_h

#include "Account.h"

class Checking_Account: public Account {
  
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr const double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    Savings_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    //inherits the Account::withdraw methods
};

#endif /* Checking_Account_h */
