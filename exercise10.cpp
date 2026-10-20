// Personalization Number: 4827
#include <iostream>
using namespace std;

// this is global variable from my personalization number
int personalizationNum = 4827;

// Task 10: Global vs static variables.
// both keep their values between function calls but global variables are accessible from any function
// while static variables are only accessible inside their own function. The local variable resets every call.
// All three start from my personalization number that is 4827

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

void task10() {
    cout << "\nTask 10 " << endl;
    for (int i = 0; i < 3; i++) showVariables();  
}

int main() {
    task10();
    return 0;
}
