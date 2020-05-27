//
//  Trust_Account.h
//  05_bank_account_class
//
//  Created by Andrea Zotelli on 2020-05-26.
//  Copyright © 2020 Andrea Zotelli. All rights reserved.
//

#ifndef Trust_Account_h
#define Trust_Account_h

#include "Savings_Account.h"

/*
Trust account class: has a name, a balance, and an interest rate.
The Trust account deposit works just like a savings account deposit.

Deposit Method: any deposits of $5000.00 or more will receive a $50.00 bonus deposited to the account.

 Withdrawal Method: it should only allow 3 withdrawals per year, and each of these must be less than 20% of the account balance. There's no need to keep track of calendar time for this method, just make sure the 4th withdrawal fails.
*/

class Trust_Account: public Savings_Account {

private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr const double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double def_bonus = 50.0;
    static constexpr double bonus_threshold = 5000.0;
    static constexpr int max_withdrawals = 3;
    static constexpr double max_withdrawal_amount = 0.2;

//    static constexpr def_count_wd = 0;
    
protected:
    int count_withdrawals;
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    virtual ~Trust_Account() = default;
    
    //Deposits of $5000 or more will receive $50 bonus
    bool deposit(double amount) override;
    
    // Max of 3 withdrawals allowed; each one max = 20% account balance;
    bool withdraw(double amount) override;
    
    virtual void print(std::ostream &os) const override;
    
};

#endif /* Trust_Account_h */
