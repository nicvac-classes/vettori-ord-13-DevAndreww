#include <iostream>

#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
    
    int n, i;

    cout << "Inserisci il numero di cifre?" << endl;
    cin >> n;
    int r[n];

    i = 0;
    while (i < n) {
        r[i] = rand() % (n * 10);
        i = i + 1;
    }
    int j, t;

    i = 0;
    t = 0;
    bool scambio;

    scambio = true;
    while (i <= n - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= n - 2 - i) {
            if (r[j] > r[j + 1]) {
                t = r[j];
                r[j] = r[j + 1];
                r[j] = t;
                scambio = true;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    j = 0;
    while (i < n) {
        if (r[i] % 2 == 0) {
            cout << "Il " << j + 1 << "° numero pari è " << r[i] << "." << endl;
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    j = 0;
    while (i < n) {
        if (r[i] % 2 != 0) {
            cout << "Il " << j + 1 << "° numero dispari è " << r[i] << "." << endl;
            j = j + 1;
        }
        i = i + 1;
    }
    
}
