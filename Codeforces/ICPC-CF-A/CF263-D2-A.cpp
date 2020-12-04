#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int movements = 0,
        value = 0,
        indexI = 0,
        indexJ = 0;

    for(int i = 0; i < 25; i++) {
        cin >> value;
        if(value == 1) {
            indexI = i / 5;
            indexJ = i % 5;
            movements = abs(2 - indexI) + abs(2 - indexJ);
        }
    }
    cout << movements;
    return 0;
}