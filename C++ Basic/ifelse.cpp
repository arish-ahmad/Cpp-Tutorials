#include<iostream>

using namespace std;

int main(){

    int age ;

    cout<<"Enter your age"<<endl;

    cin>>age;

    if(age <= 17){

        cout<<"You can't vote, your age is below 18";

    }else{
        
        cout<<"You can vote, your age is above 18";
    }
    return 0;
}