
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
    Node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    void insert(int value, int pos) {
        if (pos < 1) {
            cout << "Invalid position!\n";
            return;
        }

        Node* newNode = new Node();
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;

        if (pos == 1) {
            newNode->next = head;

            if (head != NULL)
                head->prev = newNode;

            head = newNode;
            cout << "Node inserted successfully!\n";
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
        newNode->prev = temp;

        if (temp->next != NULL)
            temp->next->prev = newNode;

        temp->next = newNode;

        cout << "Node inserted successfully!\n";
    }

    void deleteNode(int pos) {
        if (head == NULL || pos < 1) {
            cout << "List is empty or invalid position!\n";
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL) {
            cout << "Invalid position!\n";
            return;
        }

        if (temp->prev != NULL)
            temp->prev->next = temp->next;
        else
            head = temp->next;

        if (temp->next != NULL)
            temp->next->prev = temp->prev;

        delete temp;

        cout << "Node deleted successfully!\n";
    }

    void reverse() {
        Node* temp = NULL;
        Node* curr = head;

        while (curr != NULL) {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;

            curr = curr->prev;
        }

        if (temp != NULL)
            head = temp->prev;

        cout << "List reversed successfully!\n";
    }

    void concatenate(DoublyLinkedList& list2) {
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
            list2.head->prev = temp;
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

        cout << "Forward List: ";

        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }

    void displayReverse() {
        if (head == NULL) {
            cout << "List is empty!\n";
            return;
        }

        Node* temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        cout << "Backward List: ";

        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }

        cout << "NULL\n";
    }

    ~DoublyLinkedList() {
        Node* temp;

        while (head != NULL) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    DoublyLinkedList list1, list2;
    int choice, value, pos;

    do {
        cout << "\n--- DOUBLY LINKED LIST MENU ---\n";
        cout << "1. Insert at Position\n";
        cout << "2. Delete at Position\n";
        cout << "3. Reverse List\n";
        cout << "4. Concatenate Two Lists\n";
        cout << "5. Display Forward\n";
        cout << "6. Display Backward\n";
        cout << "7. Display Second List\n";
        cout << "8. Exit\n";

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
                list1.displayReverse();
                break;

            case 7:
                list2.display();
                break;

            case 8:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 8);
    return 0;
}
