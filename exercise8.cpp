#include <iostream>
using namespace std;
void task8(){
//displaying personalization number and function call count
static int count=0;
count++;
cout << " My personalization number is 4827" << endl;
cout << "Total function count is "<< count << endl;


}
int main(){
    task8();
    task8();
    task8();
    task8();
    task8();
    return 0;
}
