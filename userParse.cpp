#include "userParse.hpp"
#include <iostream>
#include <stdlib.h> 
#include <stdio.h> 

userParse::userParse()
{
}

userParse::~userParse()
{
}

void userParse::setFileName(std::string fileName){
    this->fileName = fileName;
}

std::string userParse::getFileName(){
    return fileName;
}

char userParse::letterRoll(){
    std::string letterKey = "abcdefghijklmnopqrstuvwxyz";
    int randomNum = rand() % 26;
    char randomLetter = letterKey.at(randomNum);
    return randomLetter;
}

std::string userParse::generatePass(){
    std::string tempPass;
    for (size_t i = 0; tempPass.size() < 9; i++)
    {
        char temp = letterRoll();
        tempPass.push_back(temp);
    }
    return tempPass;
}