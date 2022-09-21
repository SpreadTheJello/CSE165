#include <iostream>
#include <string>
using namespace std;

// Employee Class which had a name and wage for each object and has a print function to print these
class Employee
{
    private:
    string name;
    int wage;

    public:
    Employee(){
        name = "";
        wage = 0;
    }

    Employee(string n, int w){
        name = n;
        wage = w;
    }

    void setName(string n){
        name = n;
    }
    void setWage(int w){
        wage = w;
    }
    void print(){
        cout << "Employee name: " << name << endl;
        cout << "Employee wage: " << wage << endl;
    }
};

// Boss Class which had a name and wage for each object and has a print function to print these and print an employee's, using a pointer, wage and name. 
class Boss{
    private:
    string name;
    int wage;

    public:
    Boss(){
        name = "";
        wage = 0;
    }

    Boss(string n, int w){
        name = n;
        wage = w;
    }

    void print(Employee* ptr){
        cout << "Boss name: " << name << endl;
        cout << "Boss wage: " << wage << endl;
        ptr->print();
    }
};

int main(){
    Employee joe("Joe Smith", 15);
    Employee* joe_call = &joe;

    Boss john("John Smith", 30);
    
    cout << "Employee's info using the Employee print: " << endl;
    joe_call->print();
    cout << endl;
    cout << "Boss's info using the Boss's print which also uses the Employee's print: " << endl;
    john.print(joe_call);
}