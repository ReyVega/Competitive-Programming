#include<iostream>
#include<string.h>

using namespace std; 

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int numberOfActions = 0,
        kidsDistressed = 0;
    long long iceCreamPacks = 0,
              inputIceCream = 0;
    char inputOperation;

    cin >> numberOfActions >> iceCreamPacks;

    for(int i = 0; i < numberOfActions; i++) {
        cin >> inputOperation >> inputIceCream; 

        if(inputOperation == '+') {
            iceCreamPacks += inputIceCream;
        } else {
            if(iceCreamPacks - inputIceCream >= 0) {
                iceCreamPacks -= inputIceCream;
            } else {
                kidsDistressed++;
            }
        }
    }
    cout << iceCreamPacks << " " << kidsDistressed;
    return 0;
}
