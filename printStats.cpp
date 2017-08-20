#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

void printStats(char board1[10][10], char board2[10][10]){
    int shipsLeft1 = 0;
    int shipsHit1 = 0;
    int shipsLeft2 = 0;
    int shipsHit2 = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(board1[i][j] == '+'){
                shipsLeft1++;
            }else if(board1[i][j] == 'x'){
                shipsHit1++;
            }

            if(board2[i][j] == '+'){
                shipsLeft2++;
            }else if(board2[i][j] == 'x'){
                shipsHit2++;
            }

        }

    }

    if(shipsLeft1 <= 0){
        cout << "Opponent WINS!!!" << endl;
        sleep(2);
        exit(0);
    }else if(shipsLeft2 <= 0){
        cout << "Player WINS!!!" << endl;
        sleep(2);
        exit(0);
    }

    cout << endl << "Player : " << endl;
    cout << "\t Ships Left = " << shipsLeft1 << endl;
    cout << "\t Ships that have been hit = " << shipsHit1 << endl << endl;

    cout << endl << "Opponent : " << endl;
    cout << "\t Ships Left = " << shipsLeft2 << endl;
    cout << "\t Ships that have been hit = " << shipsHit2 << endl << endl;

    cout << "(PRESS ENTER TO CONTINUE)" << endl;
    cin.ignore();
}
