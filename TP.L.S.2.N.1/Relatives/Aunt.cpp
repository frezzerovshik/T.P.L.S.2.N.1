//
//  Aunt.cpp
//  T.P.L.B.1_2.SEM
//
//  Created by Артем Шарапов on 13/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//

#include "Aunt.hpp"
Aunt::Aunt(){
    kindOf = new string;
    kindOf->append("Mother");
}
Aunt::~Aunt(){
    kindOf->erase();
    delete kindOf;
}
bool Aunt::operator!(){
    if(kindOf == nullptr || kindOf->empty())
        return true;
    else
        return false;
}
