#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int Yakko = 0,
        Wakko = 0;

    string probabilities[] = {"1/6","1/3","1/2","2/3","5/6","1/1"};

    cin >> Yakko >> Wakko;
    cout << probabilities[6 - max(Yakko,Wakko)];

    return 0;
}
