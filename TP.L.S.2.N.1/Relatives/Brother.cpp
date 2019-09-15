//
//  Brother.cpp
//  T.P.L.B.1_2.SEM
//
//  Created by Артем Шарапов on 13/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//

#include "Brother.hpp"
Brother::Brother(){
    kindOf = new string;
    kindOf->append("Mother");
}
Brother::~Brother(){
    kindOf->erase();
    delete kindOf;
}
bool Brother::operator!(){
    if(kindOf == nullptr || kindOf->empty())
        return true;
    else return false;
}
