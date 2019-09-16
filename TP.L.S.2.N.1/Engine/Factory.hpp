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
#include "Grandfather.hpp"
#include "Grandmother.hpp"

class Factory{
public:
    Base* buildMother(){Base *a = new Mother;return a;};
    Base* buildFather(){Base *a = new Father;return a;};
    Base* buildBrother(){Base *a = new Brother;return a;};
    Base* buildSister(){Base *a = new Sister; return a;}
    Base* buildGrandfather(){Base *a = new Grandfather;return a;};
    Base* buildGrandmother(){Base *a = new Grandmother;return a;};
};
