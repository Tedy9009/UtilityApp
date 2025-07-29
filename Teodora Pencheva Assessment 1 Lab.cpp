#include <iostream>
#include <string>
using namespace std;

// 1. Coding is Cool
void codingIsCool() {
    cout << "Coding is cool!" << endl;
}

// 2. Simple Sums
void simpleSums() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;
}

// 3. Biography
void biography() {
    string name;
    int age;
    string hobby;

    cout << "Enter your name: ";
    getline(cin >> ws, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your hobby: ";
    getline(cin >> ws, hobby);

    cout << "Biography:" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Hobby: " << hobby << endl;
}

// 4. Primitive Quiz
void primitiveQuiz() {
    int i = 10;
    double d = 9.5;
    char c = 'A';
    bool b = true;

    cout << "Integer: " << i << endl;
    cout << "Double: " << d << endl;
    cout << "Character: " << c << endl;
    cout << "Boolean: " << (b ? "true" : "false") << endl;
}

// 5. Days of the Month
void daysOfTheMonth() {
    int month;
    cout << "Enter a month number (1-12): ";
    cin >> month;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 days" << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "30 days" << endl;
            break;
        case 2:
            cout << "28 or 29 days" << endl;
            break;
        default:
            cout << "Invalid month number!" << endl;
    }
}

// Main function to run all exercises
int main() {
    cout << "Running: Coding is Cool\n";
    codingIsCool();

    cout << "\nRunning: Simple Sums\n";
    simpleSums();

    cout << "\nRunning: Biography\n";
    biography();

    cout << "\nRunning: Primitive Quiz\n";
    primitiveQuiz();

    cout << "\nRunning: Days of the Month\n";
    daysOfTheMonth();

    return 0;
}
