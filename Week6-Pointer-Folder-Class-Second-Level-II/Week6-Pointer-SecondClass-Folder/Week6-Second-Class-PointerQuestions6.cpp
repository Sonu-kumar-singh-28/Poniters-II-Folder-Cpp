#include<iostream>
using namespace std;

int solve(int arr[])
{
    cout<<"Function size insiide Functions : " << sizeof(arr) << endl;

    cout << " Arr "<< arr << endl;
    cout << " & OF arr "<<&arr <<endl;

    arr[0] = 50;
}

int main()
{
    int arr[10] = {10,20,30,40};

    cout<<arr << endl;
    cout<< &arr<< endl;

    for(int i=0; i<10; i++)
    {
        cout<<arr[i] << " ";
    }
    cout<< endl;
    cout<<" Now the Function calling : " << endl;

    solve(arr);

    cout<<"Wapas Fucntion mai Ayye hai : " << endl;

    for(int i=0; i<10; i++)
    {
        cout<< arr[i] << " ";
    }

}