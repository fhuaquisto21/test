#ifndef NODE_H
#define NODE_H

template <class type>
class Node {
    private:
        type value;
        Node *left;
        Node *right;
    public:
        Node(type);
        ~Node();
        void setLeft(Node<type> *);
        void setRight(Node<type> *);
        void setValue(type);
        Node<type> *getLeft();
        Node<type> *getRight();
        type getValue();
};

#include "Node.cpp"

#endif