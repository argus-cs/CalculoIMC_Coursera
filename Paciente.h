//
// Created by argus on 17/12/16.
//

#ifndef COURSERAOO_PACIENTE_H
#define COURSERAOO_PACIENTE_H

#include <string>

using namespace std;

class Paciente {

protected:
    double imc, peso, altura;
    double CalcIMC(double p, double a);

public:
    Paciente(double peso, double altura);
    string Diagnostico();
};


#endif //COURSERAOO_PACIENTE_H
