// Abre um arquivo e limpa o seu conte�do. Um arquivo com texto deve estar na mesma pasta para funcionar.

#include <stdio.h>
#include <fstream>

using namespace std;

int main (){

    //cria o objeto do arquivo
    ofstream meuArquivo;

    //abre o arquivo
    meuArquivo.open("esvaziar.txt");

    //esvazia o arquivo
    meuArquivo << "";

    //fecha o arquivo
    meuArquivo.close();

return 0;
}
