#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n = 0;
    string input;

    cin >> n;

    vector<string> v (n);

    for(int i = 0; i < n; i++) {
        cin >> input;

        if(input.size() > 10) {
            v[i] = input[0] + to_string(input.size() - 2) + input[input.size() - 1];
        } else {
            v[i] = input;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }
    return 0;
}