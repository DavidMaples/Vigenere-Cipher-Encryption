#ifndef USERPARSE_HPP_
#define USERPARSE_HPP_

#include <iostream>
#include <string>

class userParse
{
private:
    std::string inFileName;
    std::string outFileName;
public:
    userParse();
    ~userParse();
    
    void setInFileName(std::string inFileName);
    std::string getInFileName();
    void setOutFileName(std::string inFileName);
    std::string getOutFileName();

    char letterRoll();
    std::string generatePass();
    void parsedFile();
};

struct userInfo
{
    std::string userName;
    std::string userPass;
};


#endif