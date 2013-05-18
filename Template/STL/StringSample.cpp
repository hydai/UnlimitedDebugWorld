#include <iostream>
#include <cstdio>
#include <string>

int main(int argc, char *argv[])
{
    // c++ string declare
    std::string str1 = "Hello";
    std::string str2 ("Bye");
    std::string str3;

    // c string declare
    char c_str1[] = "Hello";
    char c_str2[] = "world";
    char *c_str3;

    // use string like c-style
    std::printf("print using []\n");
    for (int i = 0; i < str1.length(); i++) {
        std::printf("%c", str1[i]);
    }
    std::putchar(10);
    std::putchar(10);

    // use string like c++ style (recommend)
    std::printf("print using at()\n");
    for (int i = 0; i < str1.length(); i++) {
        std::printf("%c", str1.at(i));
    }
    std::putchar(10);

    std::putchar(10);
    // string clear
    if (str3.empty()) {
        std::printf("str3 is empty!\n");
    }
    else {
        str3.clear();
        std::printf("str3 is cleared!\n");
    }
    std::putchar(10);
    // string cat
    str3 += c_str1;
    str3 += ' ';
    for (int i = 0; i < 5; i++) {
        str3.push_back(c_str2[i]);
    }
    std::printf("str3 = %s\n", str3.c_str());
    std::putchar(10);

    str3.swap(str2);
    std::printf("After swap, str3 = %s\n", str3.c_str());
    str3 += str1;
    std::printf("Final str3 = %s\n", str3.c_str());

    return 0;
}

