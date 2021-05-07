#include <iostream>
using namespace std;
int main()
{
    int n,temp;
    cout << "enter the number of elements of the array"<<endl;
    cin >> n;
    int a[n];
    if((n<=0)||(n>10))
       cout << "invalid array size";
   else
    {
    cout << "enter the numbers to the array:" << endl;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "***********************************************"<<endl;
    cout << "The unsortd array elements are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a"<< "[" << i << "]"<< "= " << a[i] << endl;
    }
    cout << "***********************************************"<<endl;
    cout << "the sorted array elements are:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
       
        cout<<"a"<< "[" << i << "]"<< "= " << a[i] << endl;
    }
 
    }
    return 0;
}