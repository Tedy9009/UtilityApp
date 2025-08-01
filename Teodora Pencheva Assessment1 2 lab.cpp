#include <iostream>
#include <string>
using namespace std;

// 1. Brute Force Attack
void bruteForceAttack() {
    string password = "1234";
    cout << "Attempting to brute force password..." << endl;
    for (int i = 0; i <= 9999; ++i) {
        string attempt = to_string(i);
        while (attempt.length() < 4)
            attempt = "0" + attempt;
        cout << "Trying: " << attempt << endl;
        if (attempt == password) {
            cout << "Password found: " << attempt << endl;
            break;
        }
    }
}

// 2. Some Counting
void someCounting() {
    for (int i = 1; i <= 100; ++i) {
        cout << i << endl;
    }
}

// 3. Simple Search
void simpleSearch() {
    int arr[] = {3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter a number to search for: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            cout << "Found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Not found." << endl;
}

// 4. Hello
void hello() {
    string name;
    cout << "Enter your name: ";
    getline(cin >> ws, name);
    cout << "Hello, " << name << "!" << endl;
}

// 5. Is it even?
void isItEven() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number % 2 == 0)
        cout << number << " is even." << endl;
    else
        cout << number << " is odd." << endl;
}

// Main function to run all exercises
int main() {
    cout << "Running: Brute Force Attack\n";
    bruteForceAttack();

    cout << "\nRunning: Some Counting\n";
    someCounting();

    cout << "\nRunning: Simple Search\n";
    simpleSearch();

    cout << "\nRunning: Hello\n";
    hello();

    cout << "\nRunning: Is it even?\n";
    isItEven();

    return 0;
}