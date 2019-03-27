#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main()
{   

    const int MIN_VALUE = 1;
    const int MAX_VALUE = 6;

    int die1,die2;
    int count = 0;//counter, dont forget to set this to zero.

    unsigned seed = time(0);

    srand(seed);


    cout<<"Rolling the dice..six times \n";
    
   
 for(int i =0; i<6;i++)
 {
      die1 = (rand()%(MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
      die2 = (rand()%(MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;

     cout<<"value of die 1 is"<<die1<<endl;
     cout<<"value of die 2 is"<<die2<<endl;
     cout<<endl;
 }

cout<<"Now, we keep rolling until the dice are the same"<<endl;

do{
    die1 = (rand()%(MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
    die2 = (rand()%(MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
    cout<<"Die 1: "<<" "<<die1<<" Die 2: "<<die2<<endl;
    count++;

}
while(die1 != die2);
{
cout<<"We counted "<<count<<" times"<<endl;    
cout<<"To finally get a different value."<<endl;
cout<<"The repeated number was "<<die1<<endl;
}

cout<<"The dice are now equal"<<endl;



return 0;
}

