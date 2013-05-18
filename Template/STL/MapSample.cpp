#include <iostream>
#include <map>
#include <string>
#include <utility>

int main(int argc, char *argv[])
{
    std::string StudentName;
    int StudentID;

    std::map <std::string, int> Map;
    std::cin >> StudentName >> StudentID;
    Map.insert( std::pair <std::string, int> (StudentName, StudentID) );
    std::cin >> StudentName >> StudentID;
    Map[StudentName] = StudentID;
    std::cin >> StudentName >> StudentID;
    Map.insert( std::map <std::string, int>::value_type(StudentName, StudentID));

    for (std::map<std::string, int>::iterator 
        i = Map.begin(); 
        i != Map.end(); 
        ++i) {
        std::cout << i->first << " " << i->second << std::endl;
    }
    
    Map.erase(StudentName);
    Map.erase(Map.begin());

    std::cout << Map.begin()->first << " " << Map.begin()->second << std::endl;

    Map.clear();
    return 0;
}

