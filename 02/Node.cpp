#include "Node.h"

template <class type>
Node<type>::Node(type _value) {
    this->value = _value;
    this->left = nullptr;
    this->right = nullptr;
}

template <class type>
Node<type>::~Node() {
    delete this;
}

template <class type>
void Node<type>::setLeft(Node<type> *_node) {
    this->left = _node;
}

template <class type>
void Node<type>::setRight(Node<type> *_node) {
    this->right = _node;
}

template <class type>
void Node<type>::setValue(type _value) {
    this->value = _value;
}

template <class type>
Node<type> *Node<type>::getLeft() {
    return this->left;
}

template <class type>
Node<type> *Node<type>::getRight() {
    return this->right;
}

template <class type>
type Node<type>::getValue() {
    return this->value;
}