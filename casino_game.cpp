#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

long long int coins;
char s;
int bid, guess, number,level, win;
int c;
enum CoinPack
{
    SMALL_PACK = 100,
    MEDIUM_PACK = 500,
    LARGE_PACK = 1000,
    EXTRA_LARGE_PACK = 5000,
    ULTIMATE_PACK = 10000
};
enum Currency
{
    USD = 50,
    EUR = 60,
    GBP = 70
};
int buyCoinsUsingAmount(int amount, Currency currency)
{
    int coins = amount * currency;
    return coins;
}

void displayMenu()
{
    system("cls");
    system("color 2");
    cout << "\t\t\033[1;36m--------------------------------------------------------------------------------\033[0m" << endl;
    cout << "\t\t\t\033[1;35m__        __ _____  _      ____  ___   __  __  _____   _____  ___  \033[0m" << endl;
    cout << "\t\t\t\033[1;35m\\ \\      / /| ____|| |    / ___|/ _ \\ |  \\/  || ____| |_   _|/ _ \\ \033[0m" << endl;
    cout << "\t\t\t\033[1;35m \\ \\ /\\ / / |  _|  | |   | |   | | | || |\\/| ||  _|     | | | | | |\033[0m" << endl;
    cout << "\t\t\t\033[1;35m  \\ V  V /  | |___ | |___| |___| |_| || |  | || |___    | | | |_| |\033[0m" << endl;
    cout << "\t\t\t\033[1;35m   \\_/\\_/   |_____||_____|\\____|\\___/ |_|  |_||_____|   |_|  \\___/ \033[0m" << endl;
    cout << "\t\t\t\t\033[1;35m    _   _  _   _  __  __ ____    _____  ____                          \033[0m" << endl;
    cout << "\t\t\t\t\033[1;35m   | \\ | || | | || \\/ | | __ )  | ____||  _ \\                         \033[0m" << endl;
    cout << "\t\t\t\t\033[1;35m   |  \\| || | | || |\\/| ||  _ \\ |  _|  | |_) |                        \033[0m" << endl;
    cout << "\t\t\t\t\033[1;35m   | |\\  || |_| || |  | || |_) || |___ |  _ <                         \033[0m" << endl;
    cout << "\t\t\t\t\033[1;35m   |_| \\_| \\___/ |_|  |_||____/ |_____||_| \\_\\                        \033[0m" << endl;
    cout << "\t\t\t\t\033[1;35m  ____  _   _  _____  ____  ____  ___  _   _   ____                \033[0m" << endl;
    cout << "\t\t\t\t\033[1;35m / ___|| | | || ____|/ ___|/ ___||_ _|| \\ | | / ___|               \033[0m" << endl;
    cout << "\t\t\t\t\033[1;35m| |  _ | | | ||  _|  \\___ \\\\___ \\ | | |  \\| || |  _                \033[0m" << endl;
    cout << "\t\t\t\t\033[1;35m| |_| || |_| || |___  ___) |___) || | | |\\  || |_| |               \033[0m" << endl;
    cout << "\t\t\t\t\033[1;35m \\____| \\___/ |_____||____/|____/|___||_| \\_| \\____|               \033[0m" << endl;
    cout << "\t\t\t---------------------------------------------------------------------" << endl;
    cout << "\t\t\t                       \033[1;33mG A M E     M E N U                        \033[0m" << endl;
    cout << "\t\t\t---------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\033[1;36mCoins " << coins << "\033[0m" << endl;
    cout << "\t\t\t\t\t\033[1;34mP. Play Game                                                  \033[0m" << endl;
    cout << "\t\t\t\t\t\033[1;34mB. Buy  Coins                                                \033[0m" << endl;
    cout << "\t\t\t\t\t\033[1;34mR. Game Rule                                                    \033[0m" << endl;
    cout << "\t\t\t\t\t\033[1;34mE. Exit                                                        \033[0m" << endl;
    cout << "\t\t\t--------------------------------------------------------------------" << endl;
}
void le()
{
    cout<<endl;
    cout << "\033[1;36m";
    std::cout << std::endl;
    std::cout << "\t\t\t\t _______ _______ _______ _______ _______ " << std::endl;
    std::cout << "\t\t\t\t|A      |2      |3      |4      |5      |" << std::endl;
    std::cout << "\t\t\t\t|   ?   |   ?   |   ?   |   ?   |   ?   |" << std::endl;
    std::cout << "\t\t\t\t|       |       |       |       |       |" << std::endl;
    std::cout << "\t\t\t\t|______A|______2|______3|______4|______5|" << std::endl;
    std::cout << std::endl;
    cout << "\n\t\t\t\tCoins = " << coins << endl<<endl;
    cout << "\033[0m";
    cout<<endl;
}

