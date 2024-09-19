#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data; // Data contained in the node
    Node* next; // Pointer to the next node

    Node(int value) : data(value), next(nullptr) {} // Constructor
};

// Linked List class
class LinkedList {
private:
    Node* head; // Pointer to the head of the list

public:
    LinkedList() : head(nullptr) {} // Constructor

    // Function to add a node at the end of the linked list
    // Mayank (21bds037)
    void addToEnd(int value);

    // Function to add a node in the middle of the linked list
    // Chinmay (21bds014)
    void addToMiddle(int value, int position);

    // Function to delete the last node of the linked list
    // Milind (21bds038)
    void deleteFromEnd();

    // Function to delete a node from the middle of the linked list
    // Rahul Singh (21bds054)
    void deleteFromMiddle(int position);

    // Function to reverse the linked list
    // Saksham (21bds058)
    void reverse();

    // Function to delete all even nodes from the linked list
    // Nikhil (21bds044)
    void deleteAllEvenNodes()
    {
                while (head != nullptr && head->data % 2 == 0) {
            Node* temp = head;
            head = head->next; 
            delete temp; 
        }

        
        Node* current = head;
        while (current != nullptr && current->next != nullptr) {
            if (current->next->data % 2 == 0) {
                
                Node* temp = current->next;
                current->next = current->next->next; 
                delete temp; 
            } else {
                
                current = current->next;
            }
        }
    }

    // Function to delete all odd nodes from the linked list
    // Kartik (21bds025)
    void deleteAllOddNodes();

    // Function to display the linked list
    void display();
};

// Menu function
void menu() {

    // Pranjal (21bds062)
    
    LinkedList list;
    int choice, value, position;

    do {
        cout << "Choose an action:\n";
        cout << "1. Add to End\n";
        cout << "2. Add to Middle\n";
        cout << "3. Delete from End\n";
        cout << "4. Delete from Middle\n";
        cout << "5. Reverse Linked List\n";
        cout << "6. Delete All Even Nodes\n";
        cout << "7. Delete All Odd Nodes\n";
        cout << "8. Display List\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to add to end: ";
                cin >> value;
                list.addToEnd(value); // Add node to end
                break;
            case 2:
                cout << "Enter value and position to add in middle: ";
                cin >> value >> position;
                list.addToMiddle(value, position); // Add node to middle
                break;
            case 3:
                list.deleteFromEnd(); // Delete from end
                break;
            case 4:
                cout << "Enter position to delete from middle: ";
                cin >> position;
                list.deleteFromMiddle(position); // Delete from middle
                break;
            case 5:
                list.reverse(); // Reverse the linked list
                break;
            case 6:
                list.deleteAllEvenNodes(); // Delete all even nodes
                break;
            case 7:
                list.deleteAllOddNodes(); // Delete all odd nodes
                break;
            case 8:
                list.display(); // Display the linked list
                break;
            case 0:
                cout << "Exiting...\n"; // Exit option
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 0);
}

// Main function
int main() {
    menu();
    return 0;
}
