//
//  Grandmother.cpp
//  T.P.L.B.1_2.SEM
//
//  Created by Артем Шарапов on 13/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//

#include "Grandmother.hpp"
Grandmother::Grandmother(){
    kindOf = new string;
    kindOf->append("Mother");
}
Grandmother::~Grandmother(){
    kindOf->erase();
    delete kindOf;
}
bool Grandmother::operator!(){
    if(kindOf == nullptr || kindOf->empty())
        return true;
    else
        return false;
}
