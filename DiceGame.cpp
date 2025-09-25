//Dice Game
//By: Caitlin Ochuwa
//Completed: 9/25/25
#include <iostream>
#include <random>
#include <ctime> //time
#include <cstdlib> //srand rand
using namespace std;

int main(){
    //Allows program to have different random outputs each time it runs
    srand(static_cast<unsigned int>(time(nullptr))); 

    //Constant max and min values the dice can roll
    const int MIN = 1, MAX = 6;
    int dice1, dice2, dice3, dice4, total1, total2;
    string player1, player2;

    //Assigns a random value from 1-6 to each dice variable
    dice1 = MIN + rand() % (MAX - MIN + 1);
    dice2 = MIN + rand() % (MAX - MIN + 1);
    dice3 = MIN + rand() % (MAX - MIN + 1);
    dice4 = MIN + rand() % (MAX - MIN + 1);

    //Totals the roll for the first 2 die and the other 2 die
    total1 = dice1 + dice2;
    total2 = dice3 + dice4;

    //Users enter their names to claim their die
    cout << "Player 1 enter your name: ";
    getline(cin, player1);
    cout << "Player 2 enter your name: ";
    getline(cin, player2);
    cout << endl;
    //Prints the rolls for each player's die
    cout << player1 << "'s roll" << endl;
    cout << "Dice 1 rolled a " << dice1 << endl;
    cout << "Dice 2 rolled a " << dice2 << endl;
    cout << "Roll total: " << total1 << endl;
    cout << endl;
    cout << player2 << "'s roll" << endl;
    cout << "Dice 3 rolled a " << dice3 << endl;
    cout << "Dice 4 rolled a " << dice4 << endl;
    cout << "Roll total: " << total2 << endl;
    cout << endl;

    //Win and Lose Mechanics
    if (total1 > total2){
        cout << player1 << "(Player 1) wins!" << endl;
    }
    else if (total1 < total2){
        cout << player2 << "(Player 2) wins" << endl;
    }
    else if (total1 == total2){
        cout << "It's a tie!" << endl;
    }

    return 0;

}
