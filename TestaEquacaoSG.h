#ifndef TESTAEQUACAOSG_H_
#define TESTAEQUACAOSG_H_
#include "equacaosg.h"

class TestaEquacaoSG{
    private:
        EquacaoSG Objeto;
    public:
        TestaEquacaoSG();
        ~TestaEquacaoSG();
        void menu();
};

TestaEquacaoSG::TestaEquacaoSG(){
    Objeto.setA(1);
    Objeto.setB(2);
    Objeto.setC(0);
}

TestaEquacaoSG::~TestaEquacaoSG(){
    Objeto.setA(0);
    Objeto.setB(0);
    Objeto.setC(0);
}

void TestaEquacaoSG::menu(){
    double entrada;
    int flag;
    do{
        do{
            do{
                cout << "insira A: ";
                cin >> entrada;
                Objeto.setA(entrada);
            }while (Objeto.setA(entrada) == false);
            cout << "insira B: ";
            cin >> entrada;
            Objeto.setB(entrada);
            cout << "insira C: ";
            cin >> entrada;
            Objeto.setC(entrada);
        }while(Objeto.raizes() == nullptr);
        cout << "X1 = " << Objeto.raizes()[0] << endl;
        cout << "X2 = " << Objeto.raizes()[1] << endl;
        cout << "digite 0 para encerrar\n";
        cin >> flag;
    }while(flag !=0 );
}

#endif