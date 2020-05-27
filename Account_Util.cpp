//
//  Account_Util.cpp
//  05_bank_account_class
//
//  Created by Andrea Zotelli on 2020-05-25.
//  Copyright © 2020 Andrea Zotelli. All rights reserved.
//

#include <iostream>
#include "Account_Util.h"

// Displays Account objects in a vector of Account objecs
void display(const std::vector<Account *> &accounts){
    std::cout << "\n============ Accounts =============\n";
    for (const auto acc: accounts)
        std::cout << *acc << std::endl;
}

// Deposits the supplied amount to each Account object in the vector
void deposit (std::vector<Account *> &accounts, double amount) {
    std::cout << "\n============ Depositing to Accounts =============\n";
    for (auto acc: accounts) {
        if (acc->deposit(amount))
            std::cout << "Deposited " << amount << " to " << *acc <<std::endl;
        else
            std::cout << "Failed deposit of " << amount << " to " << *acc << std::endl;
    }
}
// Withdraw amount from each Account object in the vector
void withdraw(std::vector<Account *> &accounts, double amount) {
    std::cout << "\n============ Withdrawing from Accounts =============\n";
    for (auto acc:accounts) {
        if (acc->withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << *acc << std::endl;
        else
            std::cout << "Failed withdrawal of " << amount << " from " << *acc << std::endl;
    }
}
