#include <iostream>
using namespace std;

#define n 20

class queue
{
    int *arr;
    int front;
    int rear;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        rear = -1;
    }
    ~queue()
    {
        delete[] arr;
    }

    void push(int x)
    {
        if (rear == n - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        rear++;
        arr[rear] = x;

        if (front == -1)
        {
            front++;
        }
    }
    void pop()
    {

        if (front == -1 || front > rear)
        {
            cout << "No elements in queue" << endl;
            return;
        }
        front++;
    }

    int peak()
    {
        if (front == -1 || front > rear)
        {
            cout << "No elements in queue" << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > rear)
        {
            cout << "No elements in queue" << endl;
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.peak() << endl;
    q.pop();

    cout << q.peak() << endl;
    q.pop();

    cout << q.peak() << endl;
    q.pop();

    cout << q.peak() << endl;
    q.pop();

    cout << q.empty() << endl;

    return 0;
}