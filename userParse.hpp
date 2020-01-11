#ifndef USERPARSE_HPP_
#define USERPARSE_HPP_

#include <iostream>
#include <string>

class userParse
{
private:
    std::string fileName;
public:
    userParse();
    ~userParse();
    void setFileName(std::string fileName);
    std::string getFileName();
    char letterRoll();
    std::string generatePass();
};



#endif