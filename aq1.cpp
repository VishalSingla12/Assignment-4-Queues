#include <iostream>
using namespace std;
#define SIZE 5

int q[SIZE], front = -1, rear = -1;

bool isFull() { return rear == SIZE - 1; }
bool isEmpty() { return front == -1 || front > rear; }

void enqueue(int x) {
    if (isFull()) {
        cout << "Queue is full\n";
        return;
    }
    if (front == -1) front = 0;
    q[++rear] = x;
    cout << x << " enqueued\n";
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }
    cout << q[front] << " dequeued\n";
    front++;
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Queue: ";
    for (int i = front; i <= rear; i++) cout << q[i] << " ";
    cout << endl;
}

void peek() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Front element: " << q[front] << endl;
}

int main() {
    int ch, x;
    while (true) {
        cout << "\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;
        if (ch == 5) break;
        switch (ch) {
            case 1: 
                cout << "Enter value to enqueue: ";
                cin >> x; 
                enqueue(x); 
                break;
            case 2: 
                dequeue(); 
                break;
            case 3: 
                peek(); 
                break;
            case 4: 
                display(); 
                break;
            default:
                cout << "Invalid choice\n";
        }
    }
    return 0;
}