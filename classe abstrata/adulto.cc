#include "adulto.h"

void Adulto::set_idade(const int &idade){
    this->idade = idade;
}
int Adulto::get_idade(){
    return idade;
}

string Adulto::get_nome_completo(string nome, string sobrenome){
    return nome + " " + sobrenome;
}