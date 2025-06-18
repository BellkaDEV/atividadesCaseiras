#include <iostream> 
using namespace std;
#include <iomanip>

int main() {

    const int tamanho = 488;
    double vetor[tamanho];

  vetor[0] = 1;
  vetor[1] = 1;

    for (int i = 2; i < tamanho; i++) 
        vetor[i] = vetor[i - 1] + vetor[i - 2];

    long double antpe = vetor[tamanho - 1]; //ant penultimo
    long double pe = vetor[tamanho - 2]; //penultimo
    long double razAurea = antpe / pe; //razao aurea

    cout << "Sequencia de fib" << endl;

    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    cout << "/////////// ///////////" << endl;
    cout << fixed << setprecision(65);
    cout << "Aproximacao: " << razAurea << endl;

return 0;
}