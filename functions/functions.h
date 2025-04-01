//
// Created by Yurii Kulakovskyi on 01.04.2025.
//

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void append(Node*& head, int val);
void printList(Node* head);
void removeElements(Node*& head, int target);


#endif //FUNCTIONS_H
