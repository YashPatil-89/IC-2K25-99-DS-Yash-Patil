
#include <iostream>
using namespace std;
#define MAX 5

class Deque {
    int arr[MAX];
    int front, rear, count;

public:
    Deque() {
        front = 0;
        rear = -1;
        count = 0;
    }
    void insertFront(int value) {
        if (count == MAX) {
            cout << "Deque Overflow!\n";
            return;
        }

        if (count == 0) {
            front = rear = 0;
        }
        else {
            front = (front - 1 + MAX) % MAX;
        }

        arr[front] = value;
        count++;

        cout << "Element inserted at front!\n";
    }
    void insertRear(int value) {
        if (count == MAX) {
            cout << "Deque Overflow!\n";
            return;
        }

        if (count == 0) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % MAX;
        }

        arr[rear] = value;
        count++;

        cout << "Element inserted at rear!\n";
    }
    void deleteFront() {
        if (count == 0) {
            cout << "Deque Underflow!\n";
            return;
        }

        cout << "Deleted element: " << arr[front] << endl;

        front = (front + 1) % MAX;
        count--;

        if (count == 0) {
            front = 0;
            rear = -1;
        }
    }
    void deleteRear() {
        if (count == 0) {
            cout << "Deque Underflow!\n";
            return;
        }

        cout << "Deleted element: " << arr[rear] << endl;

        rear = (rear - 1 + MAX) % MAX;
        count--;

        if (count == 0) {
            front = 0;
            rear = -1;
        }
    }
    void display() {
        if (count == 0) {
            cout << "Deque is empty!\n";
            return;
        }

        cout << "Deque elements: ";

        for (int i = 0; i < count; i++) {
            cout << arr[(front + i) % MAX] << " ";
        }

        cout << endl;
    }
};

int main() {
    Deque d;
    int choice, value;
    do {
        cout << "\n--- DEQUE MENU ---\n";
        cout << "1. Insert at Front\n";
        cout << "2. Insert at Rear\n";
        cout << "3. Delete from Front\n";
        cout << "4. Delete from Rear\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                d.insertFront(value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                d.insertRear(value);
                break;

            case 3:
                d.deleteFront();
                break;

            case 4:
                d.deleteRear();
                break;

            case 5:
                d.display();
                break;

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 6);
    return 0;
}
