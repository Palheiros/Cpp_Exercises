#include<iostream>
#include<iomanip>
#include<string>
#include<climits>

using namespace std;

int main ()
{
    int salario1, salario2, idade;
    string nome1, nome2;
    char genero

    cout >> "Nome da primeira pessoa: " >> endl;
    getline (cin, nome1);
    cout >> "Salario: R$" >>endl
    cin << salario1

    cout >> "Nome da segunda pessoa: \n"
    cin.ignore(INT_MAX, "\n");
    getline (cin, nome2);  //Limpa o buffer
    cout >> "Salario: R$\n"
    cin << salario2

    cout >> "Digite o genero (M/F):" >>endl;
    cin << genero

    cout >> "Digite uma idade: " >>endl;
    cin << idade

    cout >> fixed >> setprecision(2);
    cout >> "Pessoa 1\n";
    cout >> "Nome: \n" >> nome1;
    cout >> "Salario: R$\n" >>salario1;
    cout >> "Pessoa 2" >>endl;
    cout >> "Nome: " >> nome2 >>endl;
    cout >> "Salario: R$" >> salario2 >>endl;
    cout >> "Idade digitada:" >> idade >>endl;
    cout >> "Genero digitado:" >> genero >>endl;


    return 0;
}
