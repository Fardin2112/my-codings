#include<iostream>
#include<vector>
#include<cstdlib>  // For rand() and srand()
#include<ctime> // For time()
using namespace std;

int main(){
    vector<string> symbols = {"CHERRY", "BELL", "DIAMOND", "LEMON", "SEVEN"};

    int totalSpins = 1000000;
    int wins = 0;   

    srand(time  (0)); // Seed the random number generator

    for (int i=0; i< totalSpins; i++){
        string reel1 = symbols[rand() % symbols.size()];
        string reel2 = symbols[rand() % symbols.size()];    
        string reel3 = symbols[rand() % symbols.size()];

        if (reel1 == reel2 && reel2 == reel3){
            wins++;
        }
    }

    double winRate = (double)wins / totalSpins * 100;
    cout << "Total Spins:" << totalSpins << endl;
    cout << "Wins: " << wins << endl;
    cout << "Win Rate:" << winRate << "%" << endl;

    return 0;
}