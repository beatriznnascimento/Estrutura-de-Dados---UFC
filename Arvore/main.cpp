#include <iostream>
#include "Tree.h"

int main(){
    Tree emptyTree;
    
    Tree t1(10, emptyTree, emptyTree);
    Tree t1(20, emptyTree, emptyTree);
    Tree t1(2, t1, t2);
}