#pragma once
#include <string>

class Aluno {
private:
    std::string nome;
    //curso 
    std::string codMatricula;
    std::string email;
    std::string telefone;
public:
    Aluno();
    void gerarmatricula();

 
};