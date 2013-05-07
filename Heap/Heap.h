template <class T>
class Heap
{
    public:
        Heap(int capacity = 100, bool isMax = true);
        ~Heap();
        T Pop();
        void Insert(T&);
        T Top();
    private:
        T* heap;
        int size;
        int max_capacity;
        bool isMaxHeap;
};

#include "Heap.cpp"
