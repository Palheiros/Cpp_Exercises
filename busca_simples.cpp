#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <locale>
#define TAM 10 // Cria uma constante 'TAM' de valor 10

using namespace std;

int main (){

    setlocale (0,"");

    int vetor [TAM];
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
    cout << endl << "Qual número deseja encontrar? ";
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
        cout << "O valor foi encontrado na posição: " << posicao;
    } else {
        cout << "O valor não foi encontrado";
    }


return 0;
}
