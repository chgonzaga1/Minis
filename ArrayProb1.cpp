/* Write a program that lets the user enter ten values into an array. The problem should then
display the largest and smallest values stored in the array */
#include<iostream>
using namespace std;

void getArrayValues(int [],int);//Get the values
int findHighest(int [],int);//put a bracket here
int findLowest(int [],int);
const int SIZE = 10;

int main()
{
    int numArray[SIZE];
    int highest;
    int lowest;

    getArrayValues(numArray, SIZE);
    highest = findHighest(numArray,SIZE);//no need to put []
    lowest = findLowest(numArray,SIZE);

    cout<<"The highest value in the array is "<<highest<<endl;
    cout<<"The lowest value in the array is "<<lowest<<endl;
    cout<<"Goodbye"<<endl;

    return 0;
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

    cout<<"The array values you typed:  "<<endl;
    for(int i =0; i<size; i++)
    cout<<array[i]<<" ";//i should be placed inside the bracket

    cout<<endl;


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

int findLowest(int ar[], int size)//put names
{
    int lowest = ar[0];//set to zero first
    for(int i = 0; i < size; i++)
    {
        if(ar[i] < lowest)
        lowest = ar[i];
    }


    return lowest;
}

/* NOTES
Makes sure you put the right integer variables and the correct names 
Lets work on find the lowest. It seems that using arrays as function arguments are automatic reference
*/ 

