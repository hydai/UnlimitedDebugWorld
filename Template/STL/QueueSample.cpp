#include <cstdio>
#include <queue>

int main(int argc, char *argv[])
{
    std::queue <int> Queue;
    for (int i = 0; i < 10; i++) {
        Queue.push(i);
    }

    std::printf("1. front = %d, back = %d, size = %d\n", 
                    Queue.front(), Queue.back(), Queue.size());
    Queue.pop();
    std::printf("2. front = %d, back = %d, size = %d\n", 
                    Queue.front(), Queue.back(), Queue.size());
    
    return 0;
}
