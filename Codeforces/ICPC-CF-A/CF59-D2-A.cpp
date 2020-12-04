#include<iostream>
#include<string.h>

using namespace std; 

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    char word[101];
    int upper = 0,
        lower = 0;

    cin.getline(word,101,'\n');

    for(int i = 0; i < strlen(word); i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            upper++;
        } else {
            lower++;
        }
    }

    if(upper == lower) {
        cout << strlwr(word);
    } else if(upper > lower) {
        cout << strupr(word);
    } else  {
        cout << strlwr(word);
    }
    return 0;
}