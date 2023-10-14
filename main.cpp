
//Data:  18 42 78 22 42 5 42 57

#include <iostream>
#include "unorderedSetType.h"

using namespace std;

int main() {
    // std::cout << "Hello, World!" << std::endl;
    unorderedSetType set1(10);

    int input, index;
    for(int i = 0; i < 9; i++){
        cin >> input;
        index  = set1.seqSearch(input);
        if (index == -1){
            set1.insertEnd(input);
        }else{
            set1.remove(input);
        }
    }
    set1.print();

    cin >> input;
    index  = set1.seqSearch(input);
    printf("%d %s\n", input,
           (index != -1)? "is already in the set":
           "is not in intList"
    );

    return 0;
}

// printf("%d is already in the set\n", );
