#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    //Declare and initialize variables
    int num = 0, guess = 0, guessNum = 0;

    //Generate random number
    srand(time(0));

    //Specify random number between 5 and 7
    num = rand() % 12 + 5;

    //While the guess is not the generated number
    while (guess != num)
    {
        //Display for user to enter guess
        cout << "Please guess a number between 5 and 17: ";

        //User inputs guess
        cin >> guess;

        //If guess is greater than num
        if ( guess > num )
        {
            cout << "The number is too high." << endl;
        }

        //If guess is less than num
        else if ( guess < num )
        {
            cout  << "The number is too low." << endl;
        }

        //Increase the number of guesses by one
        guessNum++;
    }
    //Display that number is correctly guessed.
    cout << "yaay! Good job you guessed the right number " << num <<" on guess number " << guessNum << endl;

    return 0;
}

/*
Name            : homework2
Arguements      : int num, guess, guessNum
Return          : 0
Definition      : A function that has you guess a number with hints
*/
