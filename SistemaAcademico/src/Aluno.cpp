#include "Aluno.hpp"
#include <iostream>

Aluno::Aluno() {
        nome = "";
        gerarmatricula();
        email = "";
        telefone = "";
    }

void Aluno::gerarmatricula() 
    {
       for(int i = 0; i < 10; i++) 
        {
            Aluno::codMatricula += std::to_string((rand() % 10)); // Gera um número aleatório de 0 a 9
        }
    }
    
