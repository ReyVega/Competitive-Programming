#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n = 0,
        input = 0,
        programmers = 0,
        mathemathicians = 0,
        athletes = 0;
    
    vector<int> v1,
                v2,
                v3;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> input;
        if(input == 1) {
            v1.push_back(i + 1);
            programmers++;
        } else if(input == 2) {
            v2.push_back(i + 1);
            mathemathicians++;
        } else {
            v3.push_back(i + 1);
            athletes++;
        }
    }

    int minValue = min(min(programmers,mathemathicians),athletes);

    if(minValue == 0) {
        cout << 0;
    } else {
        cout << minValue << endl;
        for(int i = 0; i < minValue; i++) {
            cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
        }
    }
    return 0;
}