//
//  Mother.cpp
//  T.P.L.B.1_2.SEM
//
//  Created by Артем Шарапов on 13/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//

#include "Mother.hpp"

Mother::Mother(){
    kindOf = new string;
    kindOf->append("Mother");
}
Mother::~Mother(){
    kindOf->erase();
    delete kindOf;
}
bool Mother::operator!(){
    if(kindOf == nullptr || kindOf->empty())
        return true;
    else
        return false;
}
