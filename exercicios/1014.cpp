#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double X, Y, consumo;

    cin >> X >> Y;
    cout << setprecision(5);
    consumo = X / Y;
    cout << consumo << " km/l" << endl;
    
    return 0;
}