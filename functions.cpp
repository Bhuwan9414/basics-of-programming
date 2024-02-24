// #include<iostream>
// using namespace std;
// int sum(int a, int b){

//     int sum;
//     sum = a + b;

//     return sum;
// }

// int main(){
//     int a, b;
//     cout << "enter the value of a and b" << endl;
//     cin >> a >> b;

//     cout << " the sum is " << sum << endl; 
//     sum(a,b);
// }


// #include<iostream>
// using namespace std;

// int sum(int a, int b){

//         int sum;
//       sum = a + b;
//       return sum;

// }

// int main(){

//     int a, b;
//      cout << "enter the value of a and b " << endl;
//      cin >> a >> b;
    
//     sum(a,b);

//     cout << " the sum is " << sum << endl;
    

// }

// #include<iostream>
// using namespace std;

// int sum(int a, int b){
//     int result = a + b;
//     return result;
// }

// int main(){
//     int a, b;
//     cout << "Enter the value of a and b: ";
//     cin >> a >> b;
    
//     int result = sum(a, b);

//     cout << "The sum is: " << result << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int sum(int a, int b){
//     int result = a + b;
//     return result;
// }

// int main(){
//     int a, b;
//     cout << "enter the value of a and b" << endl;
//     cin >> a >> b;

//     int result = sum(a,b);
//      result = sum(a,b);

//     cout << "the sum  is " << result << endl; 
// }


// #include<iostream>
// using namespace std;

// int power(){

//     int a,b;
//     cout << "enter the value of a and b" << endl;
//     cin >> a >> b;

//     int ans = 1;

//     for(int i = 1; i<=b; i++){
//         ans = ans*a;
//     }
//     return ans;
// }

// int main(){
    

//     int answer  = power();
//      cout << "answer is " << answer << endl;


//     answer = power();
//     cout << "answer is " << answer << endl;

//     answer = power();
//     cout << "answer is " << answer << endl;

//     return 0;
// }

// sum of two no using functions:

// #include<iostream>
// using namespace std;
// int evenodd(int a){
//     if(a%2==0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// int main(){
//     int a;
//     cout << "enter the number" << endl;
//     cin >> a;

//     if(evenodd(a)){
//         cout << "given no is even" << endl;
//     }
//     else{  
//         cout << "given no is odd" << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int sum(int a, int b){
//     int result = a + b;
//     return result;
// }

// int main(){
//     int a, b;
//     cout << "enter the values of a and b" << endl;
//     cin >> a >> b;

//     int result = sum(a,b);
//     // int sum(a,b);
//     cout << "the sum  is " << result;

// }


// NCR program:

// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int fact = 1;
//     for(int i=1;i<=n;i++){
//        fact = fact * i;
//     }
//     return fact;
// }

// int nCr(int n, int r){
    
//     int num = factorial(n);
//     int deno = factorial(r) * factorial (n-r);

//     return  num / deno;

// }

// int main(){
//     int n, r;
//     cout << "enter the value of n and r" << endl;
//     cin >> n >> r;

//     cout << "answer is " << nCr(n, r) << endl; 

//     return 0;
// }

// #include<iostream>
// using namespace std;

// void counting(int n){

//     int i; 
//     for(i=1;i<=n;i++){
//         cout << i << endl;
//     }

// }

// int main(){
//     int n;
//     cout << "enter the value of n" << endl;
//     cin >> n;

//     cout << "the count is " << endl;
//     counting(n);
//     // cout << "counting is " << counting(n) << endl;
// }

// prime no program:

// #include<iostream>
// using namespace std;
// bool isprime(int n){
//     for(int i=2;i<=n;i++){
//         if(n%i==0){
//             return 0;
//         }
//         else{
//             return 1;
//         }
//     }
// }

// int main(){
//     int n;
//     cout << "enter the value of n" << endl;
//     cin >> n;

//     if(isprime(n)){
//         cout << "given no is prime" << endl;
//     }
//     else{
//         cout << "given no is not prime" << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int ap(int n){

//     int result = (3 + n + 7);
//     return result;
// }

// int main(){
//     int n;
//     cout << "enter the value of  n" << endl;
//     cin >> n;
    
    
//     cout << " the answer is " << ap(n) << endl;  
// }





// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n<=1){
//         return n;
//     }
//     int prev=0, current=1,next;
//     for(int i=2;i<=n;i++){
//         next = prev + current;
//         prev = current;
//         current = next;
//     }
//     return current;
// }

// int main(){
//     int n;
//     cout << "enter the value of n" << endl;
//     cin >> n;

//     cout << "the Nth term of the series is " << fib(n) <<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int greatest(){

//     int a, b;
//     cout << "enter the value of a and b" << endl;
//     cin >> a >> b;

//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

// int main(){

//     int num = greatest();
//     cout << "the greater no is : " << num << endl;

//     num = greatest();
//     cout << "the greater no is : " << num << endl;
// }


#include<iostream>
using namespace std;
int evenodd(){
    int n;
    cout << "enter the number" << endl;
    cin >> n;

    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

  
    int result1 = evenodd();
        
   if(result1 == 1){
    cout << "given no is even" << endl;
   }

   else{
    cout << "given no is odd" << endl;
   }


   int result2 = evenodd();

   if(result2 == 1){
    cout << "given no is even" << endl;
   }
   else{
    cout << "goven no is odd" << endl;
   }
} 