#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    char menuSelection;
    int inputLength, userInput, dig1, dig2, dig3, reverseInput, subReversal, reverseSubReversal, magicNumber;
    
    //string menuLength;
    
    do
    {
        cout << "Please select an operation: " << endl;
        cout << "A: Display an example " <<  endl;
        cout << "B: Try it out yourself! " <<  endl;
        cout << "C: Exit " << endl;
        cin >> menuSelection;
        
            switch (menuSelection)
            {
                case ('a'):
                {
                    userInput = 901;
                    dig1 = userInput/100;
                    dig2 = (userInput%100)/10;
                    dig3 = userInput%10;
                    reverseInput = (dig3*100 + dig2*10 + dig1);
                    subReversal = userInput - reverseInput;
                    dig1 = subReversal/100;
                    dig2 = (subReversal%100)/10;
                    dig3 = subReversal%10;
                    reverseSubReversal = (dig3*100 + dig2*10 + dig1);
                    magicNumber = subReversal + reverseSubReversal;
                    
                    cout << "The number you entered is: " << userInput << endl;
                    cout << "The reversal of the input is: " << reverseInput << endl;
                    cout << "Subtraction of reversal of the original number is: " << subReversal << endl;
                    cout << "Reversal of the resulting number is: " << reverseSubReversal << endl;
                    cout << "Addition of the number to the un-reversed form is: " <<  reverseInput + reverseSubReversal << endl;
                    cout << "The final outcome is: " << magicNumber << endl;
                    break;
                }

                case ('b'):
                {
                    do
                    {
                        cout << "Please enter a 3 digit number." << endl;
                        cin >> userInput;
                        inputLength = 1;
                        int x = userInput;
                        while (x /= 10)
                            inputLength++;
                    }
                    while (inputLength != 3);
                           
                    if (inputLength == 3)
                    {
                        dig1 = userInput/100;
                        dig2 = (userInput%100)/10;
                        dig3 = userInput%10;
                        reverseInput = (dig3*100 + dig2*10 + dig1);
                        subReversal = userInput - reverseInput;
                        dig1 = subReversal/100;
                        dig2 = (subReversal%100)/10;
                        dig3 = subReversal%10;
                        reverseSubReversal = (dig3*100 + dig2*10 + dig1);
                        magicNumber = subReversal + reverseSubReversal;
                        
                        cout << "The number you entered is: " << userInput << endl;
                        cout << "The reversal of the input is: " << reverseInput << endl;
                        cout << "Subtraction of reversal of the original number is: " << subReversal << endl;
                        cout << "Reversal of the resulting number is: " << reverseSubReversal << endl;
                        cout << "Addition of the number to the un-reversed form is: " <<  reverseInput + reverseSubReversal << endl;
                        cout << "The final outcome is: " << magicNumber << endl;
                        break;
                    }
                
                case ('c'):
                {
                    cout << "You have chosen to exit the program." << endl;
                    break;
                }
                
                default:
                {
                    cout << "I did not understand the selection." << endl;
                    break;
                }
            }
        }
    }
    while (menuSelection != 'c');
                    
}


