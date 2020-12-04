#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n,
        Anton = 0,
        Danik = 0;
    char winner;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> winner;
        (winner == 'A') ? Anton++ : Danik++;
    }

    if(Anton == Danik) {
        cout << "Friendship";
    } else if(Anton > Danik) {
        cout << "Anton";
    } else {
        cout << "Danik";
    }
    return 0;
}