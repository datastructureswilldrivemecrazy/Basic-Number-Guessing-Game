#include <iostream>
#include <ctime>
using namespace std;
int main (){
    int num, guess;
    int tries = 0;
    srand(time(NULL));
    num = (rand() % 100) + 1;
    cout << "#################### NUMBER GUESSING GAME #################### \n";

    do {
        cout << "enter a number within the range 1-100 \n";
        cin >> guess;
        tries ++;
        if (guess > num){
            cout << "Your guess is too high! \n";
        }
        else if (guess < num){
            cout << "Your guess is too low \n";
        }
        else{
            cout << "YOU ARE CORRECT!!!! \n";
            cout <<"Number of tries " << tries << '\n';
        }
    }while (guess != num);
    cout << " #################### CLOSING NUMBER GUESSING GAME ####################";
    return 0;
}