/** \file lab4.cpp
 *  @todo
 */
#include <iostream>
#include <assert.h>

using namespace std;

//Prototypes
void enterValues(double nums[], const int size, const double r_min, const double r_max);
double avgOfNeg(const double nums[], const int size);
/**
 * Start of the program
 */
int main(){
    const double R_MIN = -1.9;
    const double R_MAX = 2.5;
    const int SIZE = 12;
    double nums[SIZE];
    int choice;

    do{
        cout << "\n1)Enter values [" << R_MIN << " -- " <<  R_MAX << "] ";
        cout << "\n2) Calc. avg. of nevagtive";
        cout << "\n0) Exit";
        cout << "\nEnter choice: ";
        bool first = false;
        cin >> choice;

        switch (choice)
        {
        case 1:
            enterValues(nums, SIZE, R_MIN, R_MAX);
            first = true;
            break;
        case 2:
            if(!first){
                cerr << "\nMust use option 1 first!\n";
            } else {
                cout << "\nThe avg of neg. are: " << avgOfNeg(nums, SIZE) << endl;
            }
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
 * Enters values in a given array.
 * Only valid range of numbers are given by the argument r_min and r_max and the are inclusive.
 * 
 * @param nums the array
 * @param size size of the array
 * @param r_min minimum array of the array value
 * @param r_max Maximun range of the array value
 */
void enterValues(double nums[], const int size, const double r_min, const double r_max){
    assert(size > 0);
    assert(r_max >= r_min);

    for(int i=0; i<size; i++){
        do{
            cout << "\nEnter value at [" << r_min << " -- " <<  r_max << "] " << i << ": ";
            cin >> nums[i];
        }while (nums[i] < r_min || nums[i] > r_max);
    }
}

/**
 * Returns the average of the negative numbers of a given array
 * 
 * @param nums the array
 * @param size the size of the array
 * @return returns the average of the negative numbers
 */
double avgOfNeg(const double nums[], const int size){
    assert(size > 0);

    double sum = 0;
    int count = 0;

    for (int i =0; i < size; i++){
        if (nums[i] < 0) {
            sum += nums[i];
            count++;
        }
    }
    if (count > 0){
        sum /= count;
    }

    return sum;
}