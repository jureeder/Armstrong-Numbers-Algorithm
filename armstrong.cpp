/******************************************************************************

Written by Juliette Reeder
2/11/23
                                  
*******************************************************************************/

#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {
  
    for (int i = 9999; i > -1; i--) {
        int numDigits = 0;
        int j = i;
        int h = i;
        
        int digit1 = 0;
        int digit2 = 0;
        int digit3 = 0;
        int digit4 = 0;
        
        //determining the number of digits
        while(j > 0) {
            ++numDigits;
            j = j / 10;
        }
        
        //finding the value of each digit
        for (int g = 1; g < 5; g++) {
            int place = h % 10;
            h = h / 10;
        
            if (g == 1){
                digit1 = place;
            }
            else if(g == 2){
                digit2 = place;
            }
            else if(g == 3){
                digit3 = place;
            }
            else if(g == 4){
                digit4 = place;
            }
        } 
        
        //creating the sum
        double sum = 0;
        sum = pow(digit1 , numDigits) + pow(digit2 , numDigits) + pow(digit3 , numDigits) + pow(digit4 , numDigits);
        
        //determine the number is an Armstrong number and printing
        if (sum == i) {
            cout<<i<<" is an Armstrong number!"<<endl;
        }
    }
    return 0;
}
