#include <iostream>
#include "userParse.hpp"
#include "userEncrypt.hpp"
#include "hash.hpp"
#include "userList.hpp"

int main(){

    userParse object;

    object.setInFileName("lastNames.txt");
    object.setOutFileName("encryptedData.txt");
    object.parsedFile();
    
    userEncrypt object1;
    std::string temp;



    hash hash;
    hash.hasher();
    hash.printHash("SMITH");
    hash.printHash("JOHNSON");
    hash.printHash("WILLIAMS");
    hash.printHash("JONES");
    hash.printHash("BROWN");









    return 0;
}