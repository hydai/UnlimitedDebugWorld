#include <cstdio>
#include <stack>

int main(int argc, char *argv[])
{
    std::stack <int> Stack;

    for (int i = 0; i < 10; i++) {
        Stack.push(i);
    }
    std::printf("1. top = %d, size = %d\n", Stack.top(), Stack.size());
    Stack.pop();
    std::printf("2. top = %d, size = %d\n", Stack.top(), Stack.size());
    
    return 0;
}
