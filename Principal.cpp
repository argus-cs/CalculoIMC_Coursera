#include <iostream>
#include "Paciente.h"

using namespace std;

int main(){

    Paciente p1(45.5, 1.73);
    cout << p1.Diagnostico() << endl;

    Paciente p2(65.4, 1.63);
    cout << p2.Diagnostico() << endl;

    Paciente p3(81.5, 1.83);
    cout << p3.Diagnostico() << endl;

    return 0;
}