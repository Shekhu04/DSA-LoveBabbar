#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int row = 1;
    while(row<=n){

        //Printing Space
        int space = n - row;
        while(space){
            cout << "_";
            space = space - 1;
        }

        //printing Stars
        int col = 1;
     
        while(col <= row){ 
            cout << "*" ;
            col = col + 1;
        }
        cout << endl;
        row++;
    }
}
