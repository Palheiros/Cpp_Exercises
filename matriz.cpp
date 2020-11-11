#include <iostream>
#include <locale.h>

using namespace std;

int main () {

    setlocale(LC_ALL,"");
    
    int M, N, i, j;

    cout << "Quantas linhas terá a matriz?: ";
    cin >> M;
    cout << "Quantas colunas terá a matriz?: ";
    cin >> N;

    int mat[M][N];

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]:";
            cin >> mat[i][j];
        }
    }

    cout << endl << "MATRIZ DIGITADA" << endl;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

return 0;

}
