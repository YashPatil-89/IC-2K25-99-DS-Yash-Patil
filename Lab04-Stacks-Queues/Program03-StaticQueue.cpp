
#include <iostream>
using namespace std;

#define MAX 5

class Queue {
    int arr[MAX];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow!\n";
        }
        else {
            rear++;
            arr[rear] = value;
            cout << "Element inserted successfully!\n";
        }
    }

    void dequeue() {
        if (front > rear) {
            cout << "Queue Underflow!\n";
        }
        else {
            cout << "Deleted element: " << arr[front] << endl;
            front++;

            if (front > rear) {
                front = 0;
                rear = -1;
            }
        }
    }

    void display() {
        if (front > rear) {
            cout << "Queue is empty!\n";
        }
        else {
            cout << "Queue elements: ";

            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }

            cout << endl;
        }
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n--- STATIC QUEUE MENU ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