void winart()
{
    cout<<endl;
    cout << "\t\t\t\t\033[1;32mCongratulations! You Win!\033[0m" << endl;
    cout << "\t\t\t\t    \033[1;33m____________\033[0m" << endl;
    cout << "\t\t\t\t   \033[1;33m'._==_==_=_.'\033[0m" << endl;
    cout << "\t\t\t\t   \033[1;33m.-\\:      /-.\033[0m" << endl;
    cout << "\t\t\t\t  | \033[1;34m(|:.     |) |\033[0m" << endl;
    cout << "\t\t\t\t   \033[1;34m'-|:.     |-'\033[0m" << endl;
    cout << "\t\t\t\t     \033[1;34m\\::.    /\033[0m" << endl;
    cout << "\t\t\t\t      \033[1;34m'::. .'\033[0m" << endl;
    cout << "\t\t\t\t        \033[1;35m) (\033[0m" << endl;
    cout << "\t\t\t\t       \033[1;35m.' '.\033[0m" << endl;
    cout << "\t\t\t\t      \033[1;35m\"\"\"\"\"\"\033[0m" << endl;
    cout<<endl;
}
void lossart()
{
    cout<<endl;
    cout << "\t\t\t\t\033[1;31mOh no, Better Luck Next Time!\033[0m" << endl;
    cout << "\t\t\t\t    \033[1;36m,     ,     \033[0m" << endl;
    cout << "\t\t\t\t   \033[1;36m/ \\---/ \\  \033[0m" << endl;
    cout << "\t\t\t\t  \033[1;36m|  o   o  |\033[0m" << endl;
    cout << "\t\t\t\t  \033[1;36m(     U    )\033[0m" << endl;
    cout << "\t\t\t\t   \033[1;36m\\  .|||/  \033[0m" << endl;
    cout << "\t\t\t\t   \033[1;36m|  |||\033[0m" << endl;
    cout << "\t\t\t\t  \033[1;36m(__)_|||_(__)\033[0m" << endl;
    cout<<endl;
}
void playGame()
{
    char continueGame ;




    system("cls");
    cout << "\033[1;33m";

    cout << "\t\t\t\t   ____ " << endl;
    cout << "\t\t\t\t  /\\' .\\    _____" << endl;
    cout << "\t\t\t\t /: \\___\\  / .  /\\" << endl;
    cout << "\t\t\t\t \\' / . / /____/..\\   _" << endl;
    cout << "\t\t\t\t  \\/___/  \\'  '\\  /\\'." << endl;
    cout << "\t\t\t\t           \\'__'\\/  \\" << endl;
    cout << "\t\t\t\t            / . \\" << endl;
    cout << "\t\t\t\t            \\/___\\" << endl;
    cout << endl;

    // Reset console text color to default
    cout << "\033[0m";
     cout << "\t\t\t\t\t\t\033[1;36mCoins " << coins << "\033[0m" << endl;
    // Set console text color to cyan for the level menu
    cout << "\033[1;36m";

    cout << "\t\t\t\tWhich Level You Want to Play.\n";
    cout << "\t\t\t\t1. HARD\n";
    cout << "\t\t\t\t2. MIDDLE\n";
    cout << "\t\t\t\t3. EASY\n\t\t";

    // Reset console text color to default
    cout << "\033[0m";

    // User input
    cout << "Enter your choice: ";
    cin >> level;

    switch (level)
    {
    case 1:
        if (coins >0)
        {

            do
            {
                system("cls");
                if (coins >= 1000)
                {
                    le();
                    std::cout << "\t\t\t\tEnter your bet amount: ";
                    cin >> bid;

                    if (bid >= 1000 && bid <= coins)
                    {
                        cout << "\t\t\t\tBid amount: " << bid << endl;
                        cout << "\t\t\t\tGuess the number between 1 to 10: ";

                        cin >> guess;
                        if(guess >0 && guess <11)
                        {


                            srand(time(0));
                            int number = rand() % 10 + 1; // Declare and initialize the number variable
                            if (number == guess)
                            {
                                int win = bid * (guess + 10);
                                coins = coins + win;
                                winart();
                                cout << "\t\t\tYou guessed " << guess << " and the random number is " << number << endl;
                                cout << "\t\t\t\nDo you want to continue the game? (Y/N): ";
                                cin >> continueGame;

                            }
                            else
                            {
                                coins = coins - bid;
                                lossart();
                                cout << "\t\t\tYou guessed " << guess << " and the random number is " << number << endl;
                                cout << "\t\t\t\t\nDo you want to continue playing? (Y/N): ";
                                cin >> continueGame;

                            }
                        }
                        else
                        {
                            cout << "\n\t\t\t Invalid guess number. \n\t\t\t Do you want to continue playing? (Y/N): ";
                            cin >> continueGame;
                        }
                    }else{return;}
                }else{return;}
            }
            while (continueGame == 'y' || continueGame == 'Y' );
            break;
        }


    case 2:
        if (coins >0)
        {

            do
            {
                system("cls");
                if (coins >= 500)
                {
                    le();
                    std::cout << "\t\t\t\tEnter your bet amount: ";

                    cin >> bid;

                    if (bid >= 500 && bid <= coins)
                    {
                        cout << "\t\t\t\tBid amount: " << bid << endl;
                        cout << "\t\t\t\tGuess the number between 1 to 5: ";

                        cin >> guess;
                        if(guess >0 && guess <6)
                        {

                            srand(time(0));
                            int number = rand() % 5 + 1; // Declare and initialize the number variable
                            if (number == guess)
                            {
                                int win = bid * (guess + 5);
                                coins = coins + win;
                                winart();
                                cout << "\t\t\tYou guessed " << guess << " and the random number is " << number << endl;
                                cout << "\n\t\t\tDo you want to continue the game? (Y/N): ";
                                cin >> continueGame;

                            }
                            else
                            {
                                coins = coins - bid;
                                lossart();
                                cout << "\t\t\t\tYou guessed " << guess << " and the random number is " << number << endl;
                                cout << "\n\t\t\tDo you want to continue playing? (Y/N): ";
                                cin >> continueGame;

                            }
                        }
                        else
                        {
                            cout << "\n\t\t\t Invalid guess number. \n\t\t\t Do you want to continue playing? (Y/N): ";
                            cin >> continueGame;
                        }
                    }else{return;}
                }else{return;}
            }
            while (continueGame == 'y' || continueGame == 'Y' );
            break;
        }


    case 3:
        if (coins >0)
        {
            do
            {
                system("cls");
                if (coins >= 0)
                {
                    le();
                    cout << "\t\t\t\tEnter your bet amount: ";

                    cin >> bid;

                    if (bid > 0 && bid <= coins)
                    {
                        cout << "\t\t\t\tBid amount: " << bid << std::endl;
                        cout << "\t\t\t\tGuess the number between 1 to 3: ";

                        cin >> guess;
                        if(guess >0 && guess <4)
                        {

                            srand(time(0));
                            int number = rand() % 3 + 1; // Declare and initialize the number variable
                            if (number == guess)
                            {
                                int win = bid * 5;
                                coins = coins + win;
                                winart();
                                cout << "\t\t\tYou guessed " << guess << " and the random number is " << number << endl;
                                cout << "\n\t\t\tDo you want to continue the game? (Y/N): ";
                                cin >> continueGame;


                            }
                            else
                            {
                                coins = coins - bid;
                                lossart();
                                cout << "\t\t\t\tYou guessed " << guess << " and the random number is " << number << endl;
                                cout << "\n\t\t\tDo you want to continue playing? (Y/N): ";
                                cin >> continueGame;

                            }
                        }
                        else
                        {
                            cout << "\n\t\t\t Invalid guess number. \n\t\t\t Do you want to continue playing? (Y/N): ";
                            cin >> continueGame;
                        }
                    }else {return;}
                }else {return;}
            }
            while (continueGame == 'y' || continueGame == 'Y' );
            break;
        }





    default:
        cout << "\t\t\t\tInvalid Input! or You don't have enough coins'" << endl;
        cout << "\n\t\t\t\tDo you want to continue playing? (Y/N): ";
        cin >>continueGame ;
        if (continueGame == 'Y' || continueGame == 'y')
        {
            return;
        }
    }


}
void buyCoins ()
{
    system("cls");
    int choice;
    int purchasedCoins;

    cout << "\033[1;33m";

    cout << "\t\t\t\t************************************************\n";
    cout << "\t\t\t\t*                COINS BUY MENU                *\n";
    cout << "\t\t\t\t************************************************\n";

    // Reset console text color to default
    cout << "\033[0m";

    // Set console text color to cyan for the menu options
    cout << "\033[1;36m";

    cout << "\t\t\t\t*   1. Buy a pre-defined pack of coins         *\n";
    cout << "\t\t\t\t*   2. Enter a specific amount of coins        *\n";
    cout << "\t\t\t\t*                                              *\n";
    cout << "\t\t\t\t*   Select by entering the number:             *\n";

    // Reset console text color to default
    cout << "\033[0m";

    cout << "\t\t\t\t************************************************\n";

    // User input
    cout << "\t\t\t\tEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\033[1;33m";

        cout << "\t\t\t\t*************************************************\n";
        cout << "\t\t\t\t*           COINS PACK SELECTION MENU           *\n";
        cout << "\t\t\t\t*************************************************\n";

        // Reset console text color to default
        cout << "\033[0m";

        // Set console text color to cyan for the menu options
        cout << "\033[1;36m";

        cout << "\t\t\t\t*   Enter the number to choose a coin pack:    *\n";
        cout << "\t\t\t\t*   1. Small Pack   - 100 Coins                *\n";
        cout << "\t\t\t\t*   2. Medium Pack  - 500 Coins                *\n";
        cout << "\t\t\t\t*   3. Large Pack   - 1000 Coins               *\n";
        cout << "\t\t\t\t*   4. Extra Large Pack - 5000 Coins           *\n";
        cout << "\t\t\t\t*   5. Ultimate Pack - 10000 Coins             *\n";
        cout << "\t\t\t\t*                                              *\n";
        cout << "\t\t\t\t*   Select the pack by entering the number:    *\n";

        // Reset console text color to default
        cout << "\033[0m";

        cout << "\t\t\t\t*************************************************\n";

        // User input
        cout << "\t\t\t\tEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            coins += purchasedCoins = SMALL_PACK;
            break;
        case 2:
            coins +=  purchasedCoins = MEDIUM_PACK;
            break;
        case 3:
            coins += purchasedCoins = LARGE_PACK;
            break;
        case 4:
            coins += purchasedCoins = EXTRA_LARGE_PACK;
            break;
        case 5:
            coins += purchasedCoins = ULTIMATE_PACK;
            break;
        default:
            cout << "\t\t\t\tInvalid choice. Please try again.\n";
            return;
            break;
        }
        break;
    case 2:
        int amount;
        int currency;
        cout << "\033[1;33m";
        cout << "\t\t\t\t*************************************************\n";
        cout << "\t\t\t\t*        AMOUNT AND CURRENCY SELECTION         *\n";
        cout << "\t\t\t\t*************************************************\n";
        cout << "\033[0m";
        cout << "\033[1;36m";
        cout << "\t\t\t\t*   Enter the amount you want to spend:         *\n";
        cout << "\t\t\t\t*                                               *\n";
        cout << "\t\t\t\t*   1. USD                                      *\n";
        cout << "\t\t\t\t*   2. EUR                                      *\n";
        cout << "\t\t\t\t*   3. GBP                                      *\n";
        cout << "\t\t\t\t*                                               *\n";
        cout << "\t\t\t\t*  Select the currency by entering the number:  *\n";
        cout << "\t\t\t\t*************************************************\n";
        cout << "\033[0m";
        // User input
        cout << "\t\t\t\tEnter the amount you want to spend: ";
        cin >> amount;
        cout << "\t\t\t\tSelect the currency by entering the number: ";
        cin >> currency;

        switch (currency)
        {
        case 1:
            coins += purchasedCoins = buyCoinsUsingAmount(amount, USD);
            break;
        case 2:
            coins += purchasedCoins = buyCoinsUsingAmount(amount, EUR);
            break;
        case 3:
            coins += purchasedCoins = buyCoinsUsingAmount(amount, GBP);
            break;
        default:
            std::cout << "\t\t\t\tInvalid currency. Please try again.\n";
            return;
            break;
        }
        break;
    default:
        cout << "\t\t\t\tInvalid choice. Please try again.\n";
        return;

        coins += purchasedCoins; // Update the global coins variable with the purchased amount

        cout << "\t\t\t\tYou have purchased " << purchasedCoins << " coins.\n";



    }
}


