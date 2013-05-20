#include "MergeSort.h"
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX = 1000;

int main(int argc, char *argv[])
{
    int arr[MAX];
    for (int i = 0; i < MAX; i++) {
        arr[i] = rand()%10000;
        cout << arr[i] << " ";
        if (i % 10 == 0) {
            cout << endl;
        }
    }
    cout << endl;
    MergeSort(arr, MAX);
    for (int i = 0; i < MAX; i++) {
        cout << arr[i] << " ";
        if (i % 10 == 0) {
            cout << endl;
        }
    }
    cout << endl;
    return 0;
}
