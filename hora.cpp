#include<iostream>

using namespace std;

int main() {
    int hora;

    cout << "Digite a hora do dia (0-24):" <<endl;
    cin >> hora;

    if (hora <= 12)
    {
        cout << "Bom dia!";
    } else if (hora > 12 && hora < 18)
    {
        cout << "Boa tarde!";
    } else {
        cout << "Boa noite!";
    }
    return 0;
}
