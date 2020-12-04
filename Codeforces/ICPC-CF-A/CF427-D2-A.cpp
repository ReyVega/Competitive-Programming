#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int n = 0,
        untreatedCases = 0,
        polices = 0,
        input = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> input;

        if(input != -1) {
            polices += input;
        } else {
            if(polices == 0) {
                untreatedCases++;
            } else {
                polices--;
            }
        }
    }

    cout << untreatedCases;
    return 0;
}