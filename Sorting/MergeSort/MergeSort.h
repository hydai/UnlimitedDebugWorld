template <class T>
void Merge(T *Array, T *LeftArray, const int LeftSize, T *RightArray, const int RightSize) {
    int LeftIndex = 0;
    int RightIndex = 0;
    int ArrayIndex = 0;

    while (LeftIndex < LeftSize && RightIndex < RightSize) {
        if (LeftArray[LeftIndex] < RightArray[RightIndex]) {
            Array[ArrayIndex++] = LeftArray[LeftIndex++];
        }
        else {
            Array[ArrayIndex++] = RightArray[RightIndex++];
        }
    }
    while (LeftIndex < LeftSize) {
        Array[ArrayIndex++] = LeftArray[LeftIndex++];
    }
    while (RightIndex < RightSize) {
        Array[ArrayIndex++] = RightArray[RightIndex++];
    }
}
template <class T>
void MergeSort(T *Array, const int ArraySize) {
    if (ArraySize <= 1) {
        return;
    }
    int LeftSize = ArraySize/2;
    int RightSize = ArraySize - LeftSize;
    T LeftArray[LeftSize], RightArray[RightSize];

    for (int i = 0; i < LeftSize; i++) {
        LeftArray[i] = Array[i];
    }
    for (int i = 0; i < RightSize; i++) {
        RightArray[i] = Array[i+LeftSize];
    }
    
    MergeSort(LeftArray, LeftSize);
    MergeSort(RightArray, RightSize);

    Merge(Array, LeftArray, LeftSize, RightArray, RightSize);
}
