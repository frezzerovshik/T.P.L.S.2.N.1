//
//  Mother.hpp
//  T.P.L.B.1_2.SEM
//
//  Created by Артем Шарапов on 13/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//

#pragma once
#include "Base.hpp"
class Mother : public Base{
    string* kindOf;
public:
    Mother();
    Mother(const Mother& init);
    ~Mother();
    void whoAmI();
    bool operator!();
};