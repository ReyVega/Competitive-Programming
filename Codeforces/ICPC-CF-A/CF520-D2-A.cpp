#include<iostream>
#include<string>
#include<set>

using namespace std;

int main() { 
    ios::sync_with_stdio(false);
	cin.tie(0);
      
    int n = 0;
    string word = "";
    set<int> s;

    cin >> n;
    cin >> word;

    for(int i = 0; i < n; i++) {
        s.insert(tolower(word[i]));
    }

    (s.size() == 26) ? cout << "YES" : cout << "NO";
    return 0;
}