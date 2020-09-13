#include "pessoa.h"

void Pessoa::set_nome(const string &nome){
    this->nome = nome;
}
string Pessoa::get_nome(){
    return nome;
}

void Pessoa::set_sobrenome(const string &sobrenome){
    this->sobrenome = sobrenome;
}
string Pessoa::get_sobrenome(){
    return sobrenome;
}

Pessoa::~Pessoa(){

}