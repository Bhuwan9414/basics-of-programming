#include<iostream>
using namespace std;

void update(int arr[], int n){

        cout << "inside the function" << endl;
         for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "going back to the main function" << endl;

}

int main(){

    int arr[3] = {1,2,3};
    int n = 3;

    update(arr, 3);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }


}