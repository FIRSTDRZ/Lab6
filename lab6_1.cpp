#include<iostream>
using namespace std;

int main(){
    int i =1;
    int num = 0;
    double Even = 0;
    double Odd = 0;
    while (i > 0){
        cout << "Enter an integer: ";
        cin>>num;
        if (num == 0){
            i -=1;
        }
        else if(num%2 !=0 ){
            Odd += 1;
        }
        else if (num%2 == 0) {
            Even +=1;
        }
    }
    
    cout << "#Even numbers = "<<Even<<"\n";
    cout << "#Odd numbers = "<<Odd;
    return 0;
}
