#include<iostream>
using namespace std;
class vechile   //Base class
{
    public:
    int vechile_no;
    virtual void display(void)
    {
        cout<<" vechile no is "<<vechile no<<endl;
    }
};
class car : public vechile
{
    public:
    int car no;
    void display(void)
    {
        cout<<"vechile No is "<<vechile_no<<endl;
        cout<<"car no is "<<car no<<endl;
    }
}:
class BMW: public car
{
    public:
    int BMW no;
    void display(void)
    {
        cout<<"vechile nno is "<<vechile no<<endl;
        cout<<"car no is "<<car no<<endl;
        cout<<"BMW no is "<<BMW no <<endl;
    }
};

int main()
{
    vechile *v-ptr;
    Car cr;
    cr.car no = 231;
    v-ptr = &cr;
    v-ptr -> vechile no = 432;
    v-ptr -> display()
    
    // runtime polymorphism
    cout<<endl;
    BMW bm;
    bm.BMW no = 456;
    bm.car no = 789;
    v-ptr = &bm;
    v-ptr -> vechile no = 78;
    v-ptr ->display();
    return 0;}


    

