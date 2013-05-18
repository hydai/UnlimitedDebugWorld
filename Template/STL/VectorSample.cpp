#include <cstdio>
#include <stdlib.h>
#include <vector>

int main(int argc, char *argv[])
{
    int arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = std::rand()%100;
    }

    std::vector <int> Vector(arr, arr+10);
    for (std::vector<int>::const_iterator i = Vector.begin(); i != Vector.end(); ++i) {
        std::printf("%d ", *i);
    }
    putchar(10);
    std::printf("The vector's size is %d\n", Vector.size());
    
    
    return 0;
}

