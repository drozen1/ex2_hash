//
// Created by Dor on 07/06/2020.
//

#include <iostream>
#include "hashTable.h"
#include "AVL_tree_node.h"
#include "MusicManager.h"
int main() {


   ArtistRegularTreeInfo* x1= new ArtistRegularTreeInfo(1);
    ArtistRegularTreeInfo* x2= new ArtistRegularTreeInfo(2);
    ArtistRegularTreeInfo* x3= new ArtistRegularTreeInfo(3);
    ArtistRegularTreeInfo* x4= new ArtistRegularTreeInfo(4);
    ArtistRegularTreeInfo* x5= new ArtistRegularTreeInfo(5);
    ArtistRegularTreeInfo* x6= new ArtistRegularTreeInfo(6);
    ArtistRegularTreeInfo* x7= new ArtistRegularTreeInfo(7);
    ArtistRegularTreeInfo* x8= new ArtistRegularTreeInfo(8);

    AVL::AVL_tree_node<ArtistRegularTreeInfo> node1=  AVL::AVL_tree_node<ArtistRegularTreeInfo>(x1);
    AVL::AVL_tree_node<ArtistRegularTreeInfo> node2=  AVL::AVL_tree_node<ArtistRegularTreeInfo>(x2);
    AVL::AVL_tree_node<ArtistRegularTreeInfo> node3=  AVL::AVL_tree_node<ArtistRegularTreeInfo>(x3);
    AVL::AVL_tree_node<ArtistRegularTreeInfo> node4=  AVL::AVL_tree_node<ArtistRegularTreeInfo>(x4);
    AVL::AVL_tree_node<ArtistRegularTreeInfo> node5=  AVL::AVL_tree_node<ArtistRegularTreeInfo>(x5);
    AVL::AVL_tree_node<ArtistRegularTreeInfo> node6=  AVL::AVL_tree_node<ArtistRegularTreeInfo>(x6);
    AVL::AVL_tree_node<ArtistRegularTreeInfo> node7=  AVL::AVL_tree_node<ArtistRegularTreeInfo>(x7);
    AVL::AVL_tree_node<ArtistRegularTreeInfo> node8=  AVL::AVL_tree_node<ArtistRegularTreeInfo>(x8);

    AVL::AVL_tree<ArtistRegularTreeInfo> example_tree = AVL::AVL_tree<ArtistRegularTreeInfo>();

    example_tree.insert(node3);
    example_tree.insert(node1);
    example_tree.insert(node2);
    example_tree.insert(node4);
    example_tree.insert(node5);
    example_tree.insert(node6);
    example_tree.insert(node7);
    example_tree.insert(node8);


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
