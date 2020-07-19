#include<iostream>
#include<string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n = 0,
        stonesToBeRemoved = 0;
    string stones;

    cin >> n;
    cin.ignore();
    getline(cin,stones);

    for(int i = 0; i < (n - 1); i++) {
        if(stones[i] == stones[i + 1]) {
            stonesToBeRemoved++;
        }
    }

    cout << stonesToBeRemoved;
    return 0;
}