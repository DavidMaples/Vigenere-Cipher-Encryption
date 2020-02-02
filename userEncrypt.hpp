#include <iostream>
#include <string>

class userEncrypt
{
private:
    
public:
    userEncrypt();
    ~userEncrypt();
    std::string encryptPassword(std::string key, std::string passWord);
    std::string translatePassword(std::string key, std::string passWord);
};


