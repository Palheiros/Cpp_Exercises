#include<iostream>
#include<iomanip>
#include<climits>

using namespace std;

int main() {

    string nome1, nome2;
    int idade1, idade2;
    double media;

    cout << "Dados da primeira pessoa" <<endl;
    cout << "Nome: ";
    getline (cin, nome1);
    cout << "Idade: ";
    cin >> idade1;

    cout << "Dados da segunda pessoa" <<endl;
    cout << "Nome: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;

    cout << fixed << setprecision(1);
    media = (double)(idade1 + idade2) / 2;

    cout << endl << "A idade media de " << nome1 << " e de " << nome2 << " eh de " << media << " anos.";

return 0;
}
