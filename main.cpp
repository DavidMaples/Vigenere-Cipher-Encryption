#include <iostream>
#include "userParse.hpp"

int main(){

    userParse object;

    object.setFileName("hello.txt");
    std::cout<<object.getFileName()<<std::endl;

    for (size_t i = 0; i < 100; i++)
    {
        //std::cout<<object.letterRoll()<<std::endl;
        std::cout<<object.generatePass()<<std::endl;
    }
    

    return 0;
}