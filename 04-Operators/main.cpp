#include <iostream>
using namespace std;

// 1. Arithmetic Operators :
// int main() {
//     int a = 8, b = 3;

//     // Addition
//     cout << "a + b = " << (a + b) << endl;
  
//     // Subtraction
//     cout << "a - b = " << (a - b) << endl;
  
//     // Multiplication
//     cout << "a * b = " << (a * b) << endl;
  
//     // Division
//     cout << "a / b = " << (a / b) << endl;
  
//     // Modulo
//     cout << "a % b = " << (a % b) << endl;
  
//     // Increament
//     cout << "++a = " << ++a << endl;
  
//     // Decrement
//     cout << "b-- = " << b--;
    
//     return 0;
// }

// 2. Relational Operators (Comparison operators) :
// int main() {
//     int a = 6, b = 4;

//     // Equal operator
//     cout << "a == b is " << (a == b) << endl;
  
//     // Greater than operator
//     cout << "a > b is " << (a > b) << endl;
  
//     // Greater than Equal to operator
//     cout << "a >= b is " << (a >= b) << endl;
  
//     //  Lesser than operator
//     cout << "a < b is " << (a < b) << endl;
  
//     // Lesser than Equal to operator
//     cout << "a <= b is " << (a <= b) << endl;
  
//     // Not equal to operator
//     cout << "a != b is " << (a != b);

//     return 0;
// }

// 3. Logical operators :
// int main() {
//   int x = 5;
//   int y = 3;
//   cout << (x > 3 && x < 10) << endl; 
//   cout << (x > 3 || x < 4) << endl; 
//   cout << (!(x > 3 && x < 10)) << endl;
//   return 0;
// }

// 4. Assignment Operators :
// int main() {
//     int a = 6, b = 4;

//     // Assignment Operator.
//     cout << "a = " << a << endl;
  
//     //  Add and Assignment Operator.
//     cout << "a += b is " << (a += b) << endl;
  
//     // Subtract and Assignment Operator.
//     cout << "a -= b is " << (a -= b) << endl;
  
//     //  Multiply and Assignment Operator.
//     cout << "a *= b is " << (a *= b) << endl;
  
//     //  Divide and Assignment Operator.
//     cout << "a /= b is " << (a /= b);

//     return 0;
// }

// 5. Ternary Operators :
int main() {
    int a = 3, b = 4;

    // Conditional Operator
    int result = (a < b) ? b : a;
    cout << "The greatest number is " << result;

    return 0;
}
