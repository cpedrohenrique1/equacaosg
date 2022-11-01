#ifndef EQUACAOSG_H_
#define EQUACAOSG_H_

class EquacaoSG{
    private:
        int a, b, c;
        double delta();
    public:
        EquacaoSG();
        ~EquacaoSG();
        void setA(int);
        void setB(int);
        void setC(int);
        int getA();
        int getB();
        int getC();
        bool posneg();
        double getX1();
        double getX2();
};



EquacaoSG::EquacaoSG(){
    a = 1;
    b = 2;
    c = 0;
}

EquacaoSG::~EquacaoSG(){
    a = 0;
    b = 0;
    c = 0;
}

void EquacaoSG::setA(int aux){
    a = aux;
}

void EquacaoSG::setB(int aux){
    b = aux;
}

void EquacaoSG::setC(int aux){
    c = aux;
}

int EquacaoSG::getA(){
    return a;
}

int EquacaoSG::getB(){
    return b;
}

int EquacaoSG::getC(){
    return c;
}

double EquacaoSG::delta(){
    return ((b*b) - (4*a*c));
}

bool EquacaoSG::posneg(){
    if (delta() > 0){
        return true;
    }else{
        return false;
    }
}

double EquacaoSG::getX1(){
    return ((-b + sqrt(delta()))/(2*a));
}

double EquacaoSG::getX2(){
    return ((-b - sqrt(delta()))/(2*a));
}

#endif