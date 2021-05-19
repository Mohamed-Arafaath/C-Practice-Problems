#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream ofs("mytext.txt");
    ofs<<"hello Arafath"<<endl;
    ofs<<24<<endl;
    ofs<<"omg! "<<endl;
    ofs.close();
    return 0;
}
