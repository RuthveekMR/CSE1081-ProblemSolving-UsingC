#include<iostream>
using namespace std;
int count=0;
class try1
{
    public:
        try1()
        {
            count++;
            cout<<"no of objects created="<<count<<endl;
        }
    ~try1()
    {
        cout<<"no of object destroyed="<<count<<endl;
        count--;
    }
};
int main()
{
    cout<< "enter main"<<endl;
    try1 t1,t2,t3,t4;
    cout<<"block1"<<endl;
    try1 t5;
    cout<<"block2"<<endl;
    try1 t6;
    cout<<"again in main"<<endl;
    return 0;
}
