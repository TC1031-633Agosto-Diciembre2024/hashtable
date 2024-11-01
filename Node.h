//
// Created by Andrés Torres on 01/11/24.
//

#ifndef NODE_H
#define NODE_H



class Node {

private:
    int data;
    Node* next;
public:
    Node(int data): data(data), next(nullptr){}
    void setData(int data);
    int getData();
    void setNext(Node* next);
    Node* getNext();
};



#endif //NODE_H
