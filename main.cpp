#include <iostream>
#include "NUMBERLIST.h"

using namespace std;

int main() {
    const int MAX = 10;
    NUMBERLIST list; // define the numberlist object

    for (int i = 0; i < MAX; ++i) {
        list.insertNode(i);
    }
    cout << "The number of nodes is " << list.numNodes() << endl;
    cout << "Display the list in reverse order: ";
    list.displayBackwards();
    cout << endl;

    return 0;
}