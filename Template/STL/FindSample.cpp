#include <iostream>
#include <algorithm>
#include <vector>

int main(int argc, char *argv[])
{
    int arr[] = {2, 5, 7, 9, 11, 13, 19, 53, 89, 97};
    std::vector <int> Vector(arr, arr+10);
    std::vector <int> :: iterator iter;
    iter = find(Vector.begin(), Vector.end(), 5);
    if (iter != Vector.end()) {
        std::cout << *iter << std::endl;
    }
    else {
        std::cout << "Data not found" << std::endl;
    }

    iter = find(Vector.begin(), Vector.end(), 100);
    if (iter != Vector.end()) {
        std::cout << *iter << std::endl;
    }
    else {
        std::cout << "Data not found" << std::endl;
    }
    return 0;
}
