#include <iostream>
#include <stdlib.h>     
#include <time.h>       
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    int numberRolled = 0;
    
    cout << "Dice is rolling..." << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    
    srand ((unsigned int)time(0));
    numberRolled = rand() % 6 + 1;
    
    cout << "Dice rolling is: " << numberRolled << endl;
    
    int continueRolling = 0;
    
    do {
        cout << "Would you like to roll again? Enter 1 for yes and 0 for no"<<endl;
        cin>> continueRolling;
        
        int numberRolled = 0;
        srand ((unsigned int)time(0));
        numberRolled = rand() % 6 + 1;
        
        cout << "Dice rolling is: " << numberRolled << endl;
        
    } while (continueRolling != 0);
    
    cout <<"Game finished, thank you for playing! " << endl;

    return 0;
}
