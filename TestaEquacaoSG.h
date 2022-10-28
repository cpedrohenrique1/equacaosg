#ifndef TESTAEQUACAOSG_H_
#define TESTAEQUACAOSG_H_
#include "EquacaoSG.h"

class TestaEquacaoSG{
    private:
        EquacaoSG *Objeto;
    public:
        TestaEquacaoSG();
        ~TestaEquacaoSG();
        void menu();
};

TestaEquacaoSG::TestaEquacaoSG(){
    Objeto = new EquacaoSG();
}

TestaEquacaoSG::~TestaEquacaoSG(){
    delete Objeto;
}

void TestaEquacaoSG::menu(){
    int entrada;
    int flag;
    do{
        

    }while(flag !=0 );
}

#endif