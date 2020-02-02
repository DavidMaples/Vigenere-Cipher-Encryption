#ifndef HASH_HPP_
#define HASH_HPP_
#include "userList.hpp"
#include <iostream>
#include <string>


class hash
{
private:
    const int TABLESIZE = 90001;
    linkedList list[90001];
public:
    hash();
    ~hash();
    int hashFunction(std::string key);
    void printHash(std::string searchName);
    void hasher();
};


#endif