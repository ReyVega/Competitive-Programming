#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int n = 0,
        h = 0,
        tmp = 0,
        result = 0;

    cin >> n >> h;

    for(int i = 0; i < n; i++) {
        cin >> tmp;
        result = (tmp > h) ? result + 2 : result + 1;
    }
    cout << result;
    return 0;
}