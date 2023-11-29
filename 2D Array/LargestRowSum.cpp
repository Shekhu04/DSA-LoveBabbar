#include<iostream>
using namespace std;

int largestRowSum(int arr [][3], int row, int col) {
    int maxi = INT8_MIN;
    int rowIndex = -1;

    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        
        if (sum > maxi) {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return rowIndex;
}

void printSum(int arr[][3], int row, int col) {
    cout << "Printing sum" << endl;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main () {

    //create 2d array
    int arr[3][3]; 

    
    cout << "Enter the elements" << endl;

    //Taking input -> row wise input
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Printing the arrays" << endl;

    //Printing
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

   printSum(arr,3,3); 

   cout << "Max row is at index " << largestRowSum(arr,3,3) << endl;

   return 0;
}
