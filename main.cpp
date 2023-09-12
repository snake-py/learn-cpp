#include <iostream>
#include <typeinfo>
#include <iomanip>
// // #include "person.h"
// // #include "Server.cpp"

using namespace std;

// // int addNumbers(int num1, int num2)
// // {
// //     int sum = num1 + num2;
// //     return sum;
// // }

// void printNameAndAge(string name, int age, string alignment, int width = 10)
// {
//     if (alignment == "left")
//     {
//         cout << left;
//     }
//     else if (alignment == "right")
//     {
//         cout << right;
//     }
//     else
//     {
//         cout << "Invalid alignment" << endl;
//     }
//     cout << setw(width) << "name" << setw(width) << "age" << endl;
//     cout << setw(width) << name << setw(width) << age << endl;
// }

// // int main()
// // {
// /*
// // create a server and store in a server variable
// Server::Server server;
// // start the server
// server.start();
// */

// /*
// cout << "Hello, World!\n";
// cout << "Hello, World!\n";
// if (20 > 18)
// {
//     cout << "20 is greater than 18";
// }
// auto result = (10 <=> 20) > 0; // result is false
// */

// /*
//     block comments
// */
// // normal comments

// // variables
// // int myNum = 5;            // Integer (whole number without decimals)
// // double myFloatNum = 5.99; // Floating point number (with decimals)
// // char myLetter = "D";      // Character
// // string myText = "Hello";  // String (text)
// // bool myBoolean = true;    // Boolean (true or false)
// // int x = 5;
// // int y = 6;
// // int sum = x + y;
// // int sumFromFunction = addNumbers(x, y);
// // cout << sum << endl;
// // cout << sumFromFunction << endl;
// // /* multi assignment
// // int x = 5, y = 6, z = 50;
// // cout << x + y + z;
// // */
// // /*
// // // constants
// // const int myNum = 15;  // myNum will always be 15
// // myNum = 10;  // error: assignment of read-only variable "myNum"
// // */
// // cout << "" << endl;
// // return 0;

// // Statements
// // int test = 3;
// // int firstNumber{3};
// // int secondNumber{7};
// // cout << firstNumber << endl;
// // cout << secondNumber << endl;
// // cout << firstNumber + secondNumber << endl;

// // // inputs
// // string name;
// // cout << "Type your name: ";
// // cin >> name;
// // cout << "Your name is: " << name << endl;

// // // fullname
// // string firstName;
// // string lastName;
// // cout << "Type your first name: ";
// // cin >> firstName;
// // cout << "Type your last name: ";
// // cin >> lastName;
// // cout << "Your full name is: " << firstName << " " << lastName << endl;

// // fullname with getline
// /*
//     string fullName;
//     int age;
//     cout << "Type your full name: ";
//     getline(cin, fullName);
//     cout << "Type your age: ";
//     cin >> age;
//     cout << "Your full name is: "
//          << fullName
//          << " Your age is: "
//          << age
//          << endl;
// */
// /*
// // number system
// int a = 15;         // decimal
// int b = 017;        // octal
// int c = 0x0F;       // hexadecimal
// int d = 0b00001111; // binary

// cout << a << endl;
// cout << b << endl;
// cout << c << endl;
// cout << d << endl;
// */
// /*
//  // initializing variables
//  // initialize assignment
//  int a = 5;
//  int b = 3;
//  int c = a + b;
//  int d = 2.9; // d will be 2 because 2.9 will be truncated
//  cout << "a: " << a << endl;
//  cout << "b: " << b << endl;
//  cout << "c: " << c << endl;
//  cout << "d: " << d << endl;
//  cout << "" << endl;

//  // initialize constructor
//  int e(3);
//  int f(2);
//  int g(a + b);
//  int h = 2.9; // d will be 2 because 2.9 will be truncated

//  cout << "e: " << e << ". The memory size is: " << sizeof(e) << endl;
//  cout << "f: " << f << ". The memory size is: " << sizeof(f) << endl;
//  cout << "g: " << g << ". The memory size is: " << sizeof(g) << endl;
//  cout << "h: " << h << ". The memory size is: " << sizeof(h) << endl;
//  cout << "" << endl;
//  // initialize uniform initialization

