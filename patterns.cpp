// star pattern:

// #include<iostream>
// using namespace std;
// int main(){
//     int n, i = 1;
//     cout << "enter th evalue of n" << endl;
//     cin >> n;
//      while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout << "*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//      }
// }

// no pattern:

// #include<iostream>
// using namespace std;
// int main(){
//     int n , i = 1;
//     cout << "enter the value of n" << endl;
//     cin >> n;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout << i;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n, i=1;
//     cout << "enter the value of n" << endl;
//     cin >> n;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout << n-j+1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n, i = 1;
//     int count = 1;
//     cin >> n;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout << count <<" ";
//             count = count  + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n, i = 1;
//     cout << "enter the value of n" << endl;
//     cin >> n;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout << "*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n, i = 1;
//     cin >> n;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout << i;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n, i = 1;
//      int  count = 1;
//     cin >> n;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout << count << " ";
//             count  = count + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n, i = 1;
//     cin >> n;
//     while(i<=n){
//         int j = 1;
//         int value = i;
//         while(j<=i){
//             cout << value;
//             value = value + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n, i=1;
    int count = 1;
    cin >> n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout << count << " "; 
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

