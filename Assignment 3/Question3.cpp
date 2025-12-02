#include <iostream>
using namespace std;

int main() {
    int inches;
    cout<<"Enter height in inches: ";
    cin>>inches;

    int feet = inches / 12;
    int r_inches = inches % 12;

    cout<<"Height: "<<qfeetq<<" feet "<< r_inches<<" inches"<<endl;
    return 0;
}
