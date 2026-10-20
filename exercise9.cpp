#include <iostream>
using namespace std;
double ComputeAverage (){
//This function calculates the average of marks
    int total=0;
    int marks=0;
    int count=0;
    do {
        cin >> marks;

        if (marks>=0){
            total=total+marks;
            // Bug 1: The old code added negative marks too
            // Fix: Only add marks that are zero or positive


            count++;
// Bug 2: The old code counted every input
// Fix: Count only valid marks
        }
    }
    while (marks!=-1);
// Bug 3: The old code could divide by zero.
// Fix: If no valid marks are entered, return 0.
    if (count==0) {
        return 0.0;
        
    }
    // Bug 4: The old code used integer division
    // Fix: convert total to double so the average can include numbers
    return static_cast<double>(total)/count;
     
}
void task9(){
    double average=ComputeAverage();
    cout << "The average of the marks is : " << average << endl;
}
int main(){
    cout << "Enter marks also enter -1 when u want to stop :"<<endl;
    task9();
    return 0;
    
}

