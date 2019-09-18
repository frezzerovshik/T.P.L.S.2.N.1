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
            break;
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
int Keeper::runtime(){
    cout<<"I'm runtime method!"<<endl;
    return 0;
}
Base* Keeper::searchInContainer(){
    Base* src = nullptr;
    int criterion = 0;
    cout<<"Выберите критерий поиска: "<<endl<<"1 - ФИО"<<endl<<"2 - Дата рождения"<<endl<<"3 - Дата смерти"<<endl<<"4 - Возраст"<<endl;
    cin>>criterion;
    switch (criterion) {
        case _fullName:{
            string type;
            string enquiry;
            bool flag_success = false;
            type.append("fullName");
            cout<<"Введите фамилию, имя и отчество с заглавной буквы и через пробел. Пример: Иванов Иван Иванович"<<endl;
            cin>>enquiry;
            for(int i = 0;i<sizeof(container)/sizeof(Base*);++i){
                if((container[i]->getData(type))->compare(enquiry)){
                    flag_success = true;
                    return container[i];
                }
                else continue;
            }
            if(flag_success == false)
                cout<<"К сожалению, такой записи нет в базе"<<endl;
            break;
        }
        case _birthDate:{
            string type;
            string enquiry;
            bool flag_success = false;
            type.append("birthDate");
            cout<<"Введите дату рождения в формате дд.мм.гггг . Пример: 16.11.1999"<<endl;
            cin>>enquiry;
            for(int i = 0;i<sizeof(container)/sizeof(Base*);++i){
                if((container[i]->getData(type))->compare(enquiry)){
                    flag_success = true;
                    return container[i];
                }
                else continue;
            }
            if(flag_success == false)
                cout<<"К сожалению, такой записи нет в базе"<<endl;
            break;
        }
        case _deathDate:{
            string type;
            string enquiry;
            bool flag_success = false;
            type.append("deathAge");
            cout<<"Введите дату смерти в формате дд.мм.гггг . Пример: 20.04.2015"<<endl;
            cin>>enquiry;
            for(int i = 0;i<sizeof(container)/sizeof(Base*);++i){
                if((container[i]->getData(type))->compare(enquiry)){
                    flag_success = true;
                    return container[i];
                }
                else continue;
            }
            if(flag_success == false)
                cout<<"К сожалению, такой записи нет в базе"<<endl;
            break;
        }
        case _age:{
            string type;
            string enquiry;
            bool flag_success = false;
            type.append("age");
            cout<<"Введите возраст одним числом. Пример : 21"<<endl;
            cin>>enquiry;
            for(int i = 0;i<sizeof(container)/sizeof(Base*);++i){
                if((container[i]->getData(type))->compare(enquiry)){
                    flag_success = true;
                    return container[i];
                }
                else continue;
            }
            if(flag_success == false)
                cout<<"К сожалению, такой записи нет в базе"<<endl;
            break;
        }
        default:
            break;
    }
    return src;
}
