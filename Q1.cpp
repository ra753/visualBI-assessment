/*Write a Program to efficiently generate and compute the age of people. You can write in any
comfortable language you prefer.
Input: Ages of Different people (Eg: 10, 20, 30, 40, 45, 50, 60)
Output:
Age Group Total number of People
1-10 1
11-20 1
21-30 1
31-40 1
41-50 2
51-60 1
61-70 0
71-80 0
81-90 0
91-100 0
*/

#include<iostream>

using namespace std;

int main() 
{
    //array age_index has 10 elements each corrosponding to a age group to store their respective counts.
    int age_index[10] = {0,0,0,0,0,0,0,0,0,0}; 

    //taking input
    cout<<"Please enter ages to create the index:"<<"\n"<<"Enter 0 to stop"<<"\n";

    //run a loop to input ages of n people
    while(1) {
        int age;
        cin>>age;
        if(age==0) {
            break;
        }
        //uisng if-else increment age_index element corrosponding to the age group entered
        else {
            if(age > 0 && age <=10) {
                age_index[0]++;
            }
            else if(age > 10 && age <=20) {
                age_index[1]++;
            }
            else if(age > 20 && age <=30) {
                age_index[2]++;
            }
            else if(age > 30 && age <=40) {
                age_index[3]++;
            }
            else if(age > 40 && age <=50) {
                age_index[4]++;
            }
            else if(age > 50 && age <=60) {
                age_index[5]++;
            }
            else if(age > 60 && age <=70) {
                age_index[6]++;
            }
            else if(age > 70 && age <=80) {
                age_index[7]++;
            }            
            else if(age > 80 && age <=90) {
                age_index[8]++;
            }
            else if(age > 90 && age <=100) {
                age_index[9]++;
            }            
        }
    }

    //Printing result
    int lower_limit = 0, upper_limit = 10;
    cout<<"_____________________\n"<<"Age Group"<<"   "<<"Total number of people"<<"\n";

    //using a for loop to display the contents of age_index array
    for(int i = 0; i<=9; i++) {
        cout<<lower_limit<<"-"<<upper_limit<<"            "<<age_index[i]<<"\n";
        lower_limit += 10;
        upper_limit += 10;
    }
}