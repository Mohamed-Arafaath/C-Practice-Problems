#include<iostream>
using namespace std;

int search(int A[], int n, int k)
{
        for(int i = 0;i<n;i++)
        {
            if(A[i] == k)
                return i;
        }
}


int main()
{
    int A[] = {8,3,9,4,6,2,7,1};
    int n = 8;
    int k,i;
    
    cout <<"Enter the key to search: ";
    cin>>k; 
    
    i = search(A, n, k);
    cout << "The key '"<<k<<"' is at index: "<<i;
        
    return 0;
}
