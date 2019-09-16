//
//  Node.hpp
//  TP.L.S.2.N.1
//
//  Created by Артем Шарапов on 16/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//

#pragma once
#include "Base.hpp"
typedef struct Node{
    Shell data;
    Node* *kids;
    int numKids;
}Node;
