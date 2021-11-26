#include<iostream>
using namespace std;

int main(){
    int i = -1, x, E = 0, O = 0;
    while(i < 0){
        cout << "Enter an integer: ";
        cin >> x;
        if(x == 0){
            i=1;
        }
        else{

            if(x%2 == 0){
                E++;
            }
            else{
                O++;
            }
        }
    }
    cout << "#Even numbers = " << E <<"\n";
    cout << "#Odd numbers = " << O;
    return 0;
}
