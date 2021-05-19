#include <iostream>
using namespace std;

class Exception1:public exception
{

};

class Exception2 :public Exception1
{


};
int main()
{
    try
    {
        throw Exception2();
    }
    catch (Exception2 e)
    {
        cout << "hi2";
    }
    catch (Exception1 e)
    {
        cout << "hi1";
    }
    catch (...)
    {
        cout << "all";
    }
    return 0;
}
