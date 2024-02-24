// #include<iostream>
// using namespace std;
// int main(){
//     int a, b;
//     cout << "enter the value of a and b" << endl;
//     cin >> a >> b;

//     char op;
//     cout << "enter the operation to perform" << endl;
//     cin >> op;

//     switch(op){

//         case '+':
//         cout << a+b;
//         break;

//         case '-':
//         cout << a-b;
//         break;

//         case '*':
//         cout << a*b;
//         break;
 
//         default: cout << "please enter a valid operation" << endl;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a, b;

//     cout << "enter the value of a and b" << endl;
//     cin >> a >> b;
     
//       int op;
//     cout << "enter the operation u want to perform" << endl;
//     cin >> op;

   
//     switch(op){
        
//         case 1:
//         cout << a+b;
//         break;

//         case 2:
//         cout << a-b;
//         break;

//         case 3:
//         cout << a*b;
//         break;

//         default:
//         cout << "enter a valid operation" << endl;
//     }
// }

// question :

// #include<iostream>
// using namespace std;
// int main(){
  
//   int amount;
  
//   cout << "enter the amount" << endl;
//   cin >> amount;

//   int x = 100;
//   int y = 50;
//   int z = 1;
//     int op;

//   cout << "enter the operation" << endl;
//   cin >> op;

//   switch(op){

//     case 1:
//     cout << amount/x << endl;

//     break;

//     case 2:
//     cout << amount/50 << endl;

//     case 3:
//     cout << amount/z << endl;

//     default:
//     cout << "enter a valid operation" << endl;

//   }

    
// }

// Write a C program to print day of week name using switch case:

#include<iostream>
using namespace std;
int main(){
    int day;

    cout << "enter the no of day" << endl;
    cin >> day;

    switch(day){

        case 1:
        cout << "monday" << endl;
        break;

        case 2:
        cout << "tuesday" <<endl;
        break;

        case 3:
        cout << "wednesday" << endl;
        break;

          case 4:
        cout << "thursday" << endl;
        break;

          case 5:
        cout << "friday" << endl;
        break;

          case 6:
        cout << "saturday" << endl;
        break;

        case 7:
        cout << "sunday" << endl;

        default:
        cout << "enter a valid day" << endl;
    }
}



#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
       fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){
    
    int num = factorial(n);
    int deno = factorial(r) * factorial (n - r);

    return num / deno;

}

int main(){
    int n, r;
    cout << "Enter the value of n and r: ";
    cin >> n >> r;

    cout << "Answer is " << nCr(n, r) << endl;
    return 0;
}



