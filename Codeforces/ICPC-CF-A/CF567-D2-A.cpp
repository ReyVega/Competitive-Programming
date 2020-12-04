#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n = 0,
        input = 0,
        minimum = 0,
        maximum = 0;

    cin >> n;

    vector<int> v (n);

    for(int i = 0; i < n; i++) {
        cin >> input;
        v[i] = input;
    }
    
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            cout << abs(v[1] - v[0]) << " " << abs(v[n - 1] - v[0]) << endl;
        } else if(i == (n - 1)) {
            cout << abs(v[i] - v[i - 1]) << " " << abs(v[i] - v[0]) << endl;
        } else {
            minimum = min(abs(v[i] - v[i - 1]),abs(v[i] - v[i + 1]));
            maximum = max(abs(v[i] - v[0]),abs(v[i] - v[n - 1]));

            cout << minimum << " " << maximum << endl;
        }  
    }
    return 0;
}