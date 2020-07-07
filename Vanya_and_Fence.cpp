#include<iostream>

using namespace std;

int main() {
    int n = 0,
        h = 0,
        *friends,
        result = 0;

    cin >> n >> h;

    friends = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> friends[i];
        if(friends[i] > h) {
            result += 2;
        } else {
            result++;
        }
    }
    cout << result;
    delete[] friends;
    return 0;
}