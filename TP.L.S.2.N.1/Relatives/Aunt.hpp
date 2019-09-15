//
//  Aunt.hpp
//  T.P.L.B.1_2.SEM
//
//  Created by Артем Шарапов on 13/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//

#pragma once
#include "Base.hpp"
class Aunt : public Base{
    string* kindOf;
public:
    Aunt();
    Aunt(const Base& init) : Base(init){};
    ~Aunt();
    string* getData();
    void setData(string arg);
    bool operator!();
};
