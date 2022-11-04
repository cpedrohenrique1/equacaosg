#ifndef EQUACAOSG_H_
#define EQUACAOSG_H_

class EquacaoSG{
    private:
        double a, b, c;
        double delta()const;
    public:
        EquacaoSG();
        ~EquacaoSG();
        bool setA(double);
        void setB(double);
        void setC(double);
        double getA()const;
        double getB()const;
        double getC()const;
        double *raizes()const;
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

bool EquacaoSG::setA(double aux){
    if (aux == 0){
        return false;
    }
    a = aux;
    return true;
}

void EquacaoSG::setB(double aux){
    b = aux;
}

void EquacaoSG::setC(double aux){
    c = aux;
}

double EquacaoSG::getA()const{
    return a;
}

double EquacaoSG::getB()const{
    return b;
}

double EquacaoSG::getC()const{
    return c;
}

double EquacaoSG::delta()const{
    return ((b*b) - (4*a*c));
}

double *EquacaoSG::raizes()const{
    if (delta() < 0){
        return nullptr;
    }
    double *v = new double[2];
    v[0] = (-b + sqrt(delta()))/(2*a);
    v[1] = (-b - sqrt(delta()))/(2*a);
    return v;
}

#endif