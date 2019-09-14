//
//  Factory.hpp
//  T.P.L.B.1_2.SEM
//
//  Created by Артем Шарапов on 12/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//
#pragma once
#pragma mark - headers
#include "Mother.hpp"
#include "Father.hpp"
#include "Brother.hpp"
#include "Sister.hpp"
#include "Uncle.hpp"
#include "Aunt.hpp"
#include "Grandfather.hpp"
#include "Grandmother.hpp"

class Factory{
public:
    Mother* buildMother();
    Father* buildFather();
    Brother* buildBrother();
    Sister* buildSister();
    Uncle* buildUncle();
    Aunt* buildAunt();
    Grandfather* buildGrandfather();
    Grandmother* buildGrandmother();
};
