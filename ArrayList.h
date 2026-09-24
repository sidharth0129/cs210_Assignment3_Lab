#ifndef UNTITLED1_POINTER_H
#define UNTITLED1_POINTER_H

#endif

#pragma once
#include <iostream>
using namespace std;
// note - video pointers, arraylist, linkedlist implementation + bootcamp
template <typename T>
class ArrayList {
public:
    ArrayList():size(0){}

    void add(T item) { // to front
        if (size >= CAPACITY) {
            cout << "Array is Full" << endl;
            return;
        }

        for (int i = size; i > 0; i--) {
            data[i] = data[i - 1];
        }

        data[0] = item;
        size++;
    }

    void deleteFront() {
        if (size == 0) {
            cout << "Array is empty" << endl;
            return;
        }

        for (int i = 0; i < size - 1; i++) {
            data[i] = data[i + 1];
        }

        size--;
    }

    bool search(T item) {
        if (size == 0) {
            cout << "Array is empty" << endl;
            return false;
        }

        for (int i = 0; i < size; i++) {
            if (data[i] == item) {
                return true;
            }
        }
        return false;
    }

    void printArray() {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " , ";
        }
        cout << endl;
    }

    void addToBack(T item) {
        if (size >= CAPACITY) {
            cout << "Array is Full" << endl;
            return;
        }

        data[size] = item;
        size++;
    }

    void deleteFromBack() {
        if (size == 0) {
            cout << "Array is empty" << endl;
            return;
        }
        size--;
    }

private:
    static const int CAPACITY = 20;
    T data[CAPACITY];
    int size;
};


