// B�sico de fun��es. Usamos fun��es quando queremos repetir algo no c�digo sem ter que digitar as mesmas coisas repetidas vezes
// Tem a vantagem de que, se quiser alterar esse trecho, ele ir� refletir em todo o c�digo sem ter que reescrever tudo.

#include <iostream>

using namespace std;

// criando uma fun��o que desenha uma borda: 'void' (a fun��o n�o retorna nada) 'borda' (nome da fun��o) '()' (sem par�metros) {
void borda (){
    cout << ("\n|----------------------------------|\n");
}

int main (){

    //chamando a fun��o:
    borda();

    cout << ("            Hello");
    borda();
    cout << ("            World!");
    borda();

return 0;
}
