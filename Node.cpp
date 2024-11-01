//
// Created by Andrés Torres on 01/11/24.
//

#include "Node.h"

void Node::setData(int data) {
    this->data=data;
}

int Node::getData() {
    return data;
}

void Node::setNext(Node* next) {
    this->next=next;
}
Node* Node::getNext() {
    return next;
}

