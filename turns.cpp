void p1Turn(char board1[10][10], char board2[10][10]);
void p2Turn(char board1[10][10], char board2[10][10]);

void turns(char board1[10][10], char board2[10][10]){
    static int turn = '0';

    if(turn == '0'){
        turn = '1';
        p1Turn(board1, board2);
    }else if(turn == '1'){
        turn = '0';
        p2Turn(board1, board2);
    }


}

