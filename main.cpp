//
//  main.cpp
//  05_bank_account_class
//
//  Created by Andrea Zotelli on 2020-05-25.
//  Copyright © 2020 Andrea Zotelli. All rights reserved.
//

#include <iostream>
#include <memory>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Chequing_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"


using namespace std;

int main() {
    
      
    Account *trust = new Trust_Account("James");
    cout << *trust << endl;
    
    
    Account *p1 = new Chequing_Account("Larry", 10000);
    Account *p2 = new Savings_Account("Moe", 1000);
    Account *p3 = new Trust_Account("Curly");
    
    std::cout << *p1 << endl;
    cout << *p2 << endl;
    cout << *p3 << endl;
    
    std::vector<Account *> accounts {p1,p2,p3};
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    display(accounts);

    
    delete p1;
    delete p2;
    delete p3;
    
//    // Accounts
//    vector<Account> accounts;
//    accounts.push_back(Account {});
//    accounts.push_back(Account {"Larry"});
//    accounts.push_back(Account {"Moe", 2000});
//    accounts.push_back(Account {"Curly", 5000});
//
//    display(accounts);
//    deposit(accounts, 1000);
//    withdraw(accounts, 2000);
//
//    // Savings
//
//    vector<Savings_Account> sav_account;
//    sav_account.push_back(Savings_Account {} );
//    sav_account.push_back(Savings_Account {"Superman"});
//    sav_account.push_back(Savings_Account {"Batman", 2000});
//    sav_account.push_back(Savings_Account {"Wonderwoman", 5000, 5.0});
//
//    display(sav_account);
//    deposit(sav_account, 1000);
//    withdraw(sav_account, 2000);
//
//    // Chequing
//
//    vector<Chequing_Account> cheq_account;
//    cheq_account.push_back(Chequing_Account {} );
//    cheq_account.push_back(Chequing_Account {"Robin"});
//    cheq_account.push_back(Chequing_Account {"Flash", 2000});
//
//    display(cheq_account);
//    deposit(cheq_account, 1000);
//    withdraw(cheq_account, 1000);
//
//    // Trust
//
//    vector<Trust_Account> trust_accounts;
//    trust_accounts.push_back(Trust_Account {} );
//    trust_accounts.push_back(Trust_Account {"Mariah"});
//    trust_accounts.push_back(Trust_Account {"Joseph", 2000});
//    trust_accounts.push_back(Trust_Account {"John", 5000, 5.0});
//
//    display(trust_accounts);
//    deposit(trust_accounts, 1000);
//    withdraw(trust_accounts, 3000);
//    for (int i=1; i<=5; i++)
//        withdraw(trust_accounts, 500);
//
//
//    cout << endl << endl;
    return 0;
}
