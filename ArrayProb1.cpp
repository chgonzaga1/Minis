/* Write a program that lets the user enter ten values into an array. The problem should then
display the largest and smallest values stored in the array */
#include<iostream>
using namespace std;
int findHighest(int [],int);//put a bracket here
const int SIZE = 10;
void getArrayValues(int [],int);//Get the values

int main()
{
    int numArray[SIZE];
    int values;
    int highest;

    getArrayValues(numArray, SIZE);

    highest = findHighest(numArray,SIZE);//no need to put []
    cout<<"Highest Value is "<<highest<<endl;


    return 0;
}

//Beautiful
int findHighest(int ar[], int size)//put names
{
    int highest = ar[0];//set to zero first
    for(int i = 0; i < size; i++)
    {
        if(ar[i] > highest)
        highest = ar[i];
    }


    return highest;
}

//Awesome :) it worked
void getArrayValues(int array[], int size)
{

    cout<<"Please enters values and we will find the smallest and the largest value in the array"<<endl;
    
    for(int i = 0; i <size; i++) //I have to put the array variable in the cin!
    {
        cout<<"Array No."<<(i+1)<<" ";
        cin>>array[i];//dont put SIZE, it's suppose to be variable i here. 
    }

    cout<<"The Array Values are "<<endl;
    
    for(int i =0; i<size; i++)
    cout<<array[i]<<endl;//i should be placed inside the bracket



}

/* NOTES
Makes sure you put the right integer variables and the correct names 
Lets work on find the lowest. It seems that using arrays as function arguments are automatic reference
*/ 