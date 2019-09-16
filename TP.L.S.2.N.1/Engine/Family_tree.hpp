//
//  Family_tree.hpp
//  TP.L.S.2.N.1
//
//  Created by Артем Шарапов on 16/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//

#pragma once
#include "Base.hpp"
#include "Node.hpp"
class Family_tree {
    Node *root;
public:
    Family_tree();
    void makeTree(Base* *array);
    void deleteTree();
    ~Family_tree();
};
