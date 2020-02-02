#include "userEncrypt.hpp"
#include <algorithm>
#include <stdio.h>

userEncrypt::userEncrypt()
{
}

userEncrypt::~userEncrypt()
{
}

std::string userEncrypt::encryptPassword(std::string key, std::string passWord){
    return translatePassword(key, passWord);
}


std::string userEncrypt::translatePassword(std::string key, std::string passWord){
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string finishedPass;
    unsigned long int passIndex = 0;
    std::transform(key.begin(), key.end(), key.begin(), ::toupper);
    int temp;

    for(char i : passWord){
        temp = alphabet.find(toupper(i));
        if (temp != -1)
        {

            temp += alphabet.find(key[passIndex]);
            temp %= alphabet.size();

            if (isupper(i))
            {
                finishedPass = finishedPass + alphabet[temp];
            }else if (islower(i))
            {
                char tempChar = tolower(alphabet[temp]);
                finishedPass = finishedPass + tempChar;
            }
            
            passIndex += 1;
            if (passIndex == key.size())
            {
                passIndex = 0;
            }
        }else
        {
            finishedPass = finishedPass + i;
        }
    }
    
    return finishedPass;
}