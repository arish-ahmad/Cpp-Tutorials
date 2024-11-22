#include<iostream>

using namespace std;
int main(){

    // Linear search 
    
    int arr[] = {5, 36, 20, -10, 0, 111, 30, 45, 60, 100};
    int target = 6;

    int found = -1;

    for(int i=0; i<10; i++){
        if(arr[i] == target){
            found = i;
            break;
        }
    }
    if(found == -1){
        cout<<"Target not found!!";
    }else{
        cout<<"Target found at index: "<<found;
    }

    return 0;
}



