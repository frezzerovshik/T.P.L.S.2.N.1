//
//  Base.hpp
//  T.P.L.B.1_2.SEM
//
//  Created by Артем Шарапов on 12/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//

#pragma once
#include <iostream>
#include <string>
#include <fstream>
//Commit 14.09.19 - first stage
using namespace std;

class Base{
    string *fullName;
    string *parentInfo;
    string *spouseinfo;
    string *kidsInfo;
    string *birhtDate;
    string *deathDate;
    string *age;
    ofstream log;//Для записи информации о вызовах конструкторов и деструкторов
public:
    Base();
    Base(fstream &init);
    Base(const Base& init);
    ~Base();
    string* getData(string kindOf);
    void setData();
    bool operator!();
    void operator<<(ofstream output);
    void editing();
};

