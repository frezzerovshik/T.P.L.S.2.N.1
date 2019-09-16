//
//  Keeper.hpp
//  T.P.L.B.1_2.SEM
//
//  Created by Артем Шарапов on 12/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//
#pragma once
#include "Factory.hpp"
#include "Family_tree.hpp"
#include <fstream>
enum inquiry {_Mother = 1 , _Father , _Brother , _Sister , _Grandfather , _Grandmother};

class Keeper{
    //Массивы указателей на объекты классов, реализуем контейнер
    Base* *container;
    Factory builder;
    Family_tree *tree;
    fstream sheet;
public:
    Keeper();
    Keeper(const Keeper& init);
    ~Keeper();
    int runtime();//Метод-контроллер, вызывается в main
    void addNewObject();//Обрабатывает запрос, создает объект соответствующего класса, сохраняет в оперативной памяти
    void deleteObject();//Удаляет объект из контейнера
    void searchInContainer();//Осуществляет поиск по контейнеру
    void saveOnFile(ofstream &stream);
    void printTree();
    void parsingData();
    void game();
};
