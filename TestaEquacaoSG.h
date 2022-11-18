#ifndef TESTAEQUACAOSG_H_
#define TESTAEQUACAOSG_H_
#include "equacaosg.h"

class TestaEquacaoSG{
    private:
        EquacaoSG Objeto;
    public:
        void menu();
};

void TestaEquacaoSG::menu(){
    double entrada;
    int flag;
    do{
        try{
            cout << "insira A: ";
            cin >> entrada;
            Objeto.setA(entrada);
            cout << "insira B: ";
            cin >> entrada;
            Objeto.setB(entrada);
            cout << "insira C: ";
            cin >> entrada;
            Objeto.setC(entrada);

            cout << "X1 = " << Objeto.raizes()[0] << endl;
            cout << "X2 = " << Objeto.raizes()[1] << endl;
        }
        catch (string error){
            cout << "Erro: " << error << endl;
        }
        cout << "digite 0 para encerrar\n";
        cin >> flag;
    }while(flag != 0);
}

#endif