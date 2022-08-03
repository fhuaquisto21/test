#include <iostream>
#include "BinaryTree.h"

int main() {
    BinaryTree<int> *bt = new BinaryTree<int>(15);
    bt->push(14, nullptr);
    bt->push(16, nullptr);
    bt->print(nullptr, 0);
    return 0;
}