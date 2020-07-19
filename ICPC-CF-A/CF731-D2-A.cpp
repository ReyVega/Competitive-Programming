#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    string word;
    getline(cin,word);
    int position = 0,
        movements = 0,
        totalMovements = 0;

    for(int i = 0; i < word.size(); i++) {
        /*A manner to transform chars to numbers is by substracting
          them 97 (according to ASCII) then letters should be a = 0, b = 1,
          c = 2, d = 3 ... z = 25
        */
        int index = word[i] - 97;

        movements = abs(index - position);

        if(movements < 13) {
            totalMovements += movements;
        } else {
            totalMovements += 26 - movements;
        }

        position = index;
    }

    cout << totalMovements;
    return 0;
}