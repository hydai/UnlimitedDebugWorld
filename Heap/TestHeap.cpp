#include <cstdio>
#include "Heap.h"
int main(int argc, char *argv[])
{
    int input;
    bool isMaxHeap = true, isMinHeap = false;
    std::printf("Test MaxHeap\n");
    Heap <int> MaxHeap(50, isMaxHeap);
    for (int i = 0; i < 30; i++) {
        MaxHeap.Push(i*2+3);
    }
    std::printf("Top = %d\n", MaxHeap.Top());
    for (int i = 0; i < 5; i++) {
        MaxHeap.Pop();
        std::printf("Top = %d\n", MaxHeap.Top());
    }
    std::putchar(10);
    std::printf("Test MinHeap\n");
    Heap <int> MinHeap(50, isMinHeap);
    for (int i = 0; i < 30; i++) {
        MinHeap.Push(i*2+3);
    }
    std::printf("Top = %d\n", MinHeap.Top());
    for (int i = 0; i < 5; i++) {
        MinHeap.Pop();
        std::printf("Top = %d\n", MinHeap.Top());
    }
    
    return 0;
}
