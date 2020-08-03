#include<iostream>
#include<string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n = 0,
        k = 0;
    string password;

    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        password.push_back('a' + (i % k));
    }
    cout << password;
    return 0;
}