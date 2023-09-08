/*Advanced concepts: Class within classes*/
/*

Prerequisites: 
1. knowledge of class and inheritance
*/

/*

In C++, there are two types of relationships between two classes if they are connected:
	1. Kind of relationship  (supported by inheritance)
    2. Has a relationship (supported by composition or containership)
*/

/*

To represent relation between two components such as Car and Automobile, then we can use inheritance to represent it. They have a connection and due to this we can use inheritance and this is the reason they have a kind of relationship.

But in 'Has a' relationship we simply create objects of our existing class inside the new clss. 
For example, if there is a class called carburettor we can create an object of this class in the new class car as show below
*/
#include<iostream>
using namespace std;

class carburettor
{

};

class car
{   
    carburettor c;   //this is called containership
};

/*

NOTE: we were using containership in every class in which we define data member its just that until now they were built-in types. But now we are using user defined data types inside another user defined data type.
*/

/*continued in next file2.cpp*/