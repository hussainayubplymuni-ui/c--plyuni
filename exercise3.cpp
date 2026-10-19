#include <iostream>
using namespace std;
void exercise3(){

//MY PERSONALIZATION NUMBER IS 4827
int personalizationnum=4827;
int n=(personalizationnum%10)+1;

// Multiplication of n
for(int i=1;i<=n;i++){
    cout <<n << " x " << i << " = " << n*i <<endl;
}

}
int main(){
    //Recalling function exercise3
    exercise3();
    return 0;
}


