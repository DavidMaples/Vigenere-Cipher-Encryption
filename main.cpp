#include <iostream>
#include "userParse.hpp"

int main(){

    userParse object;

    object.setInFileName("lastNames.txt");
    object.setOutFileName("testOutFile.txt");
    object.parsedFile();
    

    return 0;
}