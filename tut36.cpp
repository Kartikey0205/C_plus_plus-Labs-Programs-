// WAP to explain concepts of Pointer to derived class .
#include<iostream>
using namespace std;
class base_class
{   
    public:
        int var_base;
        void display()
        {
            cout<<"The value of base class variable is "<<var_base<<endl;
        }
  
};
class derived_class : public base_class
{   
    public:
        int var_derived;
        void display()
        {
            cout<<"The value of base class variable is "<<var_base<<endl;
            cout<<"The value of derived class variable is "<<var_derived<<endl;

        }
  
};

int main(){
base_class * base_pointer;
base_class obj_base;
derived_class obj_derived;
base_pointer = &obj_derived; // Pointing base class to the dervide class
cout<<endl<<"After making Base Class pointer"<<endl;

base_pointer ->var_base=34;
base_pointer->display();

cout<<endl<<"After making Derived Class pointer"<<endl;
derived_class * derived_pointer;

derived_pointer = & obj_derived;
derived_pointer ->var_base=134;
derived_pointer ->var_derived=9134;

derived_pointer->display();
return 0;
}

/*
Output:
After making Base Class pointer
The value of base class variable is 34

After making Derived Class pointer
The value of base class variable is 134
The value of derived class variable is 9134
*/