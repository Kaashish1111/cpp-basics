#include<iostream>
using namespace std;

// Base class with all types of members
class Base {
private:
    int privateVar = 1;

protected:
    int protectedVar = 2;

public:
    int publicVar = 3;

    void accessInsideBase() {
        cout << "Inside Base class:\n";
        cout << "  Private Var: " << privateVar << " ✅ (Accessible within same class)" << endl;
        cout << "  Protected Var: " << protectedVar << " ✅ (Accessible within same class)" << endl;
        cout << "  Public Var: " << publicVar << " ✅ (Accessible within same class)" << endl;
    }
};

// Derived class inheriting from Base
class Derived : public Base {
public:
    void accessInDerived() {
        cout << "\nInside Derived class:\n";

        // cout << "  Private Var: " << privateVar << " ❌" << endl; // ERROR: privateVar is not accessible here
        cout << "  Protected Var: " << protectedVar << " ✅ (Accessible in derived class)" << endl;
        cout << "  Public Var: " << publicVar << " ✅ (Accessible in derived class)" << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    cout << "In main function:\n";
    // cout << "  baseObj.privateVar = " << baseObj.privateVar << " ❌" << endl; // ERROR: privateVar not accessible
    // cout << "  baseObj.protectedVar = " << baseObj.protectedVar << " ❌" << endl; // ERROR: protectedVar not accessible
    cout << "  baseObj.publicVar = " << baseObj.publicVar << " ✅ (Accessible from outside)" << endl;

    // Call functions that have access
    baseObj.accessInsideBase();
    derivedObj.accessInDerived();

    return 0;
}
