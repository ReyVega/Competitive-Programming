#include<iostream>
#include<string.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    char string1[101],
         string2[101];

    cin.getline(string1,101,'\n');
    cin.getline(string2,101,'\n');

    if(strcmpi(string1,string2) == 0) {
        cout << 0;
    } else if(strcmpi(string1,string2) > 0) {
        cout << 1;
    } else  {
        cout << -1;
    }

    return 0;
}