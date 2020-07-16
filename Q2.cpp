/*Problem: Rotate an array of n elements to the right by k steps. For example, with n = 7 and k = 3, the
array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4]. How many different ways do you know to solve this
problem?*/

/* Algorithm
1. create array 'original' and fill it from 1-n.
2. create array 'temp' and fill it with (n-k)th tk nth element.
3. create array 'reverse' and fill it's first k elements with temp.
*/

#include <iostream>

using namespace std;

int main() {
    //initialize n and k
    int n,k;
    cout<<"Enter n"<<"\n";
    cin>>n;
    cout<<"Enter k"<<"\n";
    cin>>k;

    //declare arrays
    //1. create array 'original' and fill it from 1-n.
    int original[n];
    for(int i=0; i<n; i++) {
        original[i] = i+1;
    }

    //2. create array 'temp' and fill it with (n-k)th tk nth element.
    int temp[k];
    for(int i=0; i<k; i++) {
        temp[i] = original[n-k+i];
    }

    //3. create array 'reverse' and fill it's first k elements with temp.
    int rotate[n];
    //fill in the contents of array temp
    for(int i=0; i<k; i++) {
        rotate[i] = temp[i];
    }
    //fill in the rest of elements
    for(int i = k, j = 1; i<n; i++, j++) {
        rotate[i] = j;
    }

    //Display
    cout<<"___________________"<<"\n"<<"Original Array"<<"\n";
    for(int i : original) {
        cout<<i<<" ";
    }
    cout<<"\n"<<"Rotated Array"<<"\n";
    for(int i: rotate) {
        cout<<i<<" ";
    }
}