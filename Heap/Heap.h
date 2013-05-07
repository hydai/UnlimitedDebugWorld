#include <cstring> // use the memcpy()

template <class T>
class Heap
{
    public:
        /****************************************************************************
         * Constructor:
         *      Default capacity is 100, and it's max heap.
         *      If the capacity of input is negative, then by default the capacity
         *      would be 100.
         ****************************************************************************/
        Heap(int capacity = 100, bool isMax = true);
        /****************************************************************************
         * Destructor:
         *      Free the memory allocation.
         ****************************************************************************/
        ~Heap();
        /****************************************************************************
         * Pop:
         *      If the heap is empty, it just does nothing, else throwing the 
         *      biggest or least element in the heap.
         ****************************************************************************/
        void Pop();
        /****************************************************************************
         * Push:
         *      Insert the element to the heap. If the capacity is full, expanding
         *      to 2*capacity.
         ****************************************************************************/
        void Push(T);
        /****************************************************************************
         * Top:
         *      Return the top element. If the heap is empty, it will return 0.
         ****************************************************************************/
        T Top();

    private:
        T* heap;
        int size;
        int max_capacity;
        bool isMaxHeap;
};

#include "Heap.cpp"
