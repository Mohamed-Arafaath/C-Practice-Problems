#include<iostream>
using namespace std;

class StackOverFlow :exception {};
class StackUnderFlow :exception {};

class Stack
{
private:
    int* stk;
    int top = -1;
    int size;
public:
    Stack(int sz)
    {
        size = sz;
        stk = new int[size];
    }

    void push(int x)
    {
        try {
            if (top == size - 1)
                throw StackOverFlow();
            top++;
            stk[top] = x;
        }
        catch (StackOverFlow o)
        {
            cout << "StackOverFlow" << endl;
        }
    }

    int pop()
    {
        try {
            if (top == -1)
                throw StackUnderFlow();
            return stk[top--];
        }
        catch (StackUnderFlow u)
        {
            cout << "StackUnderFlow" << endl;
        }
    }

};

int main()
{
    Stack s(5);

    /*s.push(2);
    s.push(3);
    s.push(4);
    s.push(10);
    s.push(9);
    s.push(8);*/
    s.pop();
   

}
