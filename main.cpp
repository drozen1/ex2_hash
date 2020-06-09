//
// Created by Dor on 07/06/2020.
//

#include <iostream>
#include "hashTable.h"
int main() {

    AVL::HashTable<int> example(2);
    example.addToTable(1);
    example.addToTable(2);
    example.addToTable(3);
    example.removeFromTable(3);
//    example.addToTable(4);
//    example.addToTable(5);
//    example.addToTable(6);
//    example.addToTable(7);
//    example.addToTable(8);

    std::cout <<  std::endl;
}
