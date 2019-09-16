//
//  Keeper.cpp
//  T.P.L.B.1_2.SEM
//
//  Created by Артем Шарапов on 12/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//

#include "Keeper.hpp"
void Keeper::addNewObject(){
    int inquiry = 0;
    cout<<"Выберите шаблон для описания члена семьи:"<<endl<<"1 - Мать(может являться дочерью)"<<endl<<"2 - Отец(может являться сыном)"<<endl<<"3 - Брат(сын)"<<endl<<"4 - Сестра(дочь)"<<endl<<"5 - Бабушка"<< endl<<"6 - дедушка"<<endl;
    cin>>inquiry;
    switch (inquiry) {
        case _Mother:{
        Base* tmp = builder.buildMother();
            int size = sizeof(container)/sizeof(Base*);
        Base* *tmp_arr = new Base*[size];
            for(int i = 0;i<size;++i)
                tmp_arr[i] = container[i];
            tmp->setData();
            delete[] container;
            container = new Base*[size+1];
            for(int i = 0;i<size;++i)
                container[i] = tmp_arr[i];
            container[size] = tmp;
            delete[] tmp_arr;
            break;
        }
        case _Father:{
            break;
            Base* tmp = builder.buildFather();
            int size = sizeof(container)/sizeof(Base*);
            Base* *tmp_arr = new Base*[size];
            for(int i = 0;i<size;++i)
                tmp_arr[i] = container[i];
            tmp->setData();
            delete[] container;
            container = new Base*[size+1];
            for(int i = 0;i<size;++i)
                container[i] = tmp_arr[i];
            container[size] = tmp;
            delete[] tmp_arr;
        }
        case _Brother:{
            Base* tmp = builder.buildBrother();
            int size = sizeof(container)/sizeof(Base*);
            Base* *tmp_arr = new Base*[size];
            for(int i = 0;i<size;++i)
                tmp_arr[i] = container[i];
            tmp->setData();
            delete[] container;
            container = new Base*[size+1];
            for(int i = 0;i<size;++i)
                container[i] = tmp_arr[i];
            container[size] = tmp;
            delete[] tmp_arr;
            break;
        }
        case _Sister:{
            Base* tmp = builder.buildSister();
            int size = sizeof(container)/sizeof(Base*);
            Base* *tmp_arr = new Base*[size];
            for(int i = 0;i<size;++i)
                tmp_arr[i] = container[i];
            tmp->setData();
            delete[] container;
            container = new Base*[size+1];
            for(int i = 0;i<size;++i)
                container[i] = tmp_arr[i];
            container[size] = tmp;
            delete[] tmp_arr;
            break;
        }
        case _Grandmother:{
            Base* tmp = builder.buildGrandmother();
            int size = sizeof(container)/sizeof(Base*);
            Base* *tmp_arr = new Base*[size];
            for(int i = 0;i<size;++i)
                tmp_arr[i] = container[i];
            tmp->setData();
            delete[] container;
            container = new Base*[size+1];
            for(int i = 0;i<size;++i)
                container[i] = tmp_arr[i];
            container[size] = tmp;
            delete[] tmp_arr;
            break;
        }
        case _Grandfather:{
            Base* tmp = builder.buildGrandfather();
            int size = sizeof(container)/sizeof(Base*);
            Base* *tmp_arr = new Base*[size];
            for(int i = 0;i<size;++i)
                tmp_arr[i] = container[i];
            tmp->setData();
            delete[] container;
            container = new Base*[size+1];
            for(int i = 0;i<size;++i)
                container[i] = tmp_arr[i];
            container[size] = tmp;
            delete[] tmp_arr;
            break;
        }
        default:
            break;
    }
    tree->deleteTree();
    tree->makeTree(container);
}
