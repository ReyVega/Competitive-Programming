#include<iostream>

using namespace std;

int main() {
    int n = 0,
        input = 0,
        tmp = 0,
        magnets = 1;

    cin >> n;
    cin >> input;

    for(int i = 0; i < (n - 1); i++) {
        cin >> tmp;
        if(input != tmp) {
            input = tmp;
            magnets++;
        }
    }

    cout << magnets;
    return 0;
}