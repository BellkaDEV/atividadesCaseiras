#include "pacote.h"

int pacote::contadorpacotes = 0;

pacote::pacote() 
{
    prefixo = sufixo = qmrecebeu = "";
    nAvisorec = codigonum = 0;
}

pacote::pacote(std::string codigo, std::string qmrecebeu, int nAvisorec, bool aviso) 
{
    this->qmrecebeu = qmrecebeu;
    this->nAvisorec = nAvisorec;

    if (codigo.length() != 13) 
    {
        std::cout << "Codigo invalido, digite novamente: ";
        std::cin >> codigo;
    } 
    else 
    {
        this->prefixo = codigo.substr(0, 2);
        this->sufixo = codigo.substr(11, 2);
        this->codigonum = std::stoi(codigo.substr(2, 9));
    }
    
    do
    { 
        if(codigo.length() != 13) 
        {
            std::cout << "Codigo invalido, digite novamente: ";
            std::cin >> codigo;
            continue;
        } 
        
        else {
            
            this->prefixo = codigo.substr(0, 2);
            this->sufixo = codigo.substr(11, 2);
            this->codigonum = std::stoi(codigo.substr(2, 9));
             }

            if (aviso) 
            {
                this->nAvisorec=nAvisorec;
                this->qmrecebeu = qmrecebeu;
            } else 
            {
                this->nAvisorec = 0;
                this->qmrecebeu = "";
            }

    } while (codigo.length() != 13);
    contadorpacotes++;
    std::cout << "+1 pacote criado..." << std::endl;
}

/*void pacote::listar() const 
{
    std::cout << "Prefixo: " << prefixo << std::endl;
    std::cout << "Sufixo: " << sufixo << std::endl;
    std::cout << "Codigo numerico: " << codigonum << std::endl;
    if (qmrecebeu.empty() && nAvisorec == NULL) 
    { 
        std::cout << "Nao foi solicitado aviso." << std::endl;

    } else 
    {
        std::cout << "Quem recebeu: " << qmrecebeu << std::endl;
        std::cout << "Numero de avisos recebidos: " << nAvisorec << std::endl;
    }
}*/

