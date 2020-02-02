#ifndef USERLIST_HPP_
#define USERLIST_HPP_

#include <iostream>
#include <string>


struct node
{
    int key;
    std::string name;
    std::string password;
    node *next;
};

class linkedList
{
private:
    node *head;
    node *tail;
public:
    linkedList();
    ~linkedList();
    void addNode(int key, std::string name, std::string password);
    std::string print(std::string searchName);

};


#endif