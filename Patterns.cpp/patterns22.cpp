#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int row = 1;
    while(row<=n){

        //Printing Space
        int space = row - 1;
        while(space){
            cout << " ";
            space = space - 1;
        }

        //printing Stars
        int col = 1;
        while(col <= n - row + 1){ 
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}
