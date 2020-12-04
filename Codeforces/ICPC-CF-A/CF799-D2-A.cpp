#include<iostream>
#include<cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n = 0,
        t = 0,
        k = 0,
        d = 0,
        cakesWithOneOven = 0,
        cakesWithTwoOven = 0,
        mins = 1,
        mins2 = 0;

    cin >> n >> t >> k >> d;

    while(true) {
        if(mins % t == 0) {
            cakesWithOneOven += k;
            cakesWithTwoOven += k;
        }

        if(mins >= d) {
            if((mins2 % t == 0) && (mins2 != 0)) {
                cakesWithTwoOven += k;
            }
        }

        if(cakesWithOneOven >= n) {
            cout << "NO";
            break;
        }

        if(cakesWithTwoOven >= n) {
            cout << "YES";
            break;
        }

        if(mins < d) {
            mins++;
        } else {
            mins++;
            mins2++;
        }
    }
    return 0;
}