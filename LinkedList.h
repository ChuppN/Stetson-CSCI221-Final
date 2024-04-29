#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
     LinkedList() : head(nullptr), tail(nullptr) {}

     void insertFront(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }


    void insertBack(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }


    void removeFront() {
        if (isEmpty()) {
            std::cout << "Linked list is empty. Cannot remove from front." << std::endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        if (head == nullptr) {
            tail = nullptr;
        }
    }


    void removeBack() {
        if (isEmpty()) {
            std::cout << "Linked list is empty. Cannot remove from back." << std::endl;
            return;
        }
        if (head == tail) {
            delete head;
            head = tail = nullptr;
            return;
        }
        Node* current = head;
        while (current->next != tail) {
            current = current->next;
        }
        delete tail;
        tail = current;
        tail->next = nullptr;
    }




    bool isEmpty() {
        return head == nullptr;
    }



    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }


};

#endif // LINKEDLIST_H

