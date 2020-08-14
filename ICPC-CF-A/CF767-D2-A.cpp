#include<iostream>
#include<vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int n = 0;
    cin >> n;

    vector<int> snacks (n);
    vector<bool> placed (n);

    for(int i = 0; i < n; i++) {
        cin >> snacks[i];
    } 

    int index = n;
    for(int i = 0; i < n; i++) {
        placed[snacks[i]] = true;

        while(0 < index && placed[index]) {
            cout << index-- << " ";
        }
        cout << endl;
    }

    return 0;
}