#pragma once
#include <iostream>

class pacote 
{
private:
    std::string prefixo, sufixo, qmrecebeu;
    int codigonum, nAvisorec;
public:
    static int contadorpacotes;
    pacote();
    pacote(std::string codigo, std::string qmrecebeu, int nAvisorec, bool aviso);
    //void listar() const;
};