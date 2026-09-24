//
// Created by sidha on 9/17/2026.
//

#pragma once
#include "node.h"

template <typename T>
class LinkedList {
public:
    Node<T> *head();
    Node<T>* tail;
    int size;

    LinkedList(T *value) {
        Node<T> *temp = new Node<T>(value);
        head = temp;
        tail = temp;
        size = 1;
    }
    LinkedList() {
        head = nullptr;
        size = 0;
    }

    void print() {
        Node<T> *temp1 = head;
        while (temp1 != nullptr) {
            temp1->print();
            temp1 = temp1->next;
        }
    }

    void append(T *value) {
        Node<T> *newnode = new Node<T>(value);
        if (head == nullptr) {
            head = newnode;
            size++;
            return;
        }

        tail->next = newnode;
        tail = tail->next; // tail=newnode
        size++;
    }

    // void delete()
};
