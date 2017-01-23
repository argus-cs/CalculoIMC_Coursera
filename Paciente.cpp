//
// Created by argus on 17/12/16.
//

#include "Paciente.h"

Paciente::Paciente(double peso, double altura) {
    this->peso = peso;
    this-> altura = altura;
    this->imc = Paciente::CalcIMC(this->peso, this->altura);
}

double Paciente::CalcIMC(double p, double a) {
    return (p/(a*a));
}

string Paciente::Diagnostico() {
    if(this->imc > 40) {
        return "Obesidade grau III (obesidade mórbida)";
    }
    else if(this->imc <= 39.99 && this->imc >= 35 ){
        return "Obesidade grau II";
    }
    else if(this->imc <= 34.99 && this->imc >= 30 ){
        return "Obesidade grau 1";
    }
    else if(this->imc <= 29.99 && this->imc >= 25 ){
        return "Sobrepeso";
    }
    else if(this->imc <= 24.99 && this->imc >= 18.50 ){
        return "Peso normal";
    }
    else if(this->imc <= 18.49 && this->imc >= 17 ){
        return "Baixo peso";
    }
    else if(this->imc <= 16.99 && this->imc >= 16 ){
        return "Baixo peso grave";
    }
    else if(this->imc < 16){
        return "Baixo peso muito grave";
    }
}