void displayRules()
{

    char f;

    system("cls");
    cout << "\033[1;33m";

    cout << "\t\t\t\t _______ _______ _______ _______ _______ " << endl;
    cout << "\t\t\t\t|A      |2      |3      |4      |5      |" << endl;
    cout << "\t\t\t\t|   ?   |   ?   |   ?   |   ?   |   ?   |" << endl;
    cout << "\t\t\t\t|       |       |       |       |       |" << endl;
    cout << "\t\t\t\t|______A|______2|______3|______4|______5|" << endl;
    cout << endl;
    cout << endl;

    // Reset console text color to default
    cout << "\033[0m";

    // Set console text color to cyan for the welcome message
    cout << "\033[1;36m";

    cout << "\t\t\t\tWelcome to the Casino Number Guessing Game!" << endl;
    cout << "\t\t\t\tHere are the rules:" << endl;

    // Reset console text color to default
    cout << "\033[0m";

    cout << "\n\t\t\t\tHARD 1:\n\n";
    cout << "\t\tThe player must have a bid amount greater than 1000 coins.\n";
    cout << "\t\tThe player guesses a number between 1 and 10.\n";
    cout << "\t\tIf the guess is correct, the player wins an amount equal to the bid amount times (guess + 10).\n";

    cout << "\n\t\t\t\tMIDDLE 2:\n\n";
    cout << "\t\tThe player must have a bid amount greater than 500 coins.\n";
    cout << "\t\tThe player guesses a number between 1 and 5.\n";
    cout << "\t\tIf the guess is correct, the player wins an amount equal to the bid amount times (guess + 5).\n";

    cout << "\n\t\t\t\tEASY 3:\n\n";
    cout << "\t\tThe player must have a bid amount greater than 0.\n";
    cout << "\t\tThe player guesses a number between 1 and 3.\n";
    cout << "\t\tIf the guess is correct, the player wins an amount equal to the guess times the bid amount.\n";

    // Reset console text color to default
    cout << "\033[0m";

    cout << "\n\t\t\t\tDo you want to go back to the menu? Press (y): ";
    cin >> f;
    if (f=='Y' || f=='y')
    {
        return;
    }
}

