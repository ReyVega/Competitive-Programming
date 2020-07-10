#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int n = 0,
        Petya = 0,
        Vasya = 0,
        Tonya = 0,
        problems = 0;

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> Petya >> Vasya >> Tonya;
        if ((Petya + Vasya + Tonya) >= 2) {
            problems++;
        }
    }

    cout << problems;
    return 0;
}