//  int i{2};
//  int j{5};
//  int k{a + b};
//  // int l{2.9}; // only here will the compiler give an error
//  cout << "i: " << i << endl;
//  cout << "j: " << j << endl;
//  cout << "k: " << k << endl;
//  // cout << "l: " << l << endl;
//  cout << "" << endl;
// */

// // data types

// // unit -> 0 to 4294967295 (4 bytes)
// // int -> -2147483648 to 2147483647 (4 bytes)
// // long -> -9223372036854775808 to 9223372036854775807 (8 bytes)
// // short -> -32768 to 32767 (2 bytes)
// // double -> 1.7E +/- 308 (precision 15 digits) (8 bytes)
// // float -> 3.4E +/- 38 (precision 7 digits) (4 bytes)
// // bool -> true or false (1 byte)
// // char -> -128 to 127 or 0 to 255 (1 byte)
// // wchar_t -> 1 wide character (2 or 4 bytes)
// // char16_t -> 1 unicode character (2 bytes)
// // string -> sequence of characters
// /*
// int value1{10};
// int value2{-300};
// cout << "value1: " << value1 << ". The memory size is: " << sizeof(value1) << endl;
// cout << "value2: " << value2 << ". The memory size is: " << sizeof(value2) << endl;
// long value3{4294967295};
// cout << "value3: " << value3 << ". The memory size is: " << sizeof(value3) << endl;
// short value4{32767};
// cout << "value4: " << value4 << ". The memory size is: " << sizeof(value4) << endl;
// double value5{1.7E+308};
// cout << "value5: " << value5 << ". The memory size is: " << sizeof(value5) << endl;
// float value6{3.4E+38f}; // f is needed to tell the compiler that it is a float
// cout << "value6: " << value6 << ". The memory size is: " << sizeof(value6) << endl;
// bool value7{true};
// cout << "value7: " << value7 << ". The memory size is: " << sizeof(value7) << endl;
// char value8{'a'};
// cout << "value8: " << value8 << ". The memory size is: " << sizeof(value8) << endl;
// wchar_t value9{'b'};
// cout << "The memory size is: " << sizeof(value9) << endl;
// string value11{"Hello World! Test"};
// cout << "value11: " << value11 << ". The memory size is: " << sizeof(value11) << endl;
// uint value10{4294967295};
// cout << "value10: " << value10 << ". The memory size is: " << sizeof(value10) << endl;
// */

// // chars
// /*
//     char value1{'a'};
//     char value2{65};
//     char value3{'b'};
//     char value4{66};

//     cout << "value1: " << value1 << ". The memory size is: " << sizeof(value1) << endl;
//     cout << "value2: " << value2 << ". The memory size is: " << sizeof(value2) << endl;
//     cout << "value3: " << value3 << ". The memory size is: " << sizeof(value3) << endl;
//     cout << "value4: " << value4 << ". The memory size is: " << sizeof(value4) << endl;
// */
// /*
//  // auto
//  auto value1{10};
//  auto value2{3.14};
//  auto value3{true};
//  auto value4{'a'};
//  auto value5{"Hello World!"};
//  auto value6{3.14f};

//  cout << "value1: " << value1 << ". The memory size is: " << sizeof(value1) << ". The type is: " << typeid(value1).name() << endl;
//  cout << "value2: " << value2 << ". The memory size is: " << sizeof(value2) << ". The type is: " << typeid(value2).name() << endl;
//  cout << "value3: " << value3 << ". The memory size is: " << sizeof(value3) << ". The type is: " << typeid(value3).name() << endl;
//  cout << "value4: " << value4 << ". The memory size is: " << sizeof(value4) << ". The type is: " << typeid(value4).name() << endl;
//  cout << "value5: " << value5 << ". The memory size is: " << sizeof(value5) << ". The type is: " << typeid(value5).name() << endl;
//  cout << "value6: " << value6 << ". The memory size is: " << sizeof(value6) << ". The type is: " << typeid(value6).name() << endl;
// */

