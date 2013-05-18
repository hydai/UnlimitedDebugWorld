#include <cstdio>
#include <algorithm>

int main(int argc, char *argv[])
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    for (int i = 0; i < 10; i++) {
        std::printf("%d ", arr[i]);
    }
    std::putchar(10);

    std::printf("1 appears %d time(s)\n", std::count(arr, arr+10, 1));
    std::printf("2 appears %d time(s)\n", std::count(arr, arr+10, 2));
    std::printf("3 appears %d time(s)\n", std::count(arr, arr+10, 3));
    std::printf("4 appears %d time(s)\n", std::count(arr, arr+10, 4));
    
    return 0;
}
