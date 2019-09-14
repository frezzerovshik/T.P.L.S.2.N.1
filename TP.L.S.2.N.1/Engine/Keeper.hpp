//
//  Keeper.hpp
//  T.P.L.B.1_2.SEM
//
//  Created by Артем Шарапов on 12/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//
#pragma once
#include "Factory.hpp"
enum inquiry {_Mother = 1 , _Father , _Brother , _Sister , _Uncle , _Aunt , _Grandfather , _Grandmother};

class Keeper{
    //Массивы указателей на объекты классов, реализуем контейнер
    Mother* *mContainer;
    Father* *fContainer;
    Brother* *bContainer;
    Sister* cContainer;
    Uncle* *uContainer;
    Aunt* *aContainer;
    Grandfather* *gfContainer;
    Grandmother* *gmContainer;
    Factory builder;
public:
    int runtime();//Метод-контроллер, вызывается в main
    void addNewObject();//Обрабатывает запрос, создает объект соответствующего класса, сохраняет в оперативной памяти
    void deleteObject();//Удаляет объект из контейнера
    void searchInContainer();//Осуществляет поиск по контейнеру
    void fillFromFile(fstream &stream);
    void saveOnFile(ofstream &stream);
};
