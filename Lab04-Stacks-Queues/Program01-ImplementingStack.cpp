
#include <iostream>
using namespace std;
#define SIZE 5

class Stack {
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }
    void push(int value) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow!\n";
        }
        else {
            top++;
            arr[top] = value;
            cout << "Element inserted successfully!\n";
        }
    }
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!\n";
        }
        else {
            cout << "Deleted element: " << arr[top] << endl;
            top--;
        }
    }
    void peek() {
        if (top == -1) {
            cout << "Stack is empty!\n";
        }
        else {
            cout << "Top element: " << arr[top] << endl;
        }
    }
    void display() {
        if (top == -1) {
            cout << "Stack is empty!\n";
        }
        else {
            cout << "Stack elements: ";

            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }

            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;
    do {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.peek();
                break;

            case 4:
                s.display();
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 5);
    return 0;
}
