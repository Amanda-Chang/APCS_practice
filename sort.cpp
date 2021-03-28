#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {4, 5, 8, 3, 7, 1, 2, 6, 10, 9};
    sort(arr, arr+10);
    cout << "sort array by default (increasing):" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
