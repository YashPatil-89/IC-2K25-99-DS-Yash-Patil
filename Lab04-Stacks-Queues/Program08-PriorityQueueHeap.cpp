
#include <iostream>
using namespace std;
#define MAX 100

struct Item {
    int data;
    int priority;
};

class PriorityQueue {
    Item heap[MAX];
    int size;
public:
    PriorityQueue() {
        size = 0;
    }
    void enqueue(int value, int p) {
        if (size == MAX) {
            cout << "Priority Queue Overflow!\n";
            return;
        }
        int i = size;
        heap[i].data = value;
        heap[i].priority = p;
        size++;
        while (i > 0) {
            int parent = (i - 1) / 2;

            if (heap[parent].priority >= heap[i].priority)
                break;

            swap(heap[parent], heap[i]);

            i = parent;
        }
        cout << "Element inserted successfully!\n";
    }
    void dequeue() {
        if (size == 0) {
            cout << "Priority Queue Underflow!\n";
            return;
        }
        cout << "Deleted element: "
             << heap[0].data << endl;
        heap[0] = heap[size - 1];
        size--;
        int i = 0;
        while (true) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int largest = i;
            if (left < size &&
                heap[left].priority > heap[largest].priority) {
                largest = left;
            }
            if (right < size &&
                heap[right].priority > heap[largest].priority) {
                largest = right;
            }
            if (largest == i)
                break;
            swap(heap[i], heap[largest]);
            i = largest;
        }
    }
    void display() {
        if (size == 0) {
            cout << "Priority Queue is empty!\n";
            return;
        }

        cout << "\nData\tPriority\n";

        for (int i = 0; i < size; i++) {
            cout << heap[i].data << "\t"
                 << heap[i].priority << endl;
        }
    }
};

int main() {
    PriorityQueue q;
    int choice, value, priority;
    do {
        cout << "\n--- PRIORITY QUEUE USING HEAP ---\n";
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
