//
// Created by Boran Li on 2/22/17.
//

#include "NUMBERLIST.h"
#include <iostream>

using namespace std;

int NUMBERLIST::countNodes(NUMBERLIST::ListNode *nodePtr) const {
    if (nodePtr != nullptr)
        return countNodes(nodePtr->next) + 1;
    else
        return 0;
}

void NUMBERLIST::showReverse(NUMBERLIST::ListNode *nodePtr) const {
    if (nodePtr != nullptr) {
        showReverse(nodePtr->next);
        cout << nodePtr->value << " ";
    } else {

    }
}

NUMBERLIST::NUMBERLIST() {
    head = nullptr;
}

NUMBERLIST::~NUMBERLIST() {
    ListNode *nodePtr, *nextNode;
    nodePtr = head;
    while (nodePtr != nullptr) {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

void NUMBERLIST::appendNode(double e) {
    ListNode *newNode = newNode;
    ListNode *nodePtr;
    newNode->value = e;
    newNode->next = nullptr;
    if (head == nullptr) // if no node in the list
    {
        head = newNode;
        newNode->next = nullptr;
    } else {
        nodePtr = head;
        while (nodePtr->next != nullptr) { // find the last node in the list
            nodePtr = nodePtr->next;
        }
        nodePtr->next = newNode;
    }
}

void NUMBERLIST::insertNode(double e) {
    ListNode *newNode, *nodePtr, *previousNode;
    newNode = new ListNode;
    newNode->value = e;
    if (head == nullptr) {
        head = newNode;
        newNode->next = nullptr;
    } else {
        nodePtr = head;
        previousNode = nullptr;
        // Skip all nodes whose value is less than e
        while (nodePtr != nullptr && nodePtr->value < e) {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        if (previousNode == nullptr) { // if insert to the front of list
            head = newNode;
            newNode->next = nodePtr;
        } else {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}

void NUMBERLIST::deleteNode(double e) {
    ListNode *nodePtr, *previousNode = nullptr;

    if (!head)
        return;
    if (head->value == e) { // check the first node
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    } else {
        nodePtr = head;
        // Skip all nodes whose value is not equal to e
        while (nodePtr != nullptr && nodePtr->value != e) {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        if (nodePtr) {
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
    }
}

void NUMBERLIST::displayList() const {
    ListNode *nodePtr;
    if (head != nullptr) {
        nodePtr = head;
        while (nodePtr != nullptr) {
            cout << nodePtr->value << endl;
            nodePtr = nodePtr->next;
        }
    } else
        cout << "The list is empty!" << endl;

}

int NUMBERLIST::numNodes() const {
    return countNodes(head);
}

void NUMBERLIST::displayBackwards() const {
    return showReverse(head);
}
