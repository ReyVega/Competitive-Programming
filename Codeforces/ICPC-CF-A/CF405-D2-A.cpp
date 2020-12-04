#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int columns = 0;

    cin >> columns;
    int *array = new int[columns];

    for(int i = 0; i < columns; i++) {
        cin >> array[i];
    }

    sort(array,array + columns);

    for(int i = 0; i < columns; i++) {
        cout << array[i] << " ";
    }
    delete[] array;
    return 0;
}