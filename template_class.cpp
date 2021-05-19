#include<iostream>
using namespace std;

class StackOverFlow :exception {};
class StackUnderFlow :exception {};

template<class T>
class Stack
{
private:
    T* stk;
    int top = -1;
    int size;
public:
    Stack(int sz)
    {
        size = sz;
        stk = new T[size];
    }

    void push(T x);
    T pop();

};

template<class T>
void Stack<T>::push(T x)
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

template<class T>
T Stack<T>::pop()
{
    T x;
    try {
        if (top == -1)
            throw StackUnderFlow();
        x = stk[top--];
        return x;
    }
    catch (StackUnderFlow u)
    {
        cout << "StackUnderFlow" << endl;
    }
}

int main()
{
  
    Stack<float> s(5);

    s.push(2);
    s.push(3.36);
    s.push(4.2144);
    s.push(10.00);
    s.push(9);
    s.push(8);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;


}
