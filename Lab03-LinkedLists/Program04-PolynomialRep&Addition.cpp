#include <iostream>
using namespace std;

struct Node {
    int coeff;
    int exp;
    Node* next;
};

class Polynomial {
    Node* head;

public:
    Polynomial() {
        head = NULL;
    }

    void insertTerm(int c, int e) {
        if (c == 0)
            return;

        Node* newNode = new Node();
        newNode->coeff = c;
        newNode->exp = e;
        newNode->next = NULL;
      
        if (head == NULL || head->exp < e) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        Node* prev = NULL;

        while (temp != NULL && temp->exp > e) {
            prev = temp;
            temp = temp->next;
        }

        if (temp != NULL && temp->exp == e) {
            temp->coeff += c;
            delete newNode;

            if (temp->coeff == 0) {
                if (prev == NULL)
                    head = temp->next;
                else
                    prev->next = temp->next;

                delete temp;
            }
            return;
        }

        newNode->next = temp;

        if (prev == NULL)
            head = newNode;
        else
            prev->next = newNode;
    }

    void create() {
        int n, c, e;

        cout << "Enter number of terms: ";
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << "Enter coefficient: ";
            cin >> c;

            cout << "Enter exponent: ";
            cin >> e;

            insertTerm(c, e);
        }
    }

    void display() {
        if (head == NULL) {
            cout << "0";
            return;
        }

        Node* temp = head;

        while (temp != NULL) {
            if (temp != head && temp->coeff > 0)
                cout << " + ";

            else if (temp != head && temp->coeff < 0)
                cout << " - ";

            int c = temp->coeff;

            if (c < 0)
                c = -c;

            if (temp == head && temp->coeff < 0)
                cout << "-";

            if (temp->exp == 0)
                cout << c;

            else if (temp->exp == 1) {
                if (c != 1)
                    cout << c;
                cout << "x";
            }

            else {
                if (c != 1)
                    cout << c;
                cout << "x^" << temp->exp;
            }

            temp = temp->next;
        }
    }

    Polynomial add(Polynomial& p2) {
        Polynomial result;

        Node* p1 = head;
        Node* q = p2.head;

        while (p1 != NULL && q != NULL) {

            if (p1->exp == q->exp) {
                result.insertTerm(
                    p1->coeff + q->coeff,
                    p1->exp
                );

                p1 = p1->next;
                q = q->next;
            }

            else if (p1->exp > q->exp) {
                result.insertTerm(p1->coeff, p1->exp);
                p1 = p1->next;
            }

            else {
                result.insertTerm(q->coeff, q->exp);
                q = q->next;
            }
        }

        while (p1 != NULL) {
            result.insertTerm(p1->coeff, p1->exp);
            p1 = p1->next;
        }

        while (q != NULL) {
            result.insertTerm(q->coeff, q->exp);
            q = q->next;
        }

        return result;
    }

    ~Polynomial() {
        Node* temp;

        while (head != NULL) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }

    Polynomial(const Polynomial&) = delete;
    Polynomial& operator=(const Polynomial&) = delete;

    Polynomial(Polynomial&& other) noexcept {
        head = other.head;
        other.head = NULL;
    }
};

int main() {
    Polynomial p1, p2, p3;
    int choice;

    do {
        cout << "\n\n--- POLYNOMIAL OPERATIONS ---\n";
        cout << "1. Create First Polynomial\n";
        cout << "2. Create Second Polynomial\n";
        cout << "3. Display First Polynomial\n";
        cout << "4. Display Second Polynomial\n";
        cout << "5. Add Two Polynomials\n";
        cout << "6. Display Resultant Polynomial\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
      
        switch (choice) {
            case 1:
                cout << "\nEnter First Polynomial:\n";
                p1.create();
                break;

            case 2:
                cout << "\nEnter Second Polynomial:\n";
                p2.create();
                break;

            case 3:
                cout << "First Polynomial: ";
                p1.display();
                cout << endl;
                break;

            case 4:
                cout << "Second Polynomial: ";
                p2.display();
                cout << endl;
                break;

            case 5:
                p3 = p1.add(p2);
                cout << "Polynomials added successfully!\n";
                break;

            case 6:
                cout << "Resultant Polynomial: ";
                p3.display();
                cout << endl;
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
