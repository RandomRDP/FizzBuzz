#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = {3,5,7};
    vector<string> words = {"fizz","buzz","biff"};
    bool divisable = false;
    
    for (int i=1; i<=100;i++){                      //count 1 - 100

        for (int j=0; j < numbers.size() ; j++) {   //
            if (i % numbers[j] == 0){               // check if number divisable
                cout << words[j];                   // if so print relevent word & flag divisable
                divisable = true;
            }
        }
        
 
        if (!divisable){                            //if divisable new line
            cout << i << endl;                      //else print number & new line
        } else {
            cout << endl;
            divisable = false;
        }
        

    }
    return 0;
}
