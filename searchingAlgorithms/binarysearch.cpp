#include <iostream>
using namespace std;

int main(){

    // create a sorted array 

    int arr[] = {-70, -38, -20, -10, 0, 10, 30, 50, 60, 100};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 30;
    int low = 0;
    int high = size -1;
    int mid;
    bool found = false;

    // start binary search 
    while (low <= high){
        mid = low + (high-low)/2;
        if(arr[mid] == target){
            // if the mid is equal to target
            found = true ;
            break;
        }else if (arr[mid] < target){
            // if target is greater than mid 
            low = mid +1;
        }else{
            // if target is less than mid
            high = mid -1;
        }
    }
    if (found){
        cout <<"Target found at index: "<<mid;
    }else{
        cout<<"Target not found!!!";
    }

    return 0;
}