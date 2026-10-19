#include <iostream>
using namespace std;

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
//Using main function to call exercise4 function
int main() {
    exercise4();
    return 0;
}