// // reassignment and constants
// /*
//     int value1{10};
//     value1 = 20;
//     cout << "value1: " << value1 << endl;
//     const int value2{10};
//     // value2 = 20; // error: assignment of read-only variable "value2"
// */
// /*

// //// operators
//  int value1{10};
//  int value2{30};
//  int result1 = value1 + value2;
//  int result2 = value1 - value2;
//  int result3 = value1 * value2;
//  int result4 = value1 / value2;
//  int result5 = value1 % value2;
//  int result6 = value1 / 3; // result is 3 because it is truncated
//  cout << "result1: " << result1 << endl;
//  cout << "result2: " << result2 << endl;
//  cout << "result3: " << result3 << endl;
//  cout << "result4: " << result4 << endl;
//  cout << "result5: " << result5 << endl;
//  cout << "result6: " << result6 << endl;
// */

// // Precedence and Associativity
// /*
//     int a{6};
//     int b{3};
//     int c{8};
//     int d{9};
//     int e{3};
//     int f{2};
//     int g{5};

//     int result1 = a + b * c - d / e - f + g;
//     // 6 + 3 * 8 - 9 / 3 - 2 + 5
//     // 6 + 24 - 3 - 2 + 5
//     // 30 - 3 - 2 + 5
//     // 27 - 2 + 5
//     // 25 + 5
//     // 30

//     cout << "result1: " << result1 << endl;
// */
// /*
//  int a{10};
//  cout << "a: " << ++a << endl; // a is incremented before it is used
//  cout << "a: " << a++ << endl; // a is incremented after it is used
//  cout << "a: " << a << endl;

//  cout << "a: " << --a << endl; // a is decremented before it is used
//  cout << "a: " << a-- << endl; // a is decremented after it is used
//  cout << "a: " << a << endl;

//  int b{10};
//  b += 10; // b = b + 10
//  cout << "b: " << b << endl;
//  b -= 10; // b = b - 10
//  cout << "b: " << b << endl;
//  b *= 10; // b = b * 10
//  cout << "b: " << b << endl;
//  b /= 10; // b = b / 10
//  cout << "b: " << b << endl;
//  b %= 10; // b = b % 10
//  cout << "b: " << b << endl;
// */

// // format cout

// // flush
// // setw
// // right
// // setfill
// // boolalpha and noboolalpha force cout to print true or false for bools instead of 1 or 0
// // showpos and noshowpos force cout to print + or - before a number
// // uppercase and nouppercase force cout to print uppercase or lowercase letters
// // showbase and noshowbase force cout to print the base of a number (0x for hex, 0 for octal) basically the prefix of the number
// // showpoint and noshowpoint force cout to print the decimal point and trailing zeros for floating point numbers
// // fixed and scientific force cout to print floating point numbers in fixed or scientific notation
// // internal, left and right force cout to pad the output with spaces
// // dec, hex and oct force cout to print numbers in decimal, hexadecimal or octal format
// /*
// cout << "Hello, World!\n"
//      << endl
//      << flush;

// printNameAndAge("John", 20, "left");
// printNameAndAge("John", 20, "right");
// */

// /*
//  for (int i = 0; i < 10; i++)
//  {
//      cout << "for Loop iteration: " << i << endl;
//  }

//  bool done = false;
//  int j = 0;
//  while (!done)
//  {
//      cout << "while Loop iteration: " << j++ << endl;
//      if (j == 10)
//      {
//          done = true;
//      }
//  }

//  int k = 0;
//  do
//  {
//      cout << "do while Loop iteration: " << k++ << endl;
//  } while (k < 10);

// // arrays
//     int myArray[5]; // initialize an array with 5 elements, since it is empty the elements are initialized with junk data

//     for (int i = 0; i < 5; i++)
//     {
//         cout << "myArray[" << i << "] : " << myArray[i] << endl;
//     }

//     cout << "-----------------------------" << endl;

