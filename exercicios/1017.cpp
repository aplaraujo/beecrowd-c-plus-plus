#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double tempo, veloc, dist;
    double litros;
    cin >> tempo >> veloc;
    dist = veloc * tempo;
    cout << setprecision(5);
    litros = dist / 12;
    cout << litros << endl;
    
    return 0;
}