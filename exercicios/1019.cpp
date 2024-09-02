#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int val, H, M, S;
    cin >> val;
    H = lround(val / 3600);
    M = lround(val - (H * 3600)) / 60;
    S = val % 60;
    cout << H << ":" << M << ":" << S << endl;
    return 0;
}