
#include <iostream>
using namespace std;
#define MAX 4

class mst {
    int a[MAX];
    int top1, top2;
    int x;

public:
    mst();
    void push1(int value);
    void pop1();
    void push2(int value);
    void pop2();
    void show1();
    void show2();
};

mst::mst() {
    top1 = -1;
    top2 = MAX;
}

void mst::push1(int value) {
    if (top1 + 1 == top2) {
        cout << "Stack overflow";
    }
    else {
        top1++;
        a[top1] = value;
    }
}

void mst::push2(int value) {
    if (top2 - 1 == top1) {
        cout << "Stack overflow";
    }
    else {
        top2--;
        a[top2] = value;
    }
}

void mst::pop1() {
    if (top1 == -1) {
        cout << "Stack underflow";
    }
    else {
        x = a[top1];
        top1--;
        cout << x << " removed";
    }
}

void mst::pop2() {
    if (top2 == MAX) {
        cout << "Stack underflow";
    }
    else {
        x = a[top2];
        top2++;
        cout << x << " removed";
    }
}

void mst::show1() {
    if (top1 == -1) {
        cout << "Stack1 is empty";
    }
    else {
        for (int i = top1; i >= 0; i--)
            cout << a[i] << " ";
    }
}

void mst::show2() {
    if (top2 == MAX) {
        cout << "Stack2 is empty";
    }
    else {
        for (int i = top2; i < MAX; i++)
            cout << a[i] << " ";
    }
}

int main() {
    mst S;
    int choice, value;
    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1: Push1, 2: Pop1, 3: Show1" << endl;
        cout << "4: Push2, 5: Pop2, 6: Show2" << endl;
        cout << "7: Quit, enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                S.push1(value);
                break;

            case 2:
                S.pop1();
                break;

            case 3:
                S.show1();
                break;

            case 4:
                cout << "Enter value: ";
                cin >> value;
                S.push2(value);
                break;

            case 5:
                S.pop2();
                break;

            case 6:
                S.show2();
                break;

            default:
                cout << "Invalid";
        }
    } while (choice != 7);
    return 0;
}
