//
//  Father.hpp
//  TP.L.S.2.N.1
//
//  Created by Артем Шарапов on 16/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//
#pragma once
#include "Base.hpp"
class Father : public Base{
    string* kindOf;
public:
    Father();
    Father(const Base& init) : Base(init){};
    ~Father();
    string* getData();
    void setData(string arg);
    bool operator!();
};
