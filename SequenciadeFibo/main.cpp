#include <iostream> 
using namespace std;

int main() {

    const int tamanho = 90;
    double vetor[tamanho];

  vetor[0] = 1;
  vetor[1] = 1;

    for (int i = 2; i < tamanho; i++) 
        vetor[i] = vetor[i - 1] + vetor[i - 2];

    long double antpe = vetor[tamanho - 1]; //ant penultimo
    long double pe = vetor[tamanho - 2]; //penultimo
    long double razAurea = pe / antpe; //razao aurea
    cout << "Aproximacao: " << razAurea << endl;

return 0;
}