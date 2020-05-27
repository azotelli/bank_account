//
//  Account.h
//  05_bank_account_class
//
//  Created by Andrea Zotelli on 2020-05-25.
//  Copyright © 2020 Andrea Zotelli. All rights reserved.
//

#ifndef Account_h
#define Account_h

#include <iostream>
#include <string>
#include "I_Printable.h"

class Account: public I_Printable {

private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
    
protected:
    std::string name;
    double balance;

public:
    Account(std::string name = def_name, double balance = def_balance);
    virtual ~Account() = default;
    
    virtual bool deposit(double amount); //makes the method a pure virtual funcion
    virtual bool withdraw(double amount); // so the class is now an abstract class.
    virtual void print(std::ostream &os) const override;
};
#endif /* Account_h */
