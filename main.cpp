#include <iostream>
#include <string>
#include "pacote.h"
using namespace std;
pacote pacotes[100];

int main() {

    do {

    string codigo;
    bool aviso;
    cout << "Informe o codigo (ou \"sair\" para encerrar o programa): ";
    cin >> codigo;
   if (codigo == "sair") {
        break;
    }

    cout << "deseja receber aviso de entrega? (1 para sim, 0 para nao): ";
    cin >> aviso;

    if (aviso)
    {
        string qmrecebeu;
        int nAvisorec;
        cout << "Informe o nome de quem recebera o pacote: ";
        cin.ignore();
        getline(cin, qmrecebeu);
        cout << "Informe o numero do aviso que deseja receber: ";
        cin >> nAvisorec;
        pacotes[pacote::contadorpacotes] = pacote(codigo, qmrecebeu, nAvisorec, aviso);

    } else {
        pacotes[pacote::contadorpacotes] = pacote(codigo, "", 0, aviso);
    }
    
    } while (pacote::contadorpacotes < 100);
    cout << "Total de pacotes criados: " << pacote::contadorpacotes << std::endl;
    cout << "Programa encerrado." << std::endl;
    return 0;
}