//     myArray[0] = 10;
//     myArray[1] = 20;
//     myArray[2] = 30;
//     myArray[3] = 40;
//     myArray[4] = 50;

//     for (int i = 0; i < 5; i++)
//     {
//         cout << "myArray[" << i << "] : " << myArray[i] << endl;
//     }

//     cout << "-----------------------------" << endl;
//     // this is really dangerous because it is out of bounds
//     // c++ does not do bound checking, so it will not throw an error, but it will just overwrite the next memory address. SO you don't know what you are overwriting
//     /* DO NOT DO THIS!!!
//     myArray[5] = 60;
//     myArray[6] = 70;
//     cout << "myArray[" << 5 << "] : " << myArray[5] << endl;
//     cout << "myArray[" << 6 << "] : " << myArray[6] << endl;
//     int test = myArray[6];
//     cout << "test: " << test << endl;
//  cout << "&myArray" << &myArray[0] << endl;
//  cout << "&myArray" << &myArray[1] << endl;
//  cout << "&myArray" << &myArray[2] << endl;
//  cout << "&myArray" << &myArray[3] << endl;
//  cout << "&myArray" << &myArray[4] << endl;
//  cout << "&myArray" << &myArray[5] << endl;

// const int birds[]{3, 2, 5, 10};
// cout << "birds[0]: " << birds[0] << endl;
// // birds[0] = 10; // this is not allowed because the array is const
// cout << "birds[0]: " << birds[0] << endl;
// */

// /*
//     // char arrays

//     char hello[6]{'H', 'e', 'l', 'l', 'o', '\0'}; // the null terminator is needed to tell the compiler that this is the end of the string

//     // this is still a string because the compiler will add the null terminator
//     char hello1[6]{
//         'H',
//         'e',
//         'l',
//         'l',
//         'o',
//     };
//     // this is not a string because the compiler will not add the null terminator
//     char notAString[5]{
//         'H',
//         'e',
//         'l',
//         'l',
//         'o',
//     };

//     cout << "hello: " << hello << endl;
//     cout << "hello1: " << hello1 << endl;
//     // the next one will print out junk
//     cout << "notAString: " << notAString << endl;
//     // for char arrays which are not a string you need to use a loop
//     for (char i : notAString)
//     {
//         cout << i;
//     }
//     cout << endl;

//     // also if you don't define the size of the array, the compiler will not add the null terminator!
//     char test[]{
//         'h',
//         'e',
//         'l',
//         'l',
//         'o',
//         '\0' // needs to be added manually
//     };
//     cout << "test: " << test << endl;

//     // here the compiler will add the null terminator
//     char helloWorld[]{"Hello World!"};

//     cout << "helloWorld: " << helloWorld << endl;

// */
// /*
//  //// pointers
//  int *p_number{}; // will initialize the pointer with nullptr
//  double *p_double{nullptr};

//  cout << "p_number: " << p_number << endl; // will print out 0
//  cout << "p_double: " << p_double << endl; // will print out 0

//  int number{10};
//  p_number = &number; // p_number will now point to the address of number
//  cout << "p_number: " << p_number << endl;
//  cout << "&number: " << &number << endl;
//  cout << "*p_number: " << *p_number << endl; // will print out 10
//  cout << "number: " << number << endl;       // will print out 10

//  *p_number = 20; // will change the value of number to 20
//  cout << "p_number: " << p_number << endl;
//  cout << "&number: " << &number << endl;
//  cout << "*p_number: " << *p_number << endl; // will print out 20
//  cout << "number: " << number << endl;       // will print out 20

// // pointers and char arrays
// // if you use a pointer with a char array then it is not editable!
// char *p_message{"Hello World!"}; // will throw a warning because it is a string literal ISO c++ forbids converting a string constant to char*
// cout << "p_message: " << p_message << endl;
// cout << "*p_message: " << *p_message << endl; // prints only the first character

// const char *p_message1{"Hello World!"}; // will not throw a warning because it is a const char*
// cout << "p_message1: " << p_message1 << endl;
// cout << "*p_message1: " << *p_message1 << endl; // prints only the first character

