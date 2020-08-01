#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int numberOfOranges = 0,
        maximumSizeOfOrange = 0,
        maximumSizeToDispose = 0,
        orange = 0,
        accumulatedOranges = 0,
        timesDisposed = 0;

    cin >> numberOfOranges >> maximumSizeOfOrange >> maximumSizeToDispose;

    for(int i = 0; i < numberOfOranges; i++) {
        cin >> orange;

        if(orange <= maximumSizeOfOrange) {
            accumulatedOranges += orange;
        }

        if(accumulatedOranges > maximumSizeToDispose) {
            timesDisposed++;
            accumulatedOranges = 0;
        } 
    }
    cout << timesDisposed;
    return 0;
}