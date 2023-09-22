
## C Program – Basic

C language is the mother language of all programming languages. Understanding and learning C builds a strong programming base.

To be an expert programmer, practicing along with learning is a must. It is the best way to improve.

Their are many websites that can help you to practice and improve your skills to solve problems. This repository contains GeeksforGeeks C Programming Examples (basic). This repository is mainly for beginners. 
## Practice problems

* C Hello World Program
* C Program to Print Your Own Name 
* C Program to Print an Integer Entered By the User
* C Program to Add Two Numbers
* C Program to Check Whether a Number is Prime or Not
* C Program to Multiply two Floating-Point Numbers 
* C Program to Print the ASCII Value of a Character
* C Program to Swap Two Numbers
* C Program to Calculate Fahrenheit to Celsius
* C Program to Find the Size of int, float, double, and char
* C Program to Add Two Complex Numbers 
* C Program to Print Prime Numbers From 1 to N 
* C Program to Find Simple Interest
* C Program to Find Compound Interest
* C Program for Area And Perimeter Of Rectangle 
## Hello World

This is where we start. We'll create a simple program that will print "Hello World!" as output. No input. It's basically used to show the basic syntax of C language.

We start with ```#include <stdio.h>```

Here ```#include``` is a pre-processor directive that includes the header file ```<stdio.h>```\
To perform most commonly needed tasks, there is standard library of functions. They are declared in header files. ```<stdio.h>``` stands for standard input and output.

Then comes ```int main()```. It's the main function where exicution starts. In between ```{ }``` is the body of main function. 

```printf(" ");``` is for printing. Here printing means that it will be displayed as output. As we wrote ```printf("Hello World!");``` we'll get "Hello World!" as the output. We must put ```;``` after every line in the body.

```return 0;``` ends the main function and returns the value 0.


## Print Your Own Name

Let's print our beautiful name. There is many ways to solve one problem. Trying new ways can help you test your abilities.

In simple way we can print our name using ```printf("");```

We can also solve this using ```scanf("");``` This will take inputs from user. We used 2 array whice is a collection of elements having the same data type. Here data type of array is char (character).

After printing "Enter the name : " we took users name as input by ```scanf("%s%s", &first_name, &second_name);``` Here %s indicates strings.

Next, ```printf("The name : %s %s", first_name, second_name);``` will display users name.




## Print an Integer

For the ```int``` data type format specifier is %d

After scanning the input, scanf stores that input somewhere. To store this input, scanf needs to known the memory location of a variable.  ```&variable``` is the address of variable. 

```scanf("%d", &a);``` will thake an integer entered by the user.

## Add Two Numbers

Here we declared 3 integer variable in ```int``` data type. Two integer variables are for the user to input 2 numbers. We will do the sum operation of two input values. Then put the value on the last variable (sum). Now we will print the value of sum using ```%d``` and the address will be ```sum```
## Prime Number

We'll be using for loop and if else statement.

At first we will take a integer value as input. We also declared a integer variable (flag) with the value 0.

As we don't need to devide the input by 1, our loop will start at 2. We can continue the loop till the number of loop is same as the input. But if we understand maths properly, we'll see that we can end the loop after it becames same as the value (input/2)

In the loop we will put an if statement. The input will be devided by i. If the reminder is 0 then the value of ```flag``` will be chaged. When this if staement will work, it'll break the loop. 

Next another if else statement. If the value of ```flag``` is same as we assigned then the input in a Prime Number. 
 
##  Multiply two Point Numbers

Let's take 2 float variables. Now, we'll assign the value of the multiplication of them to another float variable. Then print the product.
## ASCII Value
We'll take character variable as input. Then print the ASCII Value by using format specifier %d for ```int``` data type.

## Swap
Let say we have two user input integer variables x and y.
Let's assign the value of the sum of them in y. Now, subtract x from y and assign that in x. Again, subtract x from y and assign that in y. Now, print them. Swap is done.
## Fahrenheit to Celsius
Take a float variable as Fahrenheit by user. Now use formula for Fahrenheit to Celsius. 

```celsius = (((fahrenheit-32)/9)*5);```
## Size of

To print the size of any data types we use ```sizeof()``` operator. But we must remember that to print the size which is a integer variable, format specifier is %d
## Add Two Complex Numbers
Complex number has 2 parts. One is the real part and another is imaginary. We can always express imaginary part as i (square root of -1).
So, we will take 2 real numbers as input and then will follow the sum formula like we did before. As the output we will print i (square root of -1) with along the real number.
## Print Prime Numbers
We already wrote code to check the prime number. Now we'll print prime numbers in a fixed range 1 to N. N will be given by the user.

We'll declare a integer variable (flag) with the value 0 like before. Use the nested loop. Inner loop will check if the number is prime or not. If the number is not prime number then the value of the flag will be turned into 1. so, if the number is prime number the value of flag will not change.

When the inner loop ends use if statement. If ```flag==0``` then print the number. After that set the value of flag to it's original value. So that if the value of flag is changed (as the number isn't prime number) it doesn't stay changed, in the inner loop. 

That means, the outer loop will print the number if the value of flag is unchanged.
## Simple Interest

Let's declare the variebles in data type float.\
P = Principal Amount\
I = Simple Interest \
R = Rate of Interest per year as a percent; R = r * 100\
t = Time Periods involved (in year)

Follow the formula I = P * r * t



## Compound Interest

Let's declare the variebles in data type ```float```\
P = Principal Amount\
C = Compound Interest\
R = Rate of Interest per year as a percent; R = r * 100\
t = Time Periods involved (in year)

Follow the formula C = P(1 + R/100)^t - P

Use ```pow(x,y)``` funtion.
## Area And Perimeter Of Rectangle

Declare variebles in ```int``` data type.

Follow the formula : \
Area = length * width\
Perimeter = 2 * (length + width)
## URL

https://www.geeksforgeeks.org/c-programming-examples/
