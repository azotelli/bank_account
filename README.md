# bank_account
C++: Using Inheritance and Polymorphism to create different types of Bank Accounts

This application creates different types of bank account: chequing, savings, and trust accounts.
It has a base class "account" from which the other ones derive from.

Chequing Account: has a name, a balance and a fee of $1.50 per withdrawal transaction. Every withdrawal transaction will be assessed this flat fee.

Savings Account: has a name, a balance and an interest rate can be applied to the ammount deposited in the account.

Trust account class: has a name, a balance, and an interest rate; it's derived from the Savings Account. The Trust account deposit works just like a savings account deposit. However, any deposits of $5000.00 or more will receive a $50.00 bonus deposited to the account. The withdrawal method only allow 3 withdrawals, and each of these must be less than 20% of the account balance.

I_Printable: it's an Abstract Base Class and all the bank accounts classes are derived from it. The class I_Printable allows the objects to be displayed and the transactions to be shown on the screen.
