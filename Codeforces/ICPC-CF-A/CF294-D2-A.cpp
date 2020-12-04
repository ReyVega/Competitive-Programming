#include<iostream>

using namespace std;

int main() {
    int numberOfWires = 0,
        shots = 0,
        x = 0,
        y = 0;

    cin >> numberOfWires;
    int *oskols = new int[numberOfWires];

    for(int i = 0; i < numberOfWires; i++) {
        cin >> oskols[i];
    }

    cin >> shots;

    for(int i = 0; i < shots; i++) {
        cin >> x >> y;

        //Next Wire
        oskols[x] += oskols[x - 1] - y;
        //Previous Wire
        oskols[x - 2] += y - 1;
        //Current Wire
        oskols[x - 1] = 0;
    }

    for(int i = 0; i < numberOfWires; i++) {
        cout << oskols[i] << endl;
    }
    return 0;
}