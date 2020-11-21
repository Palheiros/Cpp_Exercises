#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <locale>
#define TAM 10 // Cria uma constante 'TAM' de valor 10

using namespace std;

int main (){

    setlocale (0,"");

    int vetor [TAM] = {1,23,38,45,52,61,78,87,91,100};
    int valorProcurado, posicao;
    bool valorEncontrado;

    int i;
    for (i = 0; i < TAM; i++){
        cout << "Digite um valor para o vetor: ";
        cin >> vetor[i];
    }

    //Imprime o vetor
    cout << endl;
    for (i = 0; i < TAM; i++){
        cout << vetor[i] << " - ";
    }
    cout << endl;
    cout << endl << "Qual n�mero deseja encontrar? ";
    cin >> valorProcurado;
    cout << endl;

    // Percorre a lista em busca do valor
    for (i = 0; i < TAM; i++){
        if (vetor[i] == valorProcurado){
            valorEncontrado = true;
            posicao = i;
        }
    }

    if (valorEncontrado){
        cout << "O valor foi encontrado na posi��o: " << posicao;
    } else {
        cout << "O valor n�o foi encontrado";
    }


return 0;
}
