#include "adulto.h"
#include <iostream>

using namespace std;

int main(){
    Adulto a;

    a.set_nome("Carlos");
    a.set_sobrenome("Freitas");
    a.set_idade(28);

    
    cout << a.get_nome() << endl
         << a.get_sobrenome() << endl
         << a.get_idade() << endl
         << a.get_nome_completo(a.get_nome(), a.get_sobrenome()) <<
    endl;
}