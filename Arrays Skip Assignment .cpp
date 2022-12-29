#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Enter integer "
             << i+1<< ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++) {
        if (i == 3 || i == 5) {
            continue;
        }
        sum += arr[i];
    }
    cout << "Sum of elements: "
    << sum << endl;
    cout << "Reversed integers: ";
    for (int i = 9; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
