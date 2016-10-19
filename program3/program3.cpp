// Rigoberto Lomas-Velazco
// CSCI 20
// Program 3
// Rock Paper Scissors
//      In this program I will be creating an interactive program to play Rock,Paper,Scissors. The program will as the player how 
// many games they would like to play then start the game. The program will randomly sellect either rock paper or scissors, 
// if the selection the uer inputs beats the compuers selection then the computer will award the user a point, if not the program 
// will give itself a point. This process will repeat itself until either the program or the player wins the majority of the games. 
// Or if the player wants to play an even number of rounds then the game will continue until all the games have been played and 
// choose a winner based on who has the highest score. Considering there is a winner and the game didnt end in a tie.


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class userName 
    {
        private:
        string name;
        public:
        void setName(string i)
        {
            name = i;
        }
        string getName()
        {
         return name;   
        }
    };

 void convert (string& answer) //will convert the users input into all uppercase variables for easier if else statement parameters.
    {
       for (int i = 0; i < answer.length(); i++)
       answer[i] = toupper (answer[i]);
    }

int main()
{
    userName player;
    string x;
    string answer;          // This variable will save the users answers to every question the program asks the user. So it will constantly be changing.
    string compAnswer;      // This cariable will save the programs choice of either rock, paper, or scissors. Based on the random number generator.
    double numGames = 0;       // This variable will keep track of the number of games the users stated they wanted to play.
    int gamesPlayed = 0;    // This variable will keep track of the games the user and program have already played.
    int userPoints = 0;     // This variable will keep track of the users points throughout the game.
    int compPoints = 0;     // This variable will keep track of the programs ponts as the game progresses.
    int random;             // Saves the number generator created by the randomizer. The value will dictate if the computer will choose rock, paper, or scissors.
    int frustration = 1;        // If the user mispelles a word then the program will ask them to try again but will only do it three times, after that the program will end.
    
    srand(time(0)); // Seeding the random number generator.
    
    cout << "RRRRRR   OOOOOO  CCCCCC  K     K       PPPPPP    AA    PPPPPP  EEEEEE  RRRRRR         ssssss  CCCCCC  IIIII  SSSSSS  SSSSSS  OOOOOO  RRRRRR   SSSSSS  "  << endl;
    cout << "R    R   O    O  C       K    K        P    P   A  A   P    P  E       R    R         S       C         I    S       S       O    O  R    R   S       "  << endl;
    cout << "R   R    O    O  C       K  K          P    P  A    A  P    P  E       R   R          S       C         I    S       S       O    O  R   R    S       "  << endl;
    cout << "R R      O    O  C       K K           PPPPPP  AAAAAA  PPPPPP  EEEEEE  R R            SSSSSS  C         I    SSSSSS  SSSSSS  O    O  R R      SSSSSS  "  << endl;
    cout << "R   R    O    O  C       K  K          P       A    A  P       E       R   R               S  C         I         S       S  O    O  R   R         S  "  << endl;
    cout << "R    R   O    O  C       K    K    ,   P       A    A  P       E       R    R     ,        S  C         I         S       S  O    O  R    R        S  "  << endl;
    cout << "R     R  OOOOOO  CCCCCC  K     K  ,    P       A    A  P       EEEEEE  R     R   ,    SSSSSS  CCCCCC  IIIII  SSSSSS  SSSSSS  OOOOOO  R     R  SSSSSS  "  << endl;

    cout << endl;
    cout << "Enter your name: ";
    cin  >> x;
    player.setName(x);
    cout << endl;
    cout << "Welcome " << player.getName() << "! Would you like to play a game?: ";
    cin  >> answer;
    cout << endl;
    convert(answer);
    if (answer == "NO")
    {
        cout << "Then quit wasting my time " << player.getName() << " get out of here. Let someone else have a turn . . . jerk." << endl;
        cout << endl;
    }
    else
    {
        cout << "Yay!!! How many games would you like to play: ";
        cin  >> numGames;
        cout << endl;
        cout << "Okay we will play " << numGames << " game(s)." << endl;
        cout << "Or until one of us gets the majority of the points." << endl; 
        cout << endl;
        while (gamesPlayed < numGames && userPoints < numGames/2 && compPoints < numGames/2)
        //  Above line will keep the game going for however many games the user wants to play, or as long as neither player wins a majority of the games (ex. user wins 3 out of the 5 games before even getting to the fifth game)
        {
            random = ((rand() % 3) + 1); // Random number generator.
            switch (random) // Switch statement will assign a value to compAnswer based on the number selected by the randomizer.
            {
                case 1:
                    compAnswer = "ROCK";
                    break;
                case 2:
                    compAnswer = "PAPER";
                    break;
                default:
                    compAnswer = "SCISSORS";
                    break;
            }
            cout << "Choose your weapon: ";
            cin  >> answer;
            cout << endl;
            convert(answer);
            if ((frustration <= 4) && (answer != "ROCK") && (answer != "PAPER") && (answer != "SCISSORS"))
            {
                if (frustration == 1)
                {
                    cout << "Okay, maybe you didn't unserstand me. When I said 'Choose a weapon.' I meant enter Rock, Paper, or Scissors." << endl;
                    cout << "Now lets try again. Enter Rock, Paper, or Scissors: ";
                    cin  >> answer;
                    cout << endl;
                    ++frustration;
                }
                else if (frustration == 2)
                {
                    cout << "Alright " << player.getName() << "! You're starting to get on my nerves. I told you I want you to enter either" << endl;
                    cout << "Rock, Paper, or Scissors. So please do it: ";
                    cin  >> answer;
                    cout << endl;
                    ++frustration;
                }
                else if (frustration == 3)
                {
                    cout << "What is wrong with you? Do you really not know how to spell? I mean I had the" << endl;
                    cout << " words right infront of you. Last chance " << player.getName() << "! Enter rock, paper, or scissors: ";
                    cin  >> answer;
                    cout << endl;
                    ++frustration;
                }
                else
                {
                    cout << "Thats it " << player.getName() << "! I tried being nice but you obviously just want to keep wasting my time." << endl;
                    cout << "NO GAME FOR YOU!!!" << endl;
                    exit (0);
                }
            }
            cout << "I choose " << compAnswer << "." << endl;
            if ((answer == "ROCK" && compAnswer == "SCISSORS") || (answer == "PAPER" && compAnswer == "ROCK") || (answer == "SCISSORS" && compAnswer == "PAPER"))
            {
                cout << "Oh no! Your "  << answer <<  " beats my " << compAnswer << "! You get a point" << endl;
                ++userPoints;
                cout << "The new score is." << endl;
                cout << player.getName() << ": " << userPoints << " points" << endl;
                cout << "Computer: " << compPoints << " points" << endl;
                cout << endl;
                ++gamesPlayed;
            }
            else if ((compAnswer == "ROCK" && answer == "SCISSORS") || (compAnswer == "PAPER" && answer == "ROCK") || (compAnswer == "SCISSORS" && answer == "PAPER"))
            {
                cout << "Yay! My " << compAnswer << " beats your " << answer << ". I get a point!" << endl;
                cout << endl;
                ++compPoints;
                cout << "The new score is." << endl;
                cout << player.getName() << ": " << userPoints << " points" << endl;
                cout << "Computer: " << compPoints << " points" << endl;
                cout << endl;
                ++gamesPlayed;
            }
            else
            {
                cout << "Well thats no fun. We both picked " << answer << "." << endl;
                cout << "Let's try again.";
                cout << "The score is still." << endl;
                cout << player.getName() << ": " << userPoints << " points" << endl;
                cout << "Computer: " << compPoints << " points" << endl;
                cout << endl;
            }
        }
        cout << "Alright we've played " << gamesPlayed << " game(s)," << endl;
        cout << "and the final score is." << endl;
        cout << player.getName() << ": " << userPoints << " points" << endl;
        cout << "Computer: " << compPoints << " points" << endl;
        cout << endl;
        if (userPoints > compPoints)
        {
            cout << "Congratulations you win!" << endl;
            cout << "Try not to let it get to your head though." << endl;
            cout << "I'll win next time.";
        }
        else
        {
            cout << "HAHAHAHAHAHAHAHA!!!" << endl;
            cout << "I WIN!!! I'M THE BEST IN THE WORLD!!!" << endl;
            cout << "NOBODY CAN BEAT ME!!!" << endl;
            cout << "BOW BEFORE YOUR NEW RULER!!!" << endl;
        }
        
    }
    return 0;
}