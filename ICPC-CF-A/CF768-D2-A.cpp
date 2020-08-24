#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n = 0,
        stewardsHelped = 0;
    
    cin >> n;

    vector<int> v (n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    for(int i = 1; i < n - 1; i++) {
        if(v[0] < v[i] && v[i] < v[v.size() - 1]) {
            stewardsHelped++;
        }
    }

    cout << stewardsHelped;
    return 0;
}