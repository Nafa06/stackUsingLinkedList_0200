#include <iostream>
using namespace std;

// Nodeclass representing a single ndoe in the linked list
class Node{
    public:
    int data;
    Node* next;

    Node(){
        next = NULL;
    }
};