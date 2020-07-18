#include<iostream>
#include<string.h>
#include<set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    char gender[101];
    set<char> s;

    cin.getline(gender,101,'\n');

    for(int i = 0; i < strlen(gender); i++) {
        s.insert(gender[i]);
    }

    ((s.size() % 2) == 0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";

    return 0;
}