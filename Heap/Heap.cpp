template <class T>
Heap<T>::Heap(int capacity, bool isMax) : max_capacity(capacity), isMaxHeap(isMax)
{
    heap = new T[max_capacity+1];
    size = 0;
}

template <class T>
Heap<T>::~Heap()
{
    delete heap;
}

template <class T>
void Heap<T>::Pop()
{
    if (size == 0) {
        return;
    }

    T Last = heap[size--];
    int parent = 1, child = 2;
    if (isMaxHeap) {
        while (child <= size) {
            if (child < size && heap[child] < heap[child+1]) {
                child = child+1;
            }
            if (Last >= heap[child]) {
                break;
            }
            heap[parent] = heap[child];
            parent = child;
            child *= 2;
        }
        heap[parent] = Last;
    }
    else {
        while (child <= size) {
            if (child < size && heap[child] > heap[child+1]) {
                child = child+1;
            }
            if (Last <= heap[child]) {
                break;
            }
            heap[parent] = heap[child];
            parent = child;
            child *= 2;
        }
        heap[parent] = Last;
    }
}

template <class T>
void Heap<T>::Push(T input)
{
    if (size == max_capacity) {
        T *tmp_heap = new T[max_capacity*2+1];
        std::memcpy(tmp_heap, heap, (max_capacity+1)*sizeof(T));
        max_capacity *= 2;
        delete heap;
        heap = tmp_heap;
    }
    int current = ++size;
    if (isMaxHeap) {
        while (current!=1 && heap[current/2]<input) {
            heap[current] = heap[current/2];
            current/=2;
        }
        heap[current] = input;
    }
    else {
        while (current!=1 && heap[current/2]>input) {
            heap[current] = heap[current/2];
            current/=2;
        }
        heap[current] = input;
    }
}

template <class T>
T Heap<T>::Top()
{
    return heap[1];
}
