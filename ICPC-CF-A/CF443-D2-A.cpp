#include<iostream>
#include<set>
#include<string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    string input;
    set<char> s;

    getline(cin,input);
    for(int i = 0; i < input.length(); i++) {
        // isalpha checks if a character is alphabetic
        if(isalpha(input[i])) {
            s.insert(input[i]);
        }
    }

    cout << s.size();
    return 0;
}