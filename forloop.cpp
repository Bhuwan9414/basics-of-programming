// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cout << "enter the value of n" << endl;
//     cin >> n;
//     for(i=0;i<=n;i++){
//         cout << i;
//         cout << endl;
//     }
// }

// program to do of n numbers:

// #include<iostream>
// using namespace std;
// int main(){
//     int n, i,sum = 0;
//     cout << "enter the value of n" << endl;
//     cin >> n;
//     for(i=1;i<=n;i++){
//         sum = sum + i;
//     }
//          cout << sum << endl;

// }

// fibonacci series program:

#include<iostream>
using namespace std;
int main(){
    int n , i;
    int a=0;
    int b=1;
    cout << a << " " <<b<<" ";
    cout << "enter the value of n" << endl;
    cin >> n;
    for(i=0;i<=n;i++){
        int nextnumber = a+b;
        cout << nextnumber << endl;
        a = b;
        b = nextnumber;
    }
}

// #include<iostream>
// using namespace std;
// int main(){
//     // int n;
//     // cin>>n;
//     for(int i=1;i<=5;i++){
//         cout << "hey" << endl;
//         cout << "hi" << endl;
//         continue;
//         cout << "reply" << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i, n;
//     cin >> n;
//     for(i=0;i<=n;i++){
//         cout << "unstoppable" << endl;
//     }
// }

// leetcode question:

// given an integer no n, return the difference between the product of its digits and the sum of its digits: 
 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int product = 1;
//     int sum = 0;
//     cout << "enter the value of n" << endl;
//     cin >> n;
//     while(n!=0){
//         int digit;
//         digit = n%10;
//         product = product * digit;
//         sum = sum + digit;
        
//         n = n/10;
//     }
//      int ans = product - sum;
//        cout << ans;  
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n, count=0;
//     cin >> n;
//     while(n!=0){
//         if(n&1){
//             count++;
//         }
//         n=n>>1;
//     }
//      cout << count;
// }

#include<iostream>
using namespace std;
class solution{
    public:
    int hammingweight(uint32_t n){
        int  count=0;
    // cin >> n;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
     cout << count;
    }
};