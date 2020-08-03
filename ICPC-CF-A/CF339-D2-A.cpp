#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    string input;
    vector<char> v;
    cin >> input;

    for(int i = 0; i < input.size(); i++) {
        if(isdigit(input[i])) {
            v.push_back(input[i]);
        }
    }

    sort(v.begin(),v.end());

    for(int i = 0; i < v.size(); i++) {
        if(v.size() > i + 1) {
            cout << v[i] << "+";
        } else {
            cout << v[i];
        }
    }
    return 0;
}