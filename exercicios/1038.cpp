#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int cod, qtd;
    double T;
    cin >> cod >> qtd;
    cout << fixed << setprecision(2);
    if (cod == 1) {
        T = qtd * 4.00;
        cout << "Total: R$ " << T << endl;
    }
    if (cod == 2) {
        T = qtd * 4.50;
        cout << "Total: R$ " << T << endl;
    }
    if (cod == 3) {
        T = qtd * 5.00;
        cout << "Total: R$ " << T << endl;
    }
    if (cod == 4) {
        T = qtd * 2.00;
        cout << "Total: R$ " << T << endl;
    }
    if (cod == 5) {
        T = qtd * 1.50;
        cout << "Total: R$ " << T << endl;
    }
    
    return 0;
}