#include<iostream>
#include<string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    string a,
           b;

    cin >> a;
    cin >> b;
    
    if(a == b) {
        cout << -1;
    } else if(a.size() > b.size()) {
        cout << a.size();
    } else {
        cout << b.size();
    }
    return 0;
}