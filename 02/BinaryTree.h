#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "Node.h"

template <class type>
class BinaryTree {
    private:
        Node<type> *head;
    public:
        BinaryTree(type);
        ~BinaryTree();
        void push(type, Node<type> *);
        void print(Node<type> *, int);
};

#include "BinaryTree.cpp"

#endif