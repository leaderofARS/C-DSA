#include <iostream>
#include <memory>

using namespace std;    

class Employee
{
public:
    virtual void CalculateSalary() = 0; // pure virtual function
    virtual ~Employee() = default;       // virtual destructor
};

// Derived class Manager

class Manager : public Employee
{
public:
    int baseSalary;
    Manager(int salary) : baseSalary(salary) {}
    void CalculateSalary() override
    {
        cout << "Manager Salary: " << baseSalary + 1000 << endl;
    }
};

// Derived class Developer

class Developer : public Employee
{
public:
    int baseSalary;
    Developer(int salary) : baseSalary(salary) {}
    void CalculateSalary() override
    {
        cout << "Developer Salary: " << baseSalary + 500 << endl;
    }
};


int main()
{
    double baseSalaryManager, baseSalaryDeveloper;
    cout << "Enter base salary for Manager: ";
    cin >> baseSalaryManager;
    Manager mgr(baseSalaryManager);
    auto e1 = make_unique<Manager>(baseSalaryManager);
    e1->CalculateSalary();
    cout << "Enter base salary for Developer: ";
    cin >> baseSalaryDeveloper;
    Developer dev(baseSalaryDeveloper);
    auto e2 = make_unique<Developer>(baseSalaryDeveloper);
    e2->CalculateSalary();

    // automatic cleanup by unique_ptr
    return 0;
}