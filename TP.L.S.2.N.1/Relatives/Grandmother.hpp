//
//  Grandmother.hpp
//  T.P.L.B.1_2.SEM
//
//  Created by Артем Шарапов on 13/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//

#pragma once
#include "Base.hpp"
class Grandmother : public Base{
    string* kindOf;
public:
    Grandmother();
    Grandmother(const Base& init) : Base(init){};
    ~Grandmother();
    string* getData();
    void setData(string arg);
    bool operator!();
};
