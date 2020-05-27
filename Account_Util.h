//
//  Account_Util.h
//  05_bank_account_class
//
//  Created by Andrea Zotelli on 2020-05-25.
//  Copyright © 2020 Andrea Zotelli. All rights reserved.
//

#ifndef Account_Util_h
#define Account_Util_h

#include <vector>
#include "Account.h"

// Utility helper functions for Account * class

void display(const std::vector<Account *> &accounts);
void deposit(std::vector<Account *> &accounts, double amount);
void withdraw(std::vector<Account *> &accounts, double amount);

#endif /* Account_Util_h */
