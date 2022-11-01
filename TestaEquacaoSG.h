#ifndef TESTAEQUACAOSG_H_
#define TESTAEQUACAOSG_H_
#include "equacaosg.h"

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
        do{
            cout << "insira A: ";
            cin >> entrada;
            Objeto->setA(entrada);
            cout << "insira B: ";
            cin >> entrada;
            Objeto->setB(entrada);
            cout << "insira C: ";
            cin >> entrada;
            Objeto->setC(entrada);
        }while(Objeto->posneg() == false);
        cout << "X1 " << Objeto->getX1() << "\n";
        cout << "X2 " << Objeto->getX2() << "\n";
        cout << "digite 0 para encerrar\n";
        cin >> flag;
    }while(flag !=0 );
}

#endif