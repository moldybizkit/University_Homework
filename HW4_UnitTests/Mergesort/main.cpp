#include <iostream>
#include "mergeSort.h"

using namespace std;

int main()
{
    unsigned amount;
    cin >> amount; // String amount

    char** arr = new char*[amount];
    for (unsigned i = 0; i < amount; i++) {
        unsigned l;
        //cout << "Set string size: " << endl;
        cin >> l;
        arr[i] = new char[l + 1];
        cin >> arr[i];
        arr[i][l] = '\0';
    }
    mergeSort(arr, amount);
    for (int i = 0; i < amount; i++) {
        cout << arr[i] << endl;
    }
}
