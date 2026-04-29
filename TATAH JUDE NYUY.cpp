#include <iostream>
using namespace std;

// Function to print the diamond
void drawDiamond(int n){
   // Upper half (including middle line)
   for (int i = 1; i <= n; i++){
     // Print spaces
     for (int j = 1; j <= n - i; j++){
        cout << " ";
     }
     // Print stars
     for (int k = 1; k <= (2 * i - 1); k++){
        cout << "*";
     }
     cout << endl;
   }

   // Lower half
   for (int i = n - 1; i >= 1; i--){
     // Print spaces
     for (int j = 1; j <= n - i; j++){
        cout << " ";
     }
     // Print stars
     for (int k = 1; k <= (2 * i - 1); k++){
        cout << "*";
     }
     cout << endl;
   }
}

int main(){
    int size;

    // Prompt user
    cout << "Enter the size of the diamond (number of rows for upper half): ";
    cin >> size;

    // Call function
    drawDiamond(size);

    return 0;
}
