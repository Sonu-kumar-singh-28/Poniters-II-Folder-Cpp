#include<iostream>
using namespace std;
int main()
{
    // int arr[4] = {10,20,30,40};

    // int* ptr = arr;
    // ptr= ptr+2;
    // cout<< *ptr <<endl;


    int arr[4]= {10,20,30,40};
    cout<< sizeof(arr) << endl;

    int* ptr = arr;
    cout<< sizeof(ptr) << endl;

    cout<<sizeof(*ptr) <<endl;


}   