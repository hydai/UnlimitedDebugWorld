#include <cstdio> // printf
#include <algorithm> // sort
#include <stdlib.h> // rand

bool cmp(int a, int b) 
{
    if (a > b) {
        return true;
    }
    return false;
}

int main(int argc, char *argv[])
{
    int arr[10];
    std::printf("Before sort:\n");
    for (int i = 0; i < 10; i++) {
        arr[i] = rand()%100;
        std::printf("%d ", arr[i]);
    }
    putchar(10);

    std::sort(arr, arr+10);

    std::printf("After sort (by default):\n");
    for (int i = 0; i < 10; i++) {
        std::printf("%d ", arr[i]);
    }
    putchar(10);

    std::sort(arr, arr+10, cmp);
    std::printf("After sort (by my compare funciton):\n");
    for (int i = 0; i < 10; i++) {
        std::printf("%d ", arr[i]);
    }
    putchar(10);
    
    
    return 0;
}
