// #include<iostream>
// using namespace std;
// int main(){

//     int arr[5];
//     int i;

//         cout << "enter the elements" << endl;

//     for(i=0;i<=5;i++){
//     cin >> arr[i];
//     }

//     cout << arr[1] << endl;
  
// }

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[3] = {1,2,3};
//     int n = 3;

//     for(int i=0;i<n;i++){

//         cout << " the elements are " << arr[i] << endl;
//     }

// }

// #include<iostream>
// using namespace std;

// void printarray(int arr[], int size){

//     cout << "printing the array" << endl;
//     for(int i=0;i<size;i++){
//         cout << arr[i]  << " ";
//     }
//     cout << "printing done" << endl;
// }

// int main(){

//     int third[15] = {2, 7};
//    int n = 15;
//     printarray(third, 15);
// }

// program to find the maximum and minimum element in an array:

#include<iostream>
#include<climits>

using namespace std;

int getmax(int arr[], int n){

    int max = INT_MIN;

    for(int i=0;i<n;i++){

        if(arr[i]>max){
             max = arr[i];
    }
    }
            return max;

}

int getmin(int arr[], int n){

    int min = INT_MAX;
    
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){

    int arr[5], i, n = 5;

    cout << "enter the elements" << endl;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "the maximum element is " << getmax(arr, n) << endl;
    cout << "the minimum element is " << getmin(arr, n) << endl;


}