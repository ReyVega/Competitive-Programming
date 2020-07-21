#include<iostream>
#include<string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    string stones,
           orders;
    int position = 0;

    cin >> stones;
    cin >> orders;

    for(int i = 0; i < orders.size(); i++) {
        if(stones[position] == orders[i]) {
            position++;
        }
    }
    
    cout << position + 1;
    return 0;
}