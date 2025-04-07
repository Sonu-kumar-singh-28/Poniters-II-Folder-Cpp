#include<iostream>
using namespace std;

void update(int *p)
{
    cout<< " Address stored  inside p is :  " << p<< endl;
    cout<< " Adress is p is : " << &p << endl;
    *p = *p+10;
}
int main()
{
    int a =5;
    cout<< " Address of a is : " << &a << endl;
    int *ptr = &a;
    cout<< " Address stored in ptr  : " << ptr << endl;
    cout<<" Address of the values is :L " << &ptr << endl; 


    update(ptr);
    cout << "values is :"<< a << endl;
}