// // what if we want to modify the string?
// char message[]{"Hello World!"};
// cout << "message: " << message << endl;
// cout << "*message: " << *message << endl; // prints only the first character
// message[0] = 'J';
// cout << "message: " << message << endl;
// cout << "*message: " << *message << endl; // prints only the first character
// */
// /*
//  // Heap and Stack
//  {
//      int test = 10;
//      cout << "test: " << test << endl; // this will throw an error because test is out of scope
//  }
//  // stack vars are being destroyed when they go out of scope
//  // cout << "test: " << test << endl; // this will throw an error because test is out of scope

//  {
//      int *p_number = new int{20}; // this will allocate memory on the heap
//      // or in two steps
//      // int *p_number{nullptr};
//      // p_number = new int;
//      *p_number = 10;
//      cout << "*p_number: " << *p_number << endl;
//      cout << "p_number: " << p_number << endl;
//      delete p_number; // this will deallocate the memory on the heap
//      // it is really bad to call delete a second time on the same pointer, because it will cause undefined behavior
//      p_number = nullptr; // this will set the pointer to nullptr, so that others know that it is not pointing to anything
//      cout << "p_number: " << p_number << endl;
//      // cout << "*p_number: " << *p_number << endl;

//      // reuse the pointer
//      p_number = new int{30};
//      cout << "*p_number: " << *p_number << endl;
//      cout << "p_number: " << p_number << endl;
//      delete p_number; // this will deallocate the memory on the heap
//      p_number = nullptr;
//  }
// */

// // Dangling Pointers
// /*
// 1. A pointer that is uninitialized.
// 2. A pointer that points to a memory that has been deallocated (deleted pointer)
// 3. Multiple pointers pointing to the same memory // happens if you use nested pointers and then delete the first pointer
// */
// /*
// // Case 1 - Uninitialized Pointers - dangling pointer
//  int *p_number;
//  cout << "*p_number: " << *p_number << endl;
//  cout << "p_number: " << p_number << endl;
//  // solution: set the pointer to nullptr and check if it is nullptr before using it
// */

// /*
//  // Case 2 - Deleted Pointers - dangling pointer
//  int *p_number = new int{10};
//  cout << "*p_number: " << *p_number << endl;
//  cout << "p_number: " << p_number << endl;
//  delete p_number;                          // this will deallocate the memory on the heap
//  cout << "p_number: " << p_number << endl; // <- this is a dangling pointer
// // solution: set the pointer to nullptr
//  p_number = nullptr;
//  cout << "p_number: " << p_number << endl;

// */
// /*
//  // Case 3 - Multiple Pointers - dangling pointer
//  int *p_number = new int{10};
//  int *p_number1 = p_number;

//  cout << "*p_number: " << *p_number << endl;
//  cout << "p_number: " << p_number << endl;
//  cout << "*p_number1: " << *p_number1 << endl;
//  cout << "p_number1: " << p_number1 << endl;

//  delete p_number;                            // this will deallocate the memory on the heap
//  p_number = nullptr;                         // this will set the pointer to nullptr, so that others know that it is not pointing to anything
//  cout << "p_number: " << p_number << endl;   // this pointer is cleaned up, but "dangling"
//  cout << "p_number1: " << p_number1 << endl; // <- this is a dangling pointer
// // solution: check if the master pointer is nullptr before using the slave pointers
// */

// /*
// // memory leaks
// int *p_number{new int{67}};

// int number = 10;
// cout << "number: " << number << endl;
// cout << "*p_number: " << *p_number << endl;
// cout << "p_number: " << p_number << endl;

// p_number = &number; // this will cause a memory leak because the memory on the heap is not deallocated
// // now we have no way to deallocate the memory on the heap where we stored 67

// {
//     int *p_number_inner{new int{67}};
// }
// // this will cause a memory leak because the memory on the heap is not deallocated outside of the scope you don't have access to the pointer anymore
// */

// // dynamic arrays, are arrays which are allocated on the heap
// /*
// size_t size{10};

