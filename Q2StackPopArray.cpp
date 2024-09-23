#include<iostream>
using namespace std;

#define MAX 100  // Maximum size of the stack

class Stack {
    int top;
    int arr[MAX];

public:
    Stack() { 
        top = -1;
    }

    void push(int value) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow" << endl;
        } else {
            arr[++top] = value;
        }
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return -1;
        } else {
            return arr[top--];
        }
    }

    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;
    int n, value;

    cout << "Enter the number of elements to insert into the stack: ";
    cin >> n;

    cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        s.push(value);
    }
    cout << "Popped values (in reverse order): ";
    while (!s.isEmpty()) {
        cout << s.pop() << " ";
    }
    cout << endl;

    return 0;
}
