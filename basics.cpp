// if else concepts

// #include<iostream>
// using namespace std;
// int main(){
//    int a;
//    cout << "enter the number" << endl;
//    cin >> a;
//    if(a>0){
//     cout << "a is positive" << endl;
//    }
//    else if(a<0){
//     cout << "a is negative" << endl;
//    }
//    else{
//     cout << "a is null" << endl;
//    }
// }


// while loop


// #include<iostream>
// using namespace std;
// int main(){
//     int n, i = 1;
//     cout << "enter the value of n" << endl;
//     cin >> n;
//     while(i <= n){
//         cout << i << endl;
//         i = i + 1;
//     }
// }

// sum of n numbers:

// #include<iostream>
// using namespace std;
// int main(){
//     int n , i = 1 , sum = 0;
//     cout << "enter the value of n" << endl;
//     cin >> n;
//     while(i <= n){
//         sum = sum + i;
//         i = i + 1;
//     }
//     cout << sum << endl;
// }

// sum of even no:

// #include<iostream>
// using namespace std;
// int main(){
//     int n, i = 0 , sum = 0;
//     cout << "enter the value of n" << endl;
//     cin >> n;
//     while(i <= n){
//         sum = sum + i;
//         i = i + 2;
//     }
//     cout << sum << endl;
// }

// program to check whether a no is prime or not:

#include<iostream>
using namespace std;
int main(){
    int n , i = 2;
    cout << "enter the value of n" << endl;
    cin >> n ;

    while(i < n){
        if(n%i==0){
            cout << "not prime" << i <<  endl;
        }
        else{
            cout << "given no is prime" << i <<  endl;
        }
        i = i + 1;
    }

}