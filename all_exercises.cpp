// LHPK4014 - Set Exercises (all 10 tasks combined in one program)
// Personalization Number: 4827
#include <iostream>
#include <string>
using namespace std;

// Global variable from my personalization number (used by Task 10)
int personalizationNum = 4827;

// ---------------------------------------------------------------
// Task 1: Variables & Output - read two integers and print their sum
// ---------------------------------------------------------------
void exercise1() {
    cout << "My personalization number is 4827" << endl;
    int a, b;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    cout << "The sum of the two numbers is : " << a + b << endl;
}

// ---------------------------------------------------------------
// Task 2: Arithmetic Operations - multiply two numbers
// One number is the sum of the digits of 4827 (4+8+2+7 = 21)
// ---------------------------------------------------------------
void exercise2() {
    cout << "My personalization number is 4827" << endl;
    cout << " Sum of digits is : 21" << endl;

    int a = 21;
    cout << "First number is : 21 " << endl;
    int b;
    cout << "Enter  second number : " << endl;
    cin >> b;
    // Printing the result of multiplication of a and b
    cout << "Multiplication of two numbers is : " << a * b << endl;
}

// ---------------------------------------------------------------
// Task 3: Loops - multiplication table from 1 up to N
// N = (personalization number % 10) + 1
// ---------------------------------------------------------------
void exercise3() {
    // MY PERSONALIZATION NUMBER IS 4827
    int personalizationnum = 4827;
    int n = (personalizationnum % 10) + 1;

    // Multiplication of n
    for (int i = 1; i <= n; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

// ---------------------------------------------------------------
// Task 4: If-Else - check if the personalization number is even or odd
// ---------------------------------------------------------------
void exercise4() {
    // Checking whether the personalization number is even or odd
    int personalizationNum = 4827;
    cout << "My personalization number is " << personalizationNum << endl;

    if (personalizationNum % 2 == 0) {
        cout << "My personalization number " << personalizationNum << " is even" << endl;
    } else {
        cout << "My personalization number " << personalizationNum << " is odd" << endl;
    }
}

// ---------------------------------------------------------------
// Task 5: Switch Case - display the month
// Input = (personalization number % 12) + 1
// ---------------------------------------------------------------
void exercise5() {
    // Calculating the month using personalization number
    cout << "MY personalization number is 4827" << endl;
    int personalizationNum = 4827;
    int month = (personalizationNum % 12) + 1;
    cout << "The month is :" << month << endl;
    switch (month) {
    case 1:  cout << "January" << endl;   break;
    case 2:  cout << "February" << endl;  break;
    case 3:  cout << "March" << endl;     break;
    case 4:  cout << "April" << endl;     break;
    case 5:  cout << "May" << endl;       break;
    case 6:  cout << "June" << endl;      break;
    case 7:  cout << "July" << endl;      break;
    case 8:  cout << "August" << endl;    break;
    case 9:  cout << "September" << endl; break;
    case 10: cout << "October" << endl;   break;
    case 11: cout << "November" << endl;  break;
    case 12: cout << "December" << endl;  break;
    default: cout << "Wrong month number" << endl;
    }
}

// ---------------------------------------------------------------
// Task 6: Arrays - array of five numbers, print the third value
// ---------------------------------------------------------------
void exercise6() {
    cout << "The array contains five elements" << endl;
    // Number 7 (last digit of personalization number) is also present in array
    int array[5] = {20, 45, 7, 3, 9};

    cout << "The third value is " << array[2] << endl;
}

// ---------------------------------------------------------------
// Task 7: Functions with parameters - welcome message and marks
// ---------------------------------------------------------------
void exercise7(string name, int marks) {
    // displaying name
    cout << "Hello  welcome " << name << endl;
    // Displaying marks
    cout << "Your marks are " << marks << endl;
}

// ---------------------------------------------------------------
// Task 8: Static local variable - count the number of function calls
// ---------------------------------------------------------------
void exercise8() {
    // displaying personalization number and function call count
    static int count = 0;
    count++;
    cout << " My personalization number is 4827" << endl;
    cout << "Total function count is " << count << endl;
}

// ---------------------------------------------------------------
// Task 9: Debugging - fixed computeAverage()
// ---------------------------------------------------------------
double ComputeAverage() {
    // This function calculates the average of marks
    int total = 0;
    int marks = 0;
    int count = 0;
    do {
        cin >> marks;

        if (marks >= 0) {
            total = total + marks;
            // Bug 1: The old code added negative marks too
            // Fix: Only add marks that are zero or positive

            count++;
            // Bug 2: The old code counted every input
            // Fix: Count only valid marks
        }
    } while (marks != -1);

    // Bug 3: The old code could divide by zero.
    // Fix: If no valid marks are entered, return 0.
    if (count == 0) {
        return 0.0;
    }
    // Bug 4: The old code used integer division
    // Fix: convert total to double so the average can include decimals
    return static_cast<double>(total) / count;
}

void exercise9() {
    cout << "Enter marks also enter -1 when u want to stop :" << endl;
    double average = ComputeAverage();
    cout << "The average of the marks is : " << average << endl;
}

// ---------------------------------------------------------------
// Task 10: Global vs static variables
// Global and static variables keep their values between function calls,
// but a global is accessible from any function while a static is only
// accessible inside its own function. The local variable resets every call.
// All three start from my personalization number 4827.
// ---------------------------------------------------------------
int globalCount = personalizationNum;

void showVariables() {
    static int staticCount = personalizationNum;
    int localCount = personalizationNum;

    globalCount++;
    staticCount++;
    localCount++;
    cout << "Global: " << globalCount << endl;
    cout << "Static: " << staticCount << endl;
    cout << "Local: " << localCount << endl;
    cout << endl;
}

void exercise10() {
    for (int i = 0; i < 3; i++) showVariables();
}

// ---------------------------------------------------------------
// main: runs all ten exercises in order
// ---------------------------------------------------------------
int main() {
    cout << "\n===== Task 1 =====" << endl;  exercise1();
    cout << "\n===== Task 2 =====" << endl;  exercise2();
    cout << "\n===== Task 3 =====" << endl;  exercise3();
    cout << "\n===== Task 4 =====" << endl;  exercise4();
    cout << "\n===== Task 5 =====" << endl;  exercise5();
    cout << "\n===== Task 6 =====" << endl;  exercise6();
    cout << "\n===== Task 7 =====" << endl;  exercise7("4827", 27);
    cout << "\n===== Task 8 =====" << endl;
    for (int i = 0; i < 5; i++) exercise8();   // called 5 times
    cout << "\n===== Task 9 =====" << endl;  exercise9();
    cout << "\n===== Task 10 =====" << endl; exercise10();
    return 0;
}
