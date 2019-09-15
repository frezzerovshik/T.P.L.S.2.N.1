//
//  Sister.cpp
//  T.P.L.B.1_2.SEM
//
//  Created by Артем Шарапов on 13/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//

#include "Sister.hpp"
Sister::Sister(){
    kindOf = new string;
    kindOf->append("Sister");
}
Sister::~Sister(){
    kindOf->erase();
    delete kindOf;
}
bool Sister::operator!(){
    if(kindOf == nullptr || kindOf->empty())
        return true;
    else return false;
}
