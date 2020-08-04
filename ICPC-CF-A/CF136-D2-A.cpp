#include<iostream>
#include<vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n = 0,
        input = 0;
    
    cin >> n;

    vector<int> v (n);

    for(int i = 0; i < n; i++) {
        cin >> input;
        v[input - 1] = i + 1;
    }

    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}