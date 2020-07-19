#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n = 0,
        Sereja = 0,
        Dima = 0;

    cin >> n;
    int *array = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int left = 0,
        right = n - 1;
    bool flag = true;

    while(left <= right) {
        if(array[left] <= array[right]) {
            if(flag) {
                Sereja += array[right];
            } else {
                Dima += array[right];
            }
            right--;
        } else {
            if(flag) {
                Sereja += array[left];
            } else {
                Dima += array[left];
            }
            left++;
        }

        (flag) ? flag = false : flag = true;
    }

    cout << Sereja << " " << Dima;
    delete[] array;
    return 0;
}