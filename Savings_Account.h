//
//  Savings_Account.h
//  05_bank_account_class
//
//  Created by Andrea Zotelli on 2020-05-25.
//  Copyright © 2020 Andrea Zotelli. All rights reserved.
//

#ifndef Savings_Account_h
#define Savings_Account_h

#include "Account.h"


class Savings_Account: public Account {

private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr const double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    Savings_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    virtual ~Savings_Account() = default;
    
    bool deposit(double amount) override;
    //inherits the Account::withdraw methods
    
    virtual void print(std::ostream &os) const override;
   
};

#endif /* Savings_Account_h */
