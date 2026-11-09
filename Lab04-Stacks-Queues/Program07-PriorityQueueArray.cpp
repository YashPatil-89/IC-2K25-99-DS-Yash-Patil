#include <iostream>
using namespace std;
#define MAX 5

struct Item {
    int data;
    int priority;
};

class PriorityQueue {
    Item arr[MAX];
    int rear;
public:
    PriorityQueue() {
        rear = -1;
    }
    void enqueue(int value, int p) {
        if (rear == MAX - 1) {
            cout << "Priority Queue Overflow!\n";
            return;
        }
        rear++;
        arr[rear].data = value;
        arr[rear].priority = p;

        cout << "Element inserted successfully!\n";
    }

    void dequeue() {
        if (rear == -1) {
            cout << "Priority Queue Underflow!\n";
            return;
        }

        int pos = 0;

        for (int i = 1; i <= rear; i++) {
            if (arr[i].priority > arr[pos].priority) {
                pos = i;
            }
        }

        cout << "Deleted element: " << arr[pos].data << endl;

        for (int i = pos; i < rear; i++) {
            arr[i] = arr[i + 1];
        }

        rear--;
    }

    void display() {
        if (rear == -1) {
            cout << "Priority Queue is empty!\n";
            return;
        }

        cout << "\nData\tPriority\n";

        for (int i = 0; i <= rear; i++) {
            cout << arr[i].data << "\t"
                 << arr[i].priority << endl;
        }
    }
};

int main() {
    PriorityQueue q;
    int choice, value, priority;
    do {
        cout << "\n--- PRIORITY QUEUE USING ARRAY ---\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;

                cout << "Enter priority: ";
                cin >> priority;

                q.enqueue(value, priority);
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
