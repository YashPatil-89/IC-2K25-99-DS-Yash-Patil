
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class CircularLinkedList {
    Node* head;

public:
    CircularLinkedList() {
        head = NULL;
    }

    void insert(int value, int pos) {
        if (pos < 1) {
            cout << "Invalid position!\n";
            return;
        }

        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            if (pos != 1) {
                cout << "Invalid position!\n";
                delete newNode;
                return;
            }

            head = newNode;
            newNode->next = head;

            cout << "Node inserted successfully!\n";
            return;
        }

        if (pos == 1) {
            Node* temp = head;

            while (temp->next != head)
                temp = temp->next;

            newNode->next = head;
            temp->next = newNode;
            head = newNode;

            cout << "Node inserted successfully!\n";
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp->next != head; i++)
            temp = temp->next;

        if (pos > 1 && temp->next == head && pos != 2) {
            Node* check = head;
            int length = 1;

            while (check->next != head) {
                length++;
                check = check->next;
            }

            if (pos > length + 1) {
                cout << "Invalid position!\n";
                delete newNode;
                return;
            }
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
            if (head->next == head) {
                delete head;
                head = NULL;
            }
            else {
                Node* last = head;

                while (last->next != head)
                    last = last->next;

                head = head->next;
                last->next = head;

                delete temp;
            }

            cout << "Node deleted successfully!\n";
            return;
        }

        Node* prev = NULL;

        for (int i = 1; i < pos && temp->next != head; i++) {
            prev = temp;
            temp = temp->next;
        }

        if (temp->next == head && pos > 1) {
        }
        else if (prev == NULL || temp == head) {
            cout << "Invalid position!\n";
            return;
        }

        if (prev == NULL) {
            cout << "Invalid position!\n";
            return;
        }

        prev->next = temp->next;
        delete temp;

        cout << "Node deleted successfully!\n";
    }

    void reverse() {
        if (head == NULL || head->next == head) {
            cout << "List reversed successfully!\n";
            return;
        }

        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        Node* last = head;

        while (last->next != head)
            last = last->next;

        do {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        } while (curr != head);

        head->next = prev;
        head = prev;

        cout << "List reversed successfully!\n";
    }

    void concatenate(CircularLinkedList& list2) {
        if (list2.head == NULL) {
            cout << "Second list is empty!\n";
            return;
        }

        if (head == NULL) {
            head = list2.head;
            list2.head = NULL;

            cout << "Lists concatenated successfully!\n";
            return;
        }

        Node* last1 = head;
        Node* last2 = list2.head;

        while (last1->next != head)
            last1 = last1->next;

        while (last2->next != list2.head)
            last2 = last2->next;

        last1->next = list2.head;
        last2->next = head;

        list2.head = NULL;

        cout << "Lists concatenated successfully!\n";
    }

    void display() {
        if (head == NULL) {
            cout << "List is empty!\n";
            return;
        }

        Node* temp = head;

        cout << "Circular Linked List: ";

        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << "(Back to Head)\n";
    }

    ~CircularLinkedList() {
        if (head == NULL)
            return;

        Node* temp = head->next;

        while (temp != head) {
            Node* next = temp->next;
            delete temp;
            temp = next;
        }

        delete head;
        head = NULL;
    }
};

int main() {
    CircularLinkedList list1, list2;
    int choice, value, pos;

    do {
        cout << "\n--- CIRCULAR LINKED LIST MENU ---\n";
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
