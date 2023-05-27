#include <iostream>

using namespace std;

int main()
{
    int zeronumber(int& , int&);
    int n1, n2;

    cout<<"Enter 1st number>>";
    cin>>n1;

    cout<<"Enter 2nd number>>";
    cin>>n2;

    zeronumber(n1, n2);
    return 0;
}

int zeronumber(int& num1, int& num2){
    if(num1 < num2){
        num1  = 0;
    }
    else{
        num2 = 0;
    }

    cout<<"("<<num1<<","<<num2<<")";
}

