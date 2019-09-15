//
//  Father.cpp
//  TP.L.S.2.N.1
//
//  Created by Артем Шарапов on 16/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//

#include "Father.hpp"
Father::Father(){
    kindOf = new string;
    kindOf->append("Mother");
}
Father::~Father(){
    kindOf->erase();
    delete kindOf;
}
bool Father::operator!(){
    if(kindOf == nullptr || kindOf->empty())
        return true;
    else
        return false;
}
