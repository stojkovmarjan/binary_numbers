#include <iostream>
#include <cmath>
using namespace std;

int convertToDecimal(string);
const int NOT_VALID = -1;

int main() {

    string number = "";
    do
    {
        cout<<"Enter binary number ( -- to exit ) -> ";
        
        cin>>number;
        if (number=="--") return 0;
        int decimal = convertToDecimal(number);

        if (decimal<0) {
            cout<<"BINARY NUMBER NOT VALID\n";
        } else {
            cout<<number<<" = "<<decimal<<'\n';
        }

    } while (true);
    
    return 0;
}

int convertToDecimal(string number){

    

    int decimal = 0;

    for (int n=number.length()-1;n>-1; n--){

        char c = number[n];

        if (c<'0' || c>'1') return NOT_VALID;

        int digit = c - '0';

        decimal += digit * pow(2.0,number.length()-1-n);
    }

    return decimal;

}


