#include <iostream>
using namespace std;
#define SIZE 5

int cq[SIZE], front = -1, rear = -1;

bool isFull() { return (front == 0 && rear == SIZE - 1) || (front == rear + 1); }
bool isEmpty() { return front == -1; }

void enqueue(int x) {
    if (isFull()) {
        cout << "Queue is full\n";
        return;
    }
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    cq[rear] = x;
    cout << x << " enqueued\n";
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }
    cout << cq[front] << " dequeued\n";
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Queue: ";
    int i = front;
    while (true) {
        cout << cq[i] << " ";
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    cout << endl;
}

void peek() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Front element: " << cq[front] << endl;
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