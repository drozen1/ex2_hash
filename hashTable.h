//
// Created by Dor on 09/06/2020.
//

#ifndef EX2_HASH_HASHTABLE_H
#define EX2_HASH_HASHTABLE_H

#include "AVL_tree.h"
#include "AVL_types.h"
#include "Doubly_linked_list.h"
#include "math.h"

namespace AVL {

    using namespace AVLUtils;

    template<class T>
    class HashTable{
    private:
        Doubly_Linked_List<T>** table;
        int size_of_array;
        int num_of_members;
        const int alpha_min=5;
        const int alpha_max=7;

    public:
        StatusType addToTable (int member_id);
        StatusType removeFromTable (int member_id);
        StatusType reHash();
        StatusType retrieve_member(int member_id);
    };
    //HashTable();





}








#endif //EX2_HASH_HASHTABLE_H
