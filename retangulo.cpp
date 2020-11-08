#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main () {

double base, altura, area, perimetro, diagonal;

cout << "Digite a base do retangulo: ";
cin >> base;
cout << "Digite a altura do retangulo: ";
cin >> altura;

area = base * altura;
perimetro = 2 * (base + altura);
diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

cout << endl << "Dados do retangulo" << endl;
cout << fixed << setprecision(4);
cout << "Area: " << area <<endl;
cout << "Perimetro: " << perimetro <<endl;
cout << "Diagonal: " << diagonal <<endl;

return 0;
}
