/** \file lab4.cpp
 *  @todo
 */
#include <iostream>
#include <assert.h>

using namespace std;

//Prototypes
void enterValues(double nums[], const int size);
/**
 * 
 */
int main(){
    const int SIZE = 12;
    double nums[SIZE];
    int choice;
    do{
        cout << "\n1)Enter values (-1.9 -- 2.5)";
        cout << "\n2) Calc. avg. of nevagtive";
        cout << "\n0) Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        enterValues(nums, SIZE);
            break;
        case 2:
            break;
        case 0:
            break;
    
        default:
        cerr << "\nWrong choice";
            break;
        }
    }while(choice !=0);
}

/**
 * What it does...
 * @param nums ..
 * @param size ...
 */
void enterValues(double nums[], const int size){
    for(int i=0; i<size; i++){
        cout << "\nEnter value at " << i << ": ";
        cin >> nums[i];
    }
}