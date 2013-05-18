#include <cstdio>
#include <utility> // pair, make_pair
#include <algorithm> // swap


int main(int argc, char *argv[])
{
    std::pair <int, int> pt1(10, 6);
    std::pair <int, int> pt2;
    pt2 = std::make_pair(-8, -4);

    std::printf("Initial\n");
    std::printf("pt1(x, y) = (%d, %d)\n", pt1.first, pt1.second);
    std::printf("pt2(x, y) = (%d, %d)\n", pt2.first, pt2.second);

    std::printf("\nCall swap function\n");
    std::swap(pt1, pt2);
    std::printf("pt1(x, y) = (%d, %d)\n", pt1.first, pt1.second);
    std::printf("pt2(x, y) = (%d, %d)\n", pt2.first, pt2.second);

    return 0;
}
