/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{

    //int i = 1116; //for testing
    
    //cout<<i<<endl; //for testing
    for (int i = 9999; i > -1; i--) {
        //cout<<i<<endl;
        int numDigits = 0;
        bool armstrong = false;
        int j = i;
        int h = i;
        
        int digit1 = 0;
        int digit2 = 0;
        int digit3 = 0;
        int digit4 = 0;
        
        
        if (j != 0) {
            ++numDigits;
            j = j/10;
            
            //cout<<j<<endl; //for testing
            //cout<<"number of digits "<<numDigits<<endl; //for testing
            
            if (j != 0) {
                ++numDigits;
                j = j/10;
                
                //cout<<j<<endl; //for testing
                //cout<<"number of digits "<<numDigits<<endl; //for testing
                
                if (j != 0) {
                    ++numDigits;
                    j = j/10;
                    
                    //cout<<j<<endl; //for testing
                    //cout<<"number of digits "<<numDigits<<endl; //for testing
                    
                    if (j != 0) {
                        ++numDigits;
                        j = j/10;
                        
                        //cout<<j<<endl; //for testing
                        //cout<<"number of digits "<<numDigits<<endl; //for testing
                        
                    }
                }
            }
        }
        
        for (int g = 1; g < 5; g++) {
            int place = h % 10;
            h = h / 10;
        
            if (g == 1){
                //cout << "Ones place value is: " << place << endl;
                digit1 = place;
            }
            else if(g == 2){
                //cout << "Tens place value is: " << place << endl;
                digit2 = place;
            }
            else if(g == 3){
                //cout << "Hundredths place value is: " << place << endl;
                digit3 = place;
            }
            else if(g == 4){
                //cout << "Thousands place value is: " << place << endl;
                digit4 = place;
            }
        } 
        
        //cout<<"number of digits "<<numDigits<<endl; //for testing

        double sum = 0;

        if (numDigits == 1) {
            sum = pow(digit1 , numDigits);
        }

        else if (numDigits == 2) {
            sum = pow(digit1 , numDigits) + pow(digit2 , numDigits);
        }

        else if (numDigits == 3) {
            sum = pow(digit1 , numDigits) + pow(digit2 , numDigits) + pow(digit3 , numDigits);
        }

        else if (numDigits ==4) {
            sum = pow(digit1 , numDigits) + pow(digit2 , numDigits) + pow(digit3 , numDigits) + pow(digit4 , numDigits);
        }
        
       //cout<<"sum "<<sum<<endl;

        if (sum == i) {
            armstrong = true;
        }

        if (armstrong == true) {
            cout<<i<<" is an Armstrong number!"<<endl;
        }

    }
    
    

    return 0;
}
