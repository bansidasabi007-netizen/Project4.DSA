#include <iostream>
using namespace std;

class stack
{   

public:

    virtual void push() = 0;
    virtual void pop() = 0;
    virtual void display() = 0;
    virtual void topelement() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};

class MainStack : public stack
{
private:
 int arr[10];
    int size;
    int top;
public:
        MainStack(int x)
    {
        size = x;
        top = -1;
    };

    bool isEmpty()
    {
        return top == -1;
    };

    bool isFull()
    {
        return top == size - 1;
    }

    void push()
    {
        if (isFull())
        {
            cout << "Stack is Overflow " << endl;
            return;
        }
        int val;
        cout << "Enter The value to be added ";
        cin >> val;
        cout << "Value Added Succesfully " << endl;

        top++;
        arr[top] = val;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is UnderFlow " << endl;
            return;
        }
        top--;
        cout << "Value Popped Succesfully " << endl;
    }

    void display()
    {

        if (isEmpty())
        {
            cout << "Stack is UnderFlow " << endl;
            return;
        }

        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    };

    void topelement()
    {
        if (isEmpty())
        {
            cout << "Stack is UnderFlow " << endl;
            return;
        }

        cout << arr[top] << endl;
    }
};

int main()
{
   MainStack b(10);

    int choice;

    do
    {
        cout << "Stack Program Menu.. " << endl;
        cout << "1. Added The value " << endl;
        cout << "2. Pop The value " << endl;
        cout << "3. Display the top element " << endl;
        cout << "4. Display The value " << endl;
        cout << "5. check if empty" << endl;
        cout << "6. Check if the Stack is Full" << endl;
        cout << "7. Exit the program" << endl;


        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            b.push();
            break;

        case 2:
            b.pop();
            break;
        case 3:
            b.topelement();
            break;

        case 4:
            b.display();
            break;

        case 5:
            b.isEmpty();
            break;

        case 6:
            b.isFull();
            break;

        case 7:
            cout << "Program exited succesfully!";
            break;

        default:
            cout << "Enter The Valid Choice " << endl;
        }
    } while (choice != 7);
};
