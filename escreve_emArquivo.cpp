// programa que cria um arquivo externo e escreve algo nele toda vez que � executado
// Ao executar o programa no terminal nada ir� acontecer, por�m sera gerado um arquivo 'entrada.txt' com o texto inserido

#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main (){

    // cria o arquivo de sa�da
    ofstream arquivoDeSaida;

    // abre o arquivo ou o cria caso n�o exista
    arquivoDeSaida.open("entrada.txt", std::ios_base::app);

    // escreve no arquivo toda vez que o programa for executado
    arquivoDeSaida << "Voc� executou o programa e algo foi escrito.\n";

    // fecha o arquivo
    arquivoDeSaida.close();

return 0;
}
