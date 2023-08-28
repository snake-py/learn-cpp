#include <iostream>
#include <typeinfo>
#include <iomanip>

using namespace std;

int addNumbers(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

void printNameAndAge(string name, int age, string alignment, int width = 10)
{
    if (alignment == "left")
    {
        cout << left;
    }
    else if (alignment == "right")
    {
        cout << right;
    }
    else
    {
        cout << "Invalid alignment" << endl;
    }
    cout << setw(width) << "name" << setw(width) << "age" << endl;
    cout << setw(width) << name << setw(width) << age << endl;
}

int main()
{
    /*
    cout << "Hello, World!\n";
    cout << "Hello, World!\n";
    if (20 > 18)
    {
        cout << "20 is greater than 18";
    }
    auto result = (10 <=> 20) > 0; // result is false
    */

    /*
        block comments
    */
    // normal comments

    // variables
    // int myNum = 5;            // Integer (whole number without decimals)
    // double myFloatNum = 5.99; // Floating point number (with decimals)
    // char myLetter = "D";      // Character
    // string myText = "Hello";  // String (text)
    // bool myBoolean = true;    // Boolean (true or false)
    // int x = 5;
    // int y = 6;
    // int sum = x + y;
    // int sumFromFunction = addNumbers(x, y);
    // cout << sum << endl;
    // cout << sumFromFunction << endl;
    // /* multi assignment
    // int x = 5, y = 6, z = 50;
    // cout << x + y + z;
    // */
    // /*
    // // constants
    // const int myNum = 15;  // myNum will always be 15
    // myNum = 10;  // error: assignment of read-only variable "myNum"
    // */
    // cout << "" << endl;
    // return 0;

    // Statements
    // int test = 3;
    // int firstNumber{3};
    // int secondNumber{7};
    // cout << firstNumber << endl;
    // cout << secondNumber << endl;
    // cout << firstNumber + secondNumber << endl;

    // // inputs
    // string name;
    // cout << "Type your name: ";
    // cin >> name;
    // cout << "Your name is: " << name << endl;

    // // fullname
    // string firstName;
    // string lastName;
    // cout << "Type your first name: ";
    // cin >> firstName;
    // cout << "Type your last name: ";
    // cin >> lastName;
    // cout << "Your full name is: " << firstName << " " << lastName << endl;

    // fullname with getline
    /*
        string fullName;
        int age;
        cout << "Type your full name: ";
        getline(cin, fullName);
        cout << "Type your age: ";
        cin >> age;
        cout << "Your full name is: "
             << fullName
             << " Your age is: "
             << age
             << endl;
    */
    /*
    // number system
    int a = 15;         // decimal
    int b = 017;        // octal
    int c = 0x0F;       // hexadecimal
    int d = 0b00001111; // binary

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    */
    /*
     // initializing variables
     // initialize assignment
     int a = 5;
     int b = 3;
     int c = a + b;
     int d = 2.9; // d will be 2 because 2.9 will be truncated
     cout << "a: " << a << endl;
     cout << "b: " << b << endl;
     cout << "c: " << c << endl;
     cout << "d: " << d << endl;
     cout << "" << endl;

     // initialize constructor
     int e(3);
     int f(2);
     int g(a + b);
     int h = 2.9; // d will be 2 because 2.9 will be truncated

     cout << "e: " << e << ". The memory size is: " << sizeof(e) << endl;
     cout << "f: " << f << ". The memory size is: " << sizeof(f) << endl;
     cout << "g: " << g << ". The memory size is: " << sizeof(g) << endl;
     cout << "h: " << h << ". The memory size is: " << sizeof(h) << endl;
     cout << "" << endl;
     // initialize uniform initialization

     int i{2};
     int j{5};
     int k{a + b};
     // int l{2.9}; // only here will the compiler give an error
     cout << "i: " << i << endl;
     cout << "j: " << j << endl;
     cout << "k: " << k << endl;
     // cout << "l: " << l << endl;
     cout << "" << endl;
    */

    // data types

    // unit -> 0 to 4294967295 (4 bytes)
    // int -> -2147483648 to 2147483647 (4 bytes)
    // long -> -9223372036854775808 to 9223372036854775807 (8 bytes)
    // short -> -32768 to 32767 (2 bytes)
    // double -> 1.7E +/- 308 (precision 15 digits) (8 bytes)
    // float -> 3.4E +/- 38 (precision 7 digits) (4 bytes)
    // bool -> true or false (1 byte)
    // char -> -128 to 127 or 0 to 255 (1 byte)
    // wchar_t -> 1 wide character (2 or 4 bytes)
    // char16_t -> 1 unicode character (2 bytes)
    // string -> sequence of characters
    /*
    int value1{10};
    int value2{-300};
    cout << "value1: " << value1 << ". The memory size is: " << sizeof(value1) << endl;
    cout << "value2: " << value2 << ". The memory size is: " << sizeof(value2) << endl;
    long value3{4294967295};
    cout << "value3: " << value3 << ". The memory size is: " << sizeof(value3) << endl;
    short value4{32767};
    cout << "value4: " << value4 << ". The memory size is: " << sizeof(value4) << endl;
    double value5{1.7E+308};
    cout << "value5: " << value5 << ". The memory size is: " << sizeof(value5) << endl;
    float value6{3.4E+38f}; // f is needed to tell the compiler that it is a float
    cout << "value6: " << value6 << ". The memory size is: " << sizeof(value6) << endl;
    bool value7{true};
    cout << "value7: " << value7 << ". The memory size is: " << sizeof(value7) << endl;
    char value8{'a'};
    cout << "value8: " << value8 << ". The memory size is: " << sizeof(value8) << endl;
    wchar_t value9{'b'};
    cout << "The memory size is: " << sizeof(value9) << endl;
    string value11{"Hello World! Test"};
    cout << "value11: " << value11 << ". The memory size is: " << sizeof(value11) << endl;
    uint value10{4294967295};
    cout << "value10: " << value10 << ". The memory size is: " << sizeof(value10) << endl;
    */

    // chars
    /*
        char value1{'a'};
        char value2{65};
        char value3{'b'};
        char value4{66};

        cout << "value1: " << value1 << ". The memory size is: " << sizeof(value1) << endl;
        cout << "value2: " << value2 << ". The memory size is: " << sizeof(value2) << endl;
        cout << "value3: " << value3 << ". The memory size is: " << sizeof(value3) << endl;
        cout << "value4: " << value4 << ". The memory size is: " << sizeof(value4) << endl;
    */
    /*
     // auto
     auto value1{10};
     auto value2{3.14};
     auto value3{true};
     auto value4{'a'};
     auto value5{"Hello World!"};
     auto value6{3.14f};

     cout << "value1: " << value1 << ". The memory size is: " << sizeof(value1) << ". The type is: " << typeid(value1).name() << endl;
     cout << "value2: " << value2 << ". The memory size is: " << sizeof(value2) << ". The type is: " << typeid(value2).name() << endl;
     cout << "value3: " << value3 << ". The memory size is: " << sizeof(value3) << ". The type is: " << typeid(value3).name() << endl;
     cout << "value4: " << value4 << ". The memory size is: " << sizeof(value4) << ". The type is: " << typeid(value4).name() << endl;
     cout << "value5: " << value5 << ". The memory size is: " << sizeof(value5) << ". The type is: " << typeid(value5).name() << endl;
     cout << "value6: " << value6 << ". The memory size is: " << sizeof(value6) << ". The type is: " << typeid(value6).name() << endl;
    */

    // reassignment and constants
    /*
        int value1{10};
        value1 = 20;
        cout << "value1: " << value1 << endl;
        const int value2{10};
        // value2 = 20; // error: assignment of read-only variable "value2"
    */
    /*

    //// operators
     int value1{10};
     int value2{30};
     int result1 = value1 + value2;
     int result2 = value1 - value2;
     int result3 = value1 * value2;
     int result4 = value1 / value2;
     int result5 = value1 % value2;
     int result6 = value1 / 3; // result is 3 because it is truncated
     cout << "result1: " << result1 << endl;
     cout << "result2: " << result2 << endl;
     cout << "result3: " << result3 << endl;
     cout << "result4: " << result4 << endl;
     cout << "result5: " << result5 << endl;
     cout << "result6: " << result6 << endl;
    */

    // Precedence and Associativity
    /*
        int a{6};
        int b{3};
        int c{8};
        int d{9};
        int e{3};
        int f{2};
        int g{5};

        int result1 = a + b * c - d / e - f + g;
        // 6 + 3 * 8 - 9 / 3 - 2 + 5
        // 6 + 24 - 3 - 2 + 5
        // 30 - 3 - 2 + 5
        // 27 - 2 + 5
        // 25 + 5
        // 30

        cout << "result1: " << result1 << endl;
    */
    /*
     int a{10};
     cout << "a: " << ++a << endl; // a is incremented before it is used
     cout << "a: " << a++ << endl; // a is incremented after it is used
     cout << "a: " << a << endl;

     cout << "a: " << --a << endl; // a is decremented before it is used
     cout << "a: " << a-- << endl; // a is decremented after it is used
     cout << "a: " << a << endl;

     int b{10};
     b += 10; // b = b + 10
     cout << "b: " << b << endl;
     b -= 10; // b = b - 10
     cout << "b: " << b << endl;
     b *= 10; // b = b * 10
     cout << "b: " << b << endl;
     b /= 10; // b = b / 10
     cout << "b: " << b << endl;
     b %= 10; // b = b % 10
     cout << "b: " << b << endl;
    */

    // format cout

    // flush
    // setw
    // right
    // setfill
    // boolalpha and noboolalpha force cout to print true or false for bools instead of 1 or 0
    // showpos and noshowpos force cout to print + or - before a number
    // uppercase and nouppercase force cout to print uppercase or lowercase letters
    // showbase and noshowbase force cout to print the base of a number (0x for hex, 0 for octal) basically the prefix of the number
    // showpoint and noshowpoint force cout to print the decimal point and trailing zeros for floating point numbers
    // fixed and scientific force cout to print floating point numbers in fixed or scientific notation
    // internal, left and right force cout to pad the output with spaces
    // dec, hex and oct force cout to print numbers in decimal, hexadecimal or octal format
    /*
    cout << "Hello, World!\n"
         << endl
         << flush;

    printNameAndAge("John", 20, "left");
    printNameAndAge("John", 20, "right");
    */

    /*
     for (int i = 0; i < 10; i++)
     {
         cout << "for Loop iteration: " << i << endl;
     }

     bool done = false;
     int j = 0;
     while (!done)
     {
         cout << "while Loop iteration: " << j++ << endl;
         if (j == 10)
         {
             done = true;
         }
     }

     int k = 0;
     do
     {
         cout << "do while Loop iteration: " << k++ << endl;
     } while (k < 10);

    // arrays
        int myArray[5]; // initialize an array with 5 elements, since it is empty the elements are initialized with junk data

        for (int i = 0; i < 5; i++)
        {
            cout << "myArray[" << i << "] : " << myArray[i] << endl;
        }

        cout << "-----------------------------" << endl;

        myArray[0] = 10;
        myArray[1] = 20;
        myArray[2] = 30;
        myArray[3] = 40;
        myArray[4] = 50;

        for (int i = 0; i < 5; i++)
        {
            cout << "myArray[" << i << "] : " << myArray[i] << endl;
        }

        cout << "-----------------------------" << endl;
        // this is really dangerous because it is out of bounds
        // c++ does not do bound checking, so it will not throw an error, but it will just overwrite the next memory address. SO you don't know what you are overwriting
        /* DO NOT DO THIS!!!
        myArray[5] = 60;
        myArray[6] = 70;
        cout << "myArray[" << 5 << "] : " << myArray[5] << endl;
        cout << "myArray[" << 6 << "] : " << myArray[6] << endl;
        int test = myArray[6];
        cout << "test: " << test << endl;
     cout << "&myArray" << &myArray[0] << endl;
     cout << "&myArray" << &myArray[1] << endl;
     cout << "&myArray" << &myArray[2] << endl;
     cout << "&myArray" << &myArray[3] << endl;
     cout << "&myArray" << &myArray[4] << endl;
     cout << "&myArray" << &myArray[5] << endl;

    const int birds[]{3, 2, 5, 10};
    cout << "birds[0]: " << birds[0] << endl;
    // birds[0] = 10; // this is not allowed because the array is const
    cout << "birds[0]: " << birds[0] << endl;
    */

    /*
        // char arrays

        char hello[6]{'H', 'e', 'l', 'l', 'o', '\0'}; // the null terminator is needed to tell the compiler that this is the end of the string

        // this is still a string because the compiler will add the null terminator
        char hello1[6]{
            'H',
            'e',
            'l',
            'l',
            'o',
        };
        // this is not a string because the compiler will not add the null terminator
        char notAString[5]{
            'H',
            'e',
            'l',
            'l',
            'o',
        };

        cout << "hello: " << hello << endl;
        cout << "hello1: " << hello1 << endl;
        // the next one will print out junk
        cout << "notAString: " << notAString << endl;
        // for char arrays which are not a string you need to use a loop
        for (char i : notAString)
        {
            cout << i;
        }
        cout << endl;

        // also if you don't define the size of the array, the compiler will not add the null terminator!
        char test[]{
            'h',
            'e',
            'l',
            'l',
            'o',
            '\0' // needs to be added manually
        };
        cout << "test: " << test << endl;

        // here the compiler will add the null terminator
        char helloWorld[]{"Hello World!"};

        cout << "helloWorld: " << helloWorld << endl;

    */

    return 0;
}
