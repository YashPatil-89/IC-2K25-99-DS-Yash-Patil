
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class SinglyLinkedList {
    Node* head;

public:
    SinglyLinkedList() {
        head = NULL;
    }

    void insert(int value, int pos) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (pos < 1) {
            cout << "Invalid position!\n";
            delete newNode;
            return;
        }

        if (pos == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL) {
            cout << "Invalid position!\n";
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;

        cout << "Node inserted successfully!\n";
    }
    
    void deleteNode(int pos) {
        if (head == NULL || pos < 1) {
            cout << "List is empty or invalid position!\n";
            return;
        }

        Node* temp = head;

        if (pos == 1) {
            head = head->next;
            delete temp;
            cout << "Node deleted successfully!\n";
            return;
        }

        Node* prev = NULL;

        for (int i = 1; i < pos && temp != NULL; i++) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid position!\n";
            return;
        }

        prev->next = temp->next;
        delete temp;

        cout << "Node deleted successfully!\n";
    }

    void reverse() {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;

        cout << "List reversed successfully!\n";
    }

    void concatenate(SinglyLinkedList& list2) {
        if (list2.head == NULL) {
            cout << "Second list is empty!\n";
            return;
        }

        if (head == NULL) {
            head = list2.head;
        }
        else {
            Node* temp = head;

            while (temp->next != NULL)
                temp = temp->next;

            temp->next = list2.head;
        }

        list2.head = NULL;

        cout << "Lists concatenated successfully!\n";
    }

    void display() {
        if (head == NULL) {
            cout << "List is empty!\n";
            return;
        }

        Node* temp = head;

        cout << "Linked List: ";

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }

    ~SinglyLinkedList() {
        Node* temp;

        while (head != NULL) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    SinglyLinkedList list1, list2;
    int choice, value, pos;

    do {
        cout << "\n--- SINGLY LINKED LIST MENU ---\n";
        cout << "1. Insert at Position\n";
        cout << "2. Delete at Position\n";
        cout << "3. Reverse List\n";
        cout << "4. Concatenate Two Lists\n";
        cout << "5. Display List\n";
        cout << "6. Display Second List\n";
        cout << "7. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                cout << "Enter position: ";
                cin >> pos;
                list1.insert(value, pos);
                break;

            case 2:
                cout << "Enter position to delete: ";
                cin >> pos;
                list1.deleteNode(pos);
                break;

            case 3:
                list1.reverse();
                break;

            case 4:
                cout << "Enter number of nodes in second list: ";
                cin >> pos;

                for (int i = 1; i <= pos; i++) {
                    cout << "Enter value: ";
                    cin >> value;
                    list2.insert(value, i);
                }

                list1.concatenate(list2);
                break;

            case 5:
                list1.display();
                break;

            case 6:
                list2.display();
                break;

            case 7:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 7);
    return 0;
}
