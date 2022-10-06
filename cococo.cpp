//
// Created by 贾若晖 on 2022/10/2.
//

#include "cococo.h"
#include <iostream>
#include<vector>
using namespace std;


class AbstractDrinking{
public:
    virtual void Boil()=0;
    virtual void Brew()=0;
    virtual void PourInput()=0;
    virtual void PutSomething()=0;
    void Makedrink() {
        Boil();
        Brew();
        PourInput();
        PutSomething();
    }
};


class Coffe:public AbstractDrinking{
public:
    virtual void Boil(){
        cout<<"煮农夫山泉！"<<endl;
    }
    virtual void Brew(){
        cout<<"冲泡咖啡！"<<endl;
    }
    virtual void PourInput(){
        cout<<"将咖啡倒入杯中！"<<endl;
    }
    virtual void PutSomething(){
        cout<<"再放点料！"<<endl;
    }
};


class Doumilk:public AbstractDrinking{
public:
    virtual void Boil(){
        cout<<"先放凉水！"<<endl;
    }
    virtual void Brew(){
        cout<<"放豆奶粉！"<<endl;
    }
    virtual void PourInput(){
        cout<<"将热水倒入杯中！"<<endl;
    }
    virtual void PutSomething(){
        cout<<"筷子搅一搅！"<<endl;
    }
};

void DoBussiness(vector<AbstractDrinking*> drink){
    for(auto it:drink){
        it->Makedrink();
        cout<<"------------"<<endl;
        delete it;
    }
}

void test(){
    vector<AbstractDrinking*> drink;
    drink.push_back(new Coffe);
    drink.push_back(new Doumilk);
    DoBussiness(drink);
}

int main(){
    test();
    return 0;
}