// double *p_salaries = new double[size]{}; // init with garbage values
// // important to understand, is that element based for loops will not work with pointers!
// // the array has decayed to a pointer, so the size is not known anymore
// int *p_students{new (std::nothrow) int[size]{}};
// double *p_scores{new (std::nothrow) double[size]{1, 2, 3, 4, 5}};

// if (p_scores)
// {
//     cout << "size of scores (it's a regular pointer): " << sizeof(p_scores) << endl;
//     cout << "size of scores (it's a regular pointer): " << sizeof(*p_scores) << endl;
//     for (size_t i = 0; i < size; i++)
//     {
//         cout << "p_scores[" << i << "]: " << p_scores[i] << " Alternative access - *(p_scores + " << i << "): " << *(p_scores + i) << endl;
//     }
// }

// delete[] p_salaries;
// p_salaries = nullptr;
// delete[] p_students;
// p_students = nullptr;
// delete[] p_scores;
// p_scores = nullptr;

// // static arrays vs dynamic arrays
// // static allocated on the stack
// // dynamic allocated on the heap
// // static works with std::size
// // dynamic does not work with std::size
// // static works with for (auto i : array)
// // dynamic does not work with for (auto i : array)

// int test[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// cout << "static works: " << std::size(test) << endl;
// // error:
// // cout << "dynamic " << std::size(p_scores) << endl;

// for (auto i : test)
// {
//     cout << "static works: " << i << endl;
// }

// // error:
// // for (auto i : p_scores)
// // {
// //     cout << "dynamic works: " << i << endl;
// // }
// */

// // modify data through references (aliasing)
// /*
// int int_value{45};
// double d_value{4.5};

// int &ref_int_value{int_value};
// double &ref_d_value{d_value};

// cout << "int_value: " << int_value << endl;
// cout << "ref_int_value: " << ref_int_value << endl;
// cout << "&int_value: " << &int_value << endl;
// cout << "&ref_int_value: " << &ref_int_value << endl;

// ref_int_value = 50;

// cout << "int_value: " << int_value << endl;
// cout << "ref_int_value: " << ref_int_value << endl;
// cout << "&int_value: " << &int_value << endl;
// cout << "&ref_int_value: " << &ref_int_value << endl;

// int_value = 60;

// cout << "int_value: " << int_value << endl;
// cout << "ref_int_value: " << ref_int_value << endl;
// cout << "&int_value: " << &int_value << endl;
// cout << "&ref_int_value: " << &ref_int_value << endl;
// */
// /*
//  // references vs. pointers

//  double d_value{4.5};
//  double *p_d_value{&d_value};  // pointer to d_value
//  double &ref_d_value{d_value}; // reference to d_value

//  cout << "d_value: " << d_value << endl;
//  cout << "p_d_value: " << p_d_value << endl;
//  cout << "*p_d_value: " << *p_d_value << endl;
//  cout << "&d_value: " << &d_value << endl;
//  cout << "&p_d_value: " << &p_d_value << endl;
//  cout << "ref_d_value: " << ref_d_value << endl;
//  cout << "&ref_d_value: " << &ref_d_value << endl;

//  // 1. Pointers need to be dereferenced
//  // 2. References cannot be null
//  // 3. A reference must be initialized
//  // 4. A reference cannot be changed to refer to another variable after initialization
//  // ? 5. References cannot be uninitialized

//  // 1. Pointers need to be dereferenced
//  *p_d_value = 10.5;
//  cout << "d_value: " << d_value << endl;
//  cout << "p_d_value: " << p_d_value << endl;
//  cout << "*p_d_value: " << *p_d_value << endl;
//  cout << "&d_value: " << &d_value << endl;
//  cout << "&p_d_value: " << &p_d_value << endl;
//  cout << "ref_d_value: " << ref_d_value << endl;
//  cout << "&ref_d_value: " << &ref_d_value << endl;

// // vs

