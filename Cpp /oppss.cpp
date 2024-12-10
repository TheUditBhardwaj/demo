#include<iostream>

using namespace std;

class employee{
    public:
    string name;
    float salary;

};

class programmer: public employee{
    public:

    float bonus;


    void printname(){
        
        cout<<name<<endl; 
        cout<<salary<<endl;
        cout<<bonus<<endl;

    }
};

int main(){
    programmer p1;
    p1.name="Udit";
    p1.salary=23564.22;
    p1.bonus=10000;
    p1.printname();
    cout<<"Total Salary"<< p1.salary +  p1.bonus<<endl;


}