//
// Created by Dor on 07/06/2020.
//

#include <iostream>
#include "hashTable.h"
int main() {

    AVL::HashTable<int>* example= new AVL::HashTable<int>(2);
    example->addToTable(1);
    example->addToTable(2);
    example->addToTable(3);
    example->addToTable(4);
    example->addToTable(5);
    example->addToTable(6);
    example->addToTable(7);
    example->addToTable(8);
    example->addToTable(9);

    example->removeFromTable(1);
    example->removeFromTable(2);
    std::cout <<example->removeFromTable(2)<<  std::endl;;
    example->removeFromTable(3);
    example->removeFromTable(4);
    example->removeFromTable(5);
    example->removeFromTable(6);
    example->removeFromTable(7);


    std::cout <<"d"<<  std::endl;
    delete example;
    return 0;
}
