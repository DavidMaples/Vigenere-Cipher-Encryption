#include <string>
#include "userList.hpp"


linkedList::linkedList()
{
    head = NULL;
    tail = NULL;
}

linkedList::~linkedList()
{
}

void linkedList::addNode(int key, std::string name, std::string password){
    node *newNode = new node;
    
    newNode->key = key;
    newNode->name = name;
    newNode->password = password;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        newNode = NULL;
    }else
    {
        tail->next = newNode;
        tail = newNode;
    }
}


std::string linkedList::print(std::string searchName){
    node *newNode = new node;
    newNode = head;
    
    while (newNode != NULL)
    {
       std::string temp = newNode->name;
       std::string tempPass = newNode->password;
       if (temp == searchName)
       {
           return tempPass;
       }else
       {
           return "keepGoing";
       }
    }
    
    
}