#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa{
    private:
        string nome;
        string sobrenome;

    public:
        void set_nome(const string &);
        string get_nome();

        void set_sobrenome(const string &);
        string get_sobrenome();

        virtual string get_nome_completo(string, string) = 0;
        virtual ~Pessoa();
};
#endif