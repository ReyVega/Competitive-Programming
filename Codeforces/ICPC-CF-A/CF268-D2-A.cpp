#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int n = 0,
        matchesAsGuest = 0;

    cin >> n;

    int *host = new int[n];
    int *guest = new int[n];


    for(int i = 0; i < n; i++) {
        cin >> host[i] >> guest[i];
    }
   
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(host[i] == guest[j]) {
                matchesAsGuest++;
            }
        }
    }

    cout << matchesAsGuest; 
    delete[] host;
    delete[] guest;
    return 0;
}