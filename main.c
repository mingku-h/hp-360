#include <stdio.h>
#include <stdlib.h>

int random_max(int d) {
    return random() % d;
}

int main () {
    int poj;
    cin >> poj;
    cout << random_max(poj) << endl;
}