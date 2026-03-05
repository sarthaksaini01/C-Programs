#include <iostream> 
using namespace std; 
 
struct Node { 
    int data; 
    Node* prev; 
    Node* next; 
}; 
 

 
// Insert at beginning 
void insertAtBeginning(int val) { 
    Node* newNode = new Node (val,nullptr, head); 
    if (head != nullptr) 
        head->prev = newNode; 
    head = newNode; 
} 
 
// Insert at end 
void insertAtEnd(int val) { 
    Node* newNode = new Node (val, nullptr, nullptr); 
    if (head == nullptr) { 
        head = newNode; 
        return; 
    } 
    Node* temp = head; 
    while (temp->next != nullptr) 
        temp = temp->next; 
    temp->next = newNode; 
    newNode->prev = temp; 
} 
 
// Insert at a specific position (1-based index) 
void insertAtPosition(int val, int pos) { 
    if (pos == 1) { 
        insertAtBeginning(val); 
        return; 
    } 
    Node* temp = head; 
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) 
        temp = temp->next; 
    if (temp == nullptr) { 
        cout << "Position out of range\n"; 
        return; 
    } 
    Node* newNode = new Node{val, temp, temp->next}; 
    if (temp->next != nullptr) 
        temp->next->prev = newNode; 
    temp->next = newNode; 
} 
 
// Display list forward 
void display() { 
    Node* temp = head; 
    cout << "NULL <-> "; 
    while (temp != nullptr) { 
        cout << temp->data << " <-> "; 
        temp = temp->next; 
    } 
    cout << "NULL\n"; 
} 
 
int main() { 
    Node* head = nullptr;
	// Adding nodes without using class 
    insertAtBeginning(10);   // 10 
    insertAtEnd(20);         // 10 <-> 20 
    insertAtPosition(15, 2); // 10 <-> 15 <-> 20 
    insertAtBeginning(5);    // 5 <-> 10 <-> 15 <-> 20 
 
    cout << "Doubly Linked List after insertions:\n"; 
    display(); 
 
    return 0; 
} 
