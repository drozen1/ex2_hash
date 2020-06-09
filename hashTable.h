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


    private:
        int size_of_array;
        int num_of_members;
        const int alpha_min=2;
        const int alpha_max=5;


        StatusType addToTable (int member_id);
        StatusType removeFromTable (int member_id);
        StatusType reHash();
        StatusType retrieve_member(int member_id);
        StatusType multiply_size();
        StatusType divide_size();


    public:
        HashTable(int sizeOfArray) : size_of_array(sizeOfArray),num_of_members(0) {
            table= new Doubly_Linked_List<T>*[sizeOfArray];
            for (int i = 0; i <sizeOfArray ; ++i) {
                table[i]= nullptr;
            }
        }

        virtual ~HashTable() {

        }

        int getSizeOfArray() const {
            return size_of_array;
        }

        void setSizeOfArray(int sizeOfArray) {
            size_of_array = sizeOfArray;
        }

        int getNumOfMembers() const {
            return num_of_members;
        }

        void setNumOfMembers(int numOfMembers) {
            num_of_members = numOfMembers;
        }



    };

    template<class T>
    StatusType HashTable<T>::reHash() {

        double alpha= num_of_members/size_of_array;
        if (alpha>alpha_max){

        }
        else{
            if (alpha<alpha_min){

            }
        }
        return INVALID_INPUT;
    }


}








#endif //EX2_HASH_HASHTABLE_H
