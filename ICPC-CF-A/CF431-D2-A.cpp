#include<iostream>
#include<string>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

    int strips[4];
    string game;
    int totalCalories = 0;

    for(int i = 0; i < 4; i++) {
        cin >> strips[i];
    }

    cin.ignore();
    getline(cin,game);

    for(int i = 0; i < game.size(); i++) {
        //A manner to parse a char to int is by substracting the char by '0'
        // char a = '2'   int b = a - '0'   int b = 2
        int positionParsed = game[i] - '0';
        totalCalories += strips[positionParsed - 1];
    }

    cout << totalCalories;
    return 0;
}