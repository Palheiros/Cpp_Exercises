#include <iostream>
#include<iomanip>

using namespace std;

int main () {

    int N, i;

    cout << "Quantos numeros serao digitados?\n";
    cin >> N;

    double vet[N];

    for (i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << endl << "NUMEROS DIGITADOS" <<endl;
    cout << fixed << setprecision(1);

    for (i = 0; i < N; i++) {
        cout << vet[i] <<endl;
    }

    return 0;
}
