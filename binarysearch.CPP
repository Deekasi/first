#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid;
    while(start <= end){
        mid = start + (end - start)/2;
        if (arr[mid] == key){
            return mid;}
            else if ( arr[mid] <= key){
                start = mid+1;

            }
            else if (arr[mid]> key) {
                end = mid - 1;
            }
        }
        return - 1; // key not found

}
int main (){
    int arr[5] = {1,2,3,4,5} ;
    int key = 1;
     cout << "The key is found at index "<< binarysearch( arr,5, key)<< endl;

}