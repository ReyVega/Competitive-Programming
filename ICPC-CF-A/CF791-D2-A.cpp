#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int a = 0,
        b = 0,
        cont = 0;
    
    cin >> a >> b;

    bool flag = true;

    while(flag) {
        cont++;
        a *= 3;
        b *= 2;
        if(a > b) {
            break;
        }
    } 
    cout << cont;
    return 0;
}