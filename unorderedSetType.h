
#ifndef H_unorderedSetType
#define H_unorderedSetType

#include "unorderedArrayListType.h"

class unorderedSetType: public unorderedArrayListType
{
public:
    void insertAt(int location, int insertItem);
    void insertEnd(int insertItem);
    void replaceAt(int location, int repItem);

    unorderedSetType(int size = 100);
    //Constructor
};


#endif
