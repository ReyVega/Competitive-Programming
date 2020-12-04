#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int n = 0,
        sum = 0,
        numberOfCoins = 0;
    cin >> n;

    vector<int> v (n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    
    int sumTmp = 0;
    for(int i = 0; i < n; i++) {
        if(sumTmp > sum) {
           break; 
        }
        sumTmp += v[i];
        sum -= v[i];
        numberOfCoins++;
    }

    cout << numberOfCoins;
    return 0;
}