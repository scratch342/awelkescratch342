
//Forward declarations for needed functions from other files
void p1Turn(char board1[10][10], char board2[10][10]);
void p2Turn(char board1[10][10], char board2[10][10]);

//Function for alternating between turns
void turns(char board1[10][10], char board2[10][10]){

    //Make a a variable(int) with static duration (meaning that this variable keeps it value even after function is finished)
    static char turn = '0';

    //0 is for opponent and 1 is for player
    //If variable is currently for opponent, change it for player and vice versa
    if(turn == '0'){
        turn = '1';
        p1Turn(board1, board2);
    }else if(turn == '1'){
        turn = '0';
        p2Turn(board1, board2);
    }


}

