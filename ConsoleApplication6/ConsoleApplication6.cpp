// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void generateTemplate(int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Line " << i + 1 << ": ";
        for (int j = 0; j <= i; ++j) {
            cout << j;
        }
        cout << "*";
        for (int j = 0; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int size;

    cout << "Enter the dimension of the template (number of lines): ";
    cin >> size;


    cout << "\nTemplate with 5 rows:\n";
    generateTemplate(5);


    int num;
    cout << "\nEnter a number from the list: ";
    cin >> num;


    size = (num % 5) + 5;


    cout << "\nTemplate with " << size << " rows:\n";
    generateTemplate(size);

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
