#include <iostream>
using namespace std;
void exercise5(){
    //Calculating the month using personalization number
    cout << "MY personalization number is 4827" << endl;
    int personalizationNum = 4827;
    int month = (personalizationNum % 12 )+1;
    cout << "The month is :"<<month<<endl;
    switch (month)
    {
    case 1:
        cout << "January"<<endl;
        break;
    case 2:
        cout << "Feburary"<<endl;
        break;
    case 3:
        cout << "March"<<endl;
        break;
    case 4:
        cout << "April"<<endl;
        break;
    case 5:
        cout << "May"<<endl;
        break;
    case 6:
        cout << "June"<<endl;
        break;
    case 7:
        cout << "July"<<endl;
        break;
    case 8:
        cout << "August"<<endl;
        break;
    case 9:
        cout << "September"<<endl;
        break;
    case 10:
        cout << "October"<<endl;
        break;
    case 11:
        cout << "November"<<endl;
        break;
    case 12:
        cout << "December"<<endl;
        break;   
    default:
        cout << "Wrong month number"<<endl;
    }
}
int main(){

    exercise5();
    return 0;
}
