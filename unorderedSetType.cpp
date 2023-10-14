#include <iostream>
#include "unorderedSetType.h"

unorderedSetType::unorderedSetType(int size)
        : unorderedArrayListType(size){
}

void unorderedSetType::insertAt(int location, int insertItem){
    int index = unorderedArrayListType::seqSearch(insertItem);
    if (index == -1){
        unorderedArrayListType::insertAt(location, insertItem);
    }else{
        std::cout << insertItem <<" is already in the set.\n";
    }
}

void unorderedSetType::insertEnd(int insertItem){
    int index = unorderedArrayListType::seqSearch(insertItem);
    if ( index == -1){
        unorderedArrayListType::insertEnd(insertItem);
    }else{
        std::cout << insertItem <<" is already in the set.\n";
    }
}

void unorderedSetType::replaceAt(int location, int repItem){
    int index = unorderedArrayListType::seqSearch(repItem);
    if (index == location){
        std::cout << repItem <<" is already in the set.\n";
        return;
    }
    else if(index != -1){
        std::cout << repItem <<" is already in the set.\nOld one is removed.\n";
        unorderedArrayListType::remove(repItem);
    }
    unorderedArrayListType::insertAt(location, repItem);
}

//class unorderedSetType: public unorderedArrayListType
//{
//public:
//    void insertAt(int location, int insertItem);
//    void insertEnd(int insertItem);
//    void replaceAt(int location, int repItem);
//
//    unorderedSetType(int size = 100);
//    //Constructor
//};
