#include <iostream>
#include <assert.h>
using namespace std;
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