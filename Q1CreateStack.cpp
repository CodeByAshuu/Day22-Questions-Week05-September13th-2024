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
            cout << value << " pushed into stack." << endl;
        }
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is Empty" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }

    bool isEmpty() {
        return (top < 0);
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    
    s.display();

    cout << "Top element is: " << s.peek() << endl;
    s.pop(); 
    s.display();

    return 0;
}
