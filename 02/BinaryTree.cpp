#include "BinaryTree.h"

template <class type>
BinaryTree<type>::BinaryTree(type _value) {
    this->head = new Node<type>(_value);
}

template <class type>
BinaryTree<type>::~BinaryTree() {
    delete this->head;
    delete this;
}

template <class type>
void BinaryTree<type>::push(type _value, Node<type> *_current) {
    if (_current == nullptr) {
        _current = this->head;
    }

    if (_current->getValue() > _value) {
        if (_current->getLeft() == nullptr) {
            Node<type> _node = new Node<type>(_value);
            _current->setLeft(_node);
            return;
        } else {
            this->push(_value, _current->getLeft());
        }
    } else {
        if (_current->getRight() == nullptr) {
            Node<type> _node = new Node<type>(_value);
            _current->setRight(_node);
            return;
        } else {
            this->push(_value, _current->getRight());
        }
    }
}

template <class type>
void BinaryTree<type>::print(Node<type> *_current, int _aux) {
    if (_aux == 0) {
        _current = this->head;
    }

    if (_current != nullptr) {
        this->print(_current->getLeft(), 1);
        std::cout << " " << _current->getValue();
        this->print(_current->getRight(), 1);
    }
}