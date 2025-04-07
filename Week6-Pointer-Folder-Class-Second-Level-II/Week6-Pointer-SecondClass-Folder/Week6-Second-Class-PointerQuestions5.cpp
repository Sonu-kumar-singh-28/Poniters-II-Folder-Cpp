#include<iostream>
using namespace std;

int solve(int arr[])
{
    cout<<" Size inside of the Functions :  " << sizeof(arr) <<endl;

}

int main()
{
    int arr[10] = { 10,20,30,40};
    cout<< " size outside the Funtions : "<< sizeof(arr) << endl;

    solve(arr);
}