int main()
{
    srand(time(0));

    char selection;


    while(true){

        displayMenu();
        cin >> selection;

        switch (selection)
        {
        case 'P':
        case 'p':
            playGame();
            break;
        case 'B':
        case 'b':
            buyCoins();
            break;
        case 'R':
        case 'r':
            displayRules();
            break;
        case 'E':
        case 'e':
            system("cls"); // Clear the console (Windows specific, adjust for other systems if needed)
            system("color 6"); // Set console color to yellow
            std::cout << "\t\t\t\033[1;33m  _____ _   _ _______ _______ \033[0m" << std::endl;
            std::cout << "\t\t\t\033[1;33m |_   _| \\ | |__   __|__   __|\033[0m" << std::endl;
            std::cout << "\t\t\t\033[1;33m   | | |  \\| |  | |     | |   \033[0m" << std::endl;
            std::cout << "\t\t\t\033[1;33m   | | | . ` |  | |     | |   \033[0m" << std::endl;
            std::cout << "\t\t\t\033[1;33m  _| |_| |\\  |  | |     | |   \033[0m" << std::endl;
            std::cout << "\t\t\t\033[1;33m |_____|_| \\_|  |_|     |_|   \033[0m" << std::endl;
            std::cout << "\n\t\t\t\033[1;35mThank you for playing! Press any key to exit.\033[0m" << std::endl;

                return 0;
		   break;

        default:
            cout << "Invalid selection. Please try again.";
            break;
        }
}

    return 0;
}
