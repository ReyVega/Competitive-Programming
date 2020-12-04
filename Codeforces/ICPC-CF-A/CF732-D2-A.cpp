#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int priceOfShovel = 0,
        coinOfBurles = 0,
        numberOfShovels = 0,
        totalPrice = 0;
    bool flag = true;

    cin >> priceOfShovel >> coinOfBurles;

    totalPrice = priceOfShovel;

    while(flag) {
        if((totalPrice % 10) == 0) {
            numberOfShovels++;
            break;
        } else {
            int priceWithoutBurlesCoin = totalPrice % 10;

            if(priceWithoutBurlesCoin == coinOfBurles) {
                numberOfShovels++;
                break;
            }
            numberOfShovels++;
            totalPrice += priceOfShovel;
        }
    }

    cout << numberOfShovels;
    return 0;
}