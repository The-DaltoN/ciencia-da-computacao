#ifndef ADULTO_H
#define ADULTO_H

#include "pessoa.h"

class Adulto : public Pessoa{
    private:
        int idade;

    public:
        void set_idade(const int &);
        int get_idade();

        string get_nome_completo(string, string);
};
#endif