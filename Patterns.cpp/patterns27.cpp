#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int row = 1;
    while(row<=n){

        //Printing Space (1st triangle)
        int space = n - row;
        while(space){
            cout << " ";
            space = space - 1;
        }

        //printing 2nd triangle
        int col = 1;
        while(col <= row){ 
            cout << col;
            col++;
        }

        //Printing 3rd triangle
        int start = row - 1;
        while(start){
            cout << start;
            start--;
        }
        
        cout << endl;
        row++;
    }
}
