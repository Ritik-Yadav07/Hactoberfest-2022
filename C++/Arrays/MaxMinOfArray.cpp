//Program to find the max and min element of the array.

#include<bits.stdc++.h>
using namespace std;

void readArray(int array[], int size){

    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
}

void findMinMax(int array[], int size){
    
    //using inbulit sort method
    
   sort(array,array+size);
    cout<<"Minimum Element in given array is : "<<array[0]<<endl;
    cout<<"Maximum Element in given array is : "<<array[size-1]<<endl;
    
}

int main(){

    int array[5];
    readArray(array, 5);

    findMinMax(array, 5);

    return 0;
}
