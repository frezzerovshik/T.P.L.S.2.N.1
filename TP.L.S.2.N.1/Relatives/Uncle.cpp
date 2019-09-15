//
//  Uncle.cpp
//  T.P.L.B.1_2.SEM
//
//  Created by Артем Шарапов on 13/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//

#include "Uncle.hpp"
Uncle::Uncle(){
    kindOf = new string;
    kindOf->append("Mother");
}
Uncle::~Uncle(){
    kindOf->erase();
    delete kindOf;
}
bool Uncle::operator!(){
    if(kindOf == nullptr || kindOf->empty())
        return true;
    else return false;
}
