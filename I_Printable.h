//
//  I_Printable.h
//  05_bank_account_class
//
//  Created by Andrea Zotelli on 2020-05-26.
//  Copyright © 2020 Andrea Zotelli. All rights reserved.
//

#ifndef I_Printable_h
#define I_Printable_h

#include <iostream>


class I_Printable {
    
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);

public:
    virtual void print(std::ostream &os) const = 0;  // makes it a pure virtual function
    virtual ~I_Printable() = default;  // virtual destructor
};

#endif /* I_Printable_h */
