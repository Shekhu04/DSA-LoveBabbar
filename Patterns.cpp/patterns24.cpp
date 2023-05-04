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
            cout << " ";
            space = space - 1;
        }

        //printing Stars
        int col = 1;
        while(col <= row){ 
            int num = row;
            cout << num;
            num++;
            col++;
        }
        cout << endl;
        row++;
    }
}


/*
4
   1
  22
 333
4444
*/