// ref_d_value = 20.5;
// cout << "d_value: " << d_value << endl;
// cout << "p_d_value: " << p_d_value << endl;
// cout << "*p_d_value: " << *p_d_value << endl;
// cout << "&d_value: " << &d_value << endl;
// cout << "&p_d_value: " << &p_d_value << endl;
// cout << "ref_d_value: " << ref_d_value << endl;
// cout << "&ref_d_value: " << &ref_d_value << endl;
// */

// // references and const
// /*
// const int &ref_const_directly_value{10}; // this is a const reference
// int value{10};
// int &ref_value{value};
// const int &ref_const_value{value}; // this is a const reference to a non const variable

// cout << "value: " << value << endl;
// cout << "ref_value: " << ref_value << endl;
// cout << "ref_const_value: " << ref_const_value << endl;

// ref_value = 20; // this is allowed because ref_value is not const
// // can be modified through the reference
// cout << "value: " << value << endl;
// cout << "ref_value: " << ref_value << endl;
// cout << "ref_const_value: " << ref_const_value << endl;

// // but the const reference cannot be modified
// // ref_const_value = 30; // this is not allowed because ref_const_value is const
// */

// // char arrays and handle text data
// // c-strings => are not save and not easy to use with
// // std::string => are save and easy to use with

// /*
// // one definition rule
//     you cannot define the same variable and function twice in the same scope
// */

// // double test{};

// // Person person1{"John", 20};
// // person1.print_info();

// // }
// // function prototype - enables you to call a function before it is defined
// void enter_bar(uint age);

// int main()
// {
//     // Functions
//     enter_bar(20);
//     enter_bar(11);
//     return 0;
// }

// void enter_bar(uint age)
// {
//     if (age > 18)
//     {
//         cout << "You are allowed to enter the bar" << endl;
//     }
//     else
//     {
//         cout << "You are not allowed to enter the bar" << endl;
//     }
// }

// /*
// struct Point
// {
//     double m_x;
//     double m_y;
// };

// double addNumbers(double a, double b)
// {
//     return a + b;
// }
// */

// /*
// double addNumbers(double a, double b)
// {
//     return a + b;
// }
// */

// function

// prototype - a signature would not include the name the return type
// int max(int, int);

// int main()
// {
//     int result = max(10, 20);
//     cout << "result: " << result << endl;
//     return 0;
// }

// the crazy thing is now that you can define the function after the main function or literally anywhere else -> see some_other_file.cpp
// no import needed
// int max(int x, int y)
// {
//     return (x > y) ? x : y;
// }

/*
// pass by value
void say_age_value(int age)
{
    ++age;
    cout << "You are " << age << " years old. The &address: " << &age << endl;
}
// pass by pointer
void say_age_pointer(int *age)
{
    ++(*age);
    cout << "You are " << *age << " years old. The &address: " << &age << endl;
}

// pass by reference
void say_age_reference(int &age)
{
    ++age;
    cout << "You are " << age << " years old. The &address: " << &age << endl;
}

int main()
{
    int age{20};
    cout << "(Before say_age_value) You are " << age << " years old: The &address: " << &age << endl;
    say_age_value(age);
    cout << "(After say_age_value) You are " << age << " years old: The &address: " << &age << endl;
    cout << " ----------------- " << endl;

    cout << "(Before say_age_pointer) You are " << age << " years old: The &address: " << &age << endl;
    say_age_pointer(&age);
    cout << "(After say_age_pointer) You are " << age << " years old: The &address: " << &age << endl;

    cout << " ----------------- " << endl;
    cout << "(Before say_age_reference) You are " << age << " years old: The &address: " << &age << endl;
    say_age_reference(age);
    cout << "(After say_age_reference) You are " << age << " years old: The &address: " << &age << endl;
}
*/

// get output from a function, through a reference

void max_str(const string str1, const string str2, string &result)
{
    if (str1.length() > str2.length())
    {
        result = str1;
    }
    else
    {
        result = str2;
    }
}

int main()
{

    string str1{"Hello World!"};
    string str2{"Hello World! Test"};
    string result{};

    max_str(str1, str2, result);

    cout << "result: " << result << endl;

    return 0;
}