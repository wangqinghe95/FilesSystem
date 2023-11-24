#include "FileOperation.hpp"
#include <iostream>

// const std::string config_file("./unittest/unittest.json");
const std::string config_file("unittest.json");
int main()
{
    FileOperation CFileOpeartion;
    // int status = CFileOpeartion.createFile("./test/test/file.txt");

    // if(true == status){
    //     std::cout << "createFile successfully " << std::endl;
    // }
    // else {
    //     std::cout << "createFile failure " << std::endl;
    // }

    std::string str_content_config;
    CFileOpeartion.readContentFromFile(str_content_config, config_file);
    std::cout << str_content_config << std::endl;

    return 0;
}