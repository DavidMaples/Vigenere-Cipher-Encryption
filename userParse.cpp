#include "userParse.hpp"
#include "userList.hpp"

#include "hash.hpp"
#include <iostream>
#include <stdlib.h> 
#include <stdio.h> 
#include <fstream>
#include <vector>

userParse::userParse()
{
}


userParse::~userParse()
{
}

/**
 * 
 * Allows for the user to set the input filename
 * @param inFileName - the input filename
 *
*/
void userParse::setInFileName(std::string inFileName){
    this->inFileName = inFileName;
}


/**
 * 
 * Allows for the user to get the input filename
 * @return inFileName - returns the input filename
 *
*/
std::string userParse::getInFileName(){
    return inFileName;
}


/**
 * 
 * Allows for the user to set the ouput filename
 * @param outFileName - the output filename
 *
*/
void userParse::setOutFileName(std::string outFileName){
    this->outFileName = outFileName;
}


/**
 * 
 * Allows for the user to get the output filename
 * @return outFileName - returns the output filename
 *
*/
std::string userParse::getOutFileName(){
    return outFileName;
}


/**
 * 
 * Generates a random lowercase a-z letter
 * @return randomLetter - used in the generatePass() function
 *
*/
char userParse::letterRoll(){
    std::string letterKey = "abcdefghijklmnopqrstuvwxyz";
    int randomNum = rand() % 26;
    char randomLetter = letterKey.at(randomNum);
    return randomLetter;
}


/**
 * 
 * Concatinates randomly generated letters together to form a 9 digit password
 * @return tempPass - a randomly generated 9 digit password
 *
*/
std::string userParse::generatePass(){
    std::string tempPass;
    for (size_t i = 0; tempPass.size() < 9; i++)
    {
        char temp = letterRoll();
        tempPass.push_back(temp);
    }
    return tempPass;
}

/**
 * 
 * Reads the input files data and parses the last names from the file
 * Last name are stored in a userInfo struct, this is kept in a userData vector
 * Random passwords are generated for each name and stored in the userInfo struct
 * Each element of the userInfo vector is output to the specified out file
 * 
*/
void userParse::parsedFile(){

    std::ifstream inFile{inFileName};
    if (!inFile){std::cout<<"Cannot open file."<<std::endl;}

    std::string tempName, tempIn1, tempIn2, tempIn3, tempPass; // tempIN1-3 used to store unnecessary data
    std::vector<userInfo> userData;

    while (inFile>>tempName>>tempIn1>>tempIn2>>tempIn3)
    {
        tempPass = generatePass();
        userData.push_back(userInfo{tempName, tempPass});
    }
    
    
    std::ofstream outFile{outFileName};
    if (!outFile){std::cout<<"Cannot open file."<<std::endl;}

    userInfo temp; //temporary object used to refrence structs


    
    for (size_t i = 0; i < userData.size(); i++)
    {
        temp = userData.at(i);
        outFile <<  temp.userName << " " << temp.userPass << std::endl;
    }
}


