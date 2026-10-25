#include <iostream>
// Emily Capodarco
// Discussion - corrected solution
// 10/25/2026
using namespace std;

int main() {

    int table[2][3];

    table[0][0] = 5;
    table[0][1] = 10;
    table[0][2] = 15;

    table[1][0] = 20;
    table[1][1] = 25;
    table[1][2] = 30;

    cout << table[0][0] << endl;

    table[1][1] = 50;

    return 0;
}
