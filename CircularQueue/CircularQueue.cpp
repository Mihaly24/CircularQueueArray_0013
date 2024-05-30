#include <iostream>
using namespace std;

class Queue {
    int FRONT, REAR, max = 5;
    int queue, array[5];

public:
    Queue() {
        FRONT = -1;
        REAR = -1;
    }

    void insert() {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << endl;
    }
};

int main()
{
    
}