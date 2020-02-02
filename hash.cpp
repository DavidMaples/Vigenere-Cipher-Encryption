#include <string>
#include "userList.hpp"
#include "hash.hpp"
#include "userParse.hpp"
#include <fstream>



int hash::hashFunction(std::string key){
   int total = 0;

    for (size_t i = 0; i < key.length(); i++)
    {
        total = 13 * total + key[i];
    }

    total %= TABLESIZE;

    if (total < 0)
    {
        total += TABLESIZE;
    }
    
    return total;
}

hash::~hash()
{
}

hash::hash()
{


    
    
}

void hash::printHash(std::string searchName){
    
    
    
    for (int i = 0; i < TABLESIZE; i++)
    {
        std::string temp = list[i].print(searchName);
        
        if (temp != "keepGoing")
        {
            std::cout<<temp<<std::endl;
        }
        
    }
    
    

}

void hash::hasher(){

    std::ifstream inFile{"encryptedData.txt"};
    if (!inFile){std::cout<<"Cannot open file."<<std::endl;}
    hash temp;
    int temp54;
    std::string tempName, tempPass;
    while (!inFile.eof())
    {
        inFile>>tempName>>tempPass;
        temp54 = temp.hashFunction(tempPass);
        //std::cout<<temp54<<std::endl;
        list[temp54].addNode(temp54, tempName, tempPass);
    }
    
    /*


    while (inFile>>tempName>>tempPass)
    {
        
        //temp54 = temp.hashFunction(tempPass);
        std::cout<<tempName<<std::endl;
    }
    */
  
  // list[0].addNode(0, "davd", "maples");
}

