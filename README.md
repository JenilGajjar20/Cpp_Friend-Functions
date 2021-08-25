
# C++ Friend Function

A friend function is defined as a function that can access private, protected and a public member of a class. 
It is a function that is specified outside a class.

The friend function is declared using the **friend** keyword inside the body of the class.

By using the keyword **'friend'**, compiler knows that the given function is a friend function.

### Properties of friend function
- The function is not in the scope of the class to which it has been declared a friend.
- It cannot be invoked using the object as it is not in the scope of that class.
- We can invoke it like any normal function of the class.
- Friend function have objects as arguments.
- It cannot access the member names directly and has to use dot membership operator and use an object name with the member name.
- We can declare it either in the 'public' or 'private' part.

## What is Forward Declaration?
Forward Declaration refers to the beforehand declraration of the syntax or the signature of an identifier, function, class, variable, etc. prior to its usage.
```
// Forward Declaration
void sum(int, int);

// Usage of the sum
void sum(int a, int b)
{
  // some code
}
```
In C++, forward declarations are usually used for classes.
```
// Forward Declaration
class A;

// Definition of class A
class A
{
  // some code
};
```
In above example, the class is predefined before its use so that it can be called and used by other classes that are defined before this.

