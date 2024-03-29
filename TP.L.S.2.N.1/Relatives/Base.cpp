//
//  Base.cpp
//  T.P.L.B.1_2.SEM
//
//  Created by Артем Шарапов on 12/09/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//
//commit 14.09.19 - first stage
#include "Base.hpp"
#include <fstream>
#include <ctime>
#define DICTIONARY_OF_FIELDS string dictionary[7] = {"fullName","parentInfo","spouseInfo","kidsInfo","birthDate","deathDate","age"};
Base::Base(){
    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    fullName = new string;
    parentInfo = new string;
    spouseinfo = new string;
    kidsInfo = new string;
    birhtDate = new string;
    deathDate = new string;
    age = new string;
    cout<<"Log "<<asctime(timeinfo)<<": in file Base_Constructor_Destructor_Log.txt"<<endl;
    log.open("Base_Constructor_Destructor_Log.txt",std::ios::app);
    log<<asctime(timeinfo)<<" - конструктор по умолчанию, вызван, инициализация произошла, память выделена."<<endl;
}
Base::Base(fstream &init){
    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    fullName = new string;
    parentInfo = new string;
    spouseinfo = new string;
    kidsInfo = new string;
    birhtDate = new string;
    deathDate = new string;
    age = new string;
    getline(init , *fullName);
    getline(init , *parentInfo);
    getline(init , *spouseinfo);
    getline(init , *kidsInfo);
    getline(init , *birhtDate);
    getline(init , *deathDate);
    getline(init , *age);
    cout<<"Log "<<asctime(timeinfo)<<": in file Base_Constructor_Destructor_Log.txt"<<endl;
    log.open("Base_Constructor_Destructor_Log.txt",std::ios::app);
    log<<asctime(timeinfo)<<" - конструктор с параметром(чтение данных из файла), вызван, инициализация произошла, память выделена."<<endl;
}
Base::Base(const Base& init){
    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    fullName = new string;
    parentInfo = new string;
    spouseinfo = new string;
    kidsInfo = new string;
    birhtDate = new string;
    deathDate = new string;
    age = new string;
    *fullName = *(init.fullName);
    *parentInfo = *(init.parentInfo);
    *spouseinfo = *(init.spouseinfo);
    *kidsInfo = *(init.kidsInfo);
    *birhtDate = *(init.birhtDate);
    *deathDate = *(init.deathDate);
    *age = *(init.age);
    cout<<"Log "<<asctime(timeinfo)<<": in file Base_Constructor_Destructor_Log.txt"<<endl;
    log.open("Base_Constructor_Destructor_Log.txt",std::ios::app);
    log<<asctime(timeinfo)<<" - конструктор копирования, вызван, копия создана."<<endl;
}
Base::~Base(){
    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    delete fullName;
    delete parentInfo;
    delete spouseinfo;
    delete kidsInfo;
    delete birhtDate;
    delete deathDate;
    delete age;
    cout<<"Log "<<asctime(timeinfo)<<": in file Base_Constructor_Destructor_Log.txt"<<endl;
    log.open("Base_Constructor_Destructor_Log.txt",std::ios::app);
    log<<asctime(timeinfo)<<" - деструктор, вызван, копия создана."<<endl;
}
string* Base::getData(string kindOf){
    DICTIONARY_OF_FIELDS
    string* returnedField = new string;
    for(int i = 0;i<7;++i){
        switch (i) {
            case 1:
                if(kindOf.compare(dictionary[i]))
                    *returnedField = *fullName;
                break;
            case 2:
                if(kindOf.compare(dictionary[i]))
                    *returnedField = *parentInfo;
                break;
            case 3:
                if(kindOf.compare(dictionary[i]))
                    *returnedField = *spouseinfo;
                break;
            case 4:
                if(kindOf.compare(dictionary[i]))
                    *returnedField = *kidsInfo;
                break;
            case 5:
                if(kindOf.compare(dictionary[i]))
                    *returnedField = *birhtDate;
                break;
            case 6:
                if(kindOf.compare(dictionary[i]))
                    *returnedField = *deathDate;
                break;
            case 7:
                if(kindOf.compare(dictionary[i]))
                    *returnedField = *age;
                break;
            default:
                break;
        }
    }
    return returnedField;
}
void Base::setData(){
    string data;
    for(int i = 0;i<7;++i){
        switch (i) {
            case 1:{
                cout<<"Введите полное имя:"<<endl;
                cin>>data;
                    *fullName = data;
                break;
            }
            case 2:{
                cout<<"Введите сведения о родителях:"<<endl;
                cin>>data;
                    *parentInfo = data;
                break;
            }
            case 3:{
                cout<<"Введите сведения о супругах:"<<endl;
                cin>>data;
                *spouseinfo = data;
                break;
            }
            case 4:{
                cout<<"Введите сведения о детях:"<<endl;
                cin>>data;
                    *kidsInfo = data;
                break;
            }
            case 5:{
                cout<<"Введите дату рождения:"<<endl;
                cin>>data;
                    *birhtDate = data;
                break;
            }
            case 6:{
                cout<<"Введите дату смерти (если есть):"<<endl;
                cin>>data;
                    *deathDate = data;
                break;
            }
            case 7:{
                cout<<"Введите возраст:"<<endl;
                cin>>data;
                    *age = data;
                break;
            }
            default:
                break;
        }
    }
}
bool Base::operator!(){
    if((fullName->empty()||parentInfo->empty()||spouseinfo->empty()||kidsInfo->empty()||birhtDate->empty()||deathDate->empty()||age->empty())||(fullName==nullptr||parentInfo==nullptr||spouseinfo==nullptr||kidsInfo==nullptr||birhtDate==nullptr||deathDate==nullptr||age==nullptr))
            return false;
    else
        return true;
}
void Base::operator<<(ofstream output){
    output << *fullName;
    output << *parentInfo;
    output << *spouseinfo;
    output << *kidsInfo;
    output << *birhtDate;
    output << *deathDate;
    output << *age;
}
void Base::editing(){
    char inputSwitcher = ' ';
    bool endOfEditing = true;
    
    do{
    cout<<"Какое поле с данными Вы хотите отредактировать?"<<endl<<"1 - ФИО"<<endl<<"2 - Сведения о родителях"<<endl<<"3 - Сведения о супруге"<<endl<<"4 - Сведения о детях"<<endl<<"5 - Дата рождения"<<endl<<"6 - Дата смерти"<<endl<<"7 - Возраст"<<endl;
    cin>>inputSwitcher;
    switch (inputSwitcher) {
        case '1':{
            cout<<"Поле ФИО до редактирования:"<<endl<<*fullName<<endl<<"Введите новые данные:"<<endl;
            cin>>*fullName;
            cout<<"Редактирование прошло успешно!"<<endl;
            break;
        }
        case '2':{
            cout<<"Сведения о родителях до редактирования:"<<endl<<*parentInfo<<endl<<"Введите новые данные:"<<endl;
            cin>>*parentInfo;
            cout<<"Редактирование прошло успешно!"<<endl;
            break;
        }
        case '3':{
            cout<<"Сведения о супруге до редактирования:"<<endl<<*spouseinfo<<endl<<"Введите новые данные:"<<endl;
            cin>>*spouseinfo;
            cout<<"Редактирование прошло успешно!"<<endl;
            break;
        }
        case '4':{
            cout<<"Сведения о детях до редактирования:"<<endl<<*kidsInfo<<endl<<"Введите новые данные:"<<endl;
            cin>>*kidsInfo;
            cout<<"Редактирование прошло успешно!"<<endl;
            break;
        }
        case '5':{
            cout<<"Сведения о дате рождения  до редактирования:"<<endl<<*birhtDate<<endl<<"Введите новые данные:"<<endl;
            cin>>*birhtDate;
            cout<<"Редактирование прошло успешно!"<<endl;
            break;
        }
        case '6':{
            cout<<"Сведения о дате смерти до редактирования:"<<endl<<*deathDate<<endl<<"Введите новые данные:"<<endl;
            cin>>*deathDate;
            cout<<"Редактирование прошло успешно!"<<endl;
            break;
        }
        case '7':{
            cout<<"Возраст до редактирования:"<<endl<<*age<<endl<<"Введите новые данные:"<<endl;
            cin>>*age;
            cout<<"Редактирование прошло успешно!"<<endl;
            break;
        }
        default:
            break;
    }
        cout<<"Хотите отредактировать еще какое-нибудь поле для этого члена семьи? 1 - Да 2 - Нет"<<endl;
        cin>>inputSwitcher;
        inputSwitcher=='1'?endOfEditing=false:endOfEditing=true;
   }while(endOfEditing);
}
