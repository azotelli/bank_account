//
//  I_Printable.cpp
//  05_bank_account_class
//
//  Created by Andrea Zotelli on 2020-05-27.
//  Copyright © 2020 Andrea Zotelli. All rights reserved.
//

#include <iostream>
#include "I_Printable.h"


std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os);
    return os;
}
