//
// Created by Boran Li on 2/22/17.
//

#ifndef CS2370_ICP12_NUMBERLIST_H
#define CS2370_ICP12_NUMBERLIST_H


class NUMBERLIST {
private:
    struct ListNode { // Structure for the list node
        double value;
        ListNode *next;
    };

    ListNode *head; // List head pointer
    int countNodes(ListNode *) const;

    void showReverse(ListNode *) const;

public:
    NUMBERLIST();

    ~NUMBERLIST();

    void appendNode(double); // Appends a node to the end of the list

    void insertNode(double); // Find the best position to insert the node to the list

    void deleteNode(double);

    void displayList() const;

    int numNodes() const;

    void displayBackwards() const;
};


#endif //CS2370_ICP12_NUMBERLIST_H
