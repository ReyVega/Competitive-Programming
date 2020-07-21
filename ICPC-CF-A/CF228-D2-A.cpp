#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int horseShoes[4];
    int numberOfShoesRepeated = 0;

    for(int i = 0; i < 4; i++) {
        cin >> horseShoes[i];
    }

    sort(horseShoes, horseShoes + 4);

    for(int i = 0; i < 3; i++) {
        if(horseShoes[i] == horseShoes[i + 1]) {
            numberOfShoesRepeated++;
        }
    }

    cout << numberOfShoesRepeated;
    return 0;
}