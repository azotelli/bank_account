//
//  Chequing_Account.h
//  05_bank_account_class
//
//  Created by Andrea Zotelli on 2020-05-26.
//  Copyright © 2020 Andrea Zotelli. All rights reserved.
//

#ifndef Chequing_Account_h
#define Chequing_Account_h

#include <iostream>
#include <string>
#include "Account.h"

// Checking account class: has a name, a balance and a fee of $1.50 per withdrawal transaction. Every withdrawal transaction will be assessed this flat fee.

class Chequing_Account: public Account {

private:
    
    static constexpr const char *def_name = "Unnamed Chequing Account";
    static constexpr const double def_balance = 0.0;
    static constexpr const double def_wd_fee = 1.50;
    
public:
    Chequing_Account(std::string name = def_name, double balance = def_balance);
    virtual ~Chequing_Account() = default;
    //inherits the Account::deposit methods
    bool withdraw(double amount) override;  //overrides the Account::withdraw method
    
    virtual void print(std::ostream &os) const override;
    
};

#endif /* Chequing_Account_h */
