bool isValidSudoku(char** board, int boardSize, int* boardColSize){
    //  ROW
    int freqe[10];

    for (int i = 0; i < 9 ;i++){
        memset(freqe , 0 , 10 * sizeof(int));
        for (int j = 0; j < 9 ;j++){
            if (board[i][j] == '.') continue;
            
            freqe[board[i][j] - '0'] += 1;
        }

        for (int x=1;x<=9;x++){
            if (freqe[x]>1) return false;
        }
    }

    //COLUMN
    for (int c=0;c<9;c++){
        memset (freqe , 0 , 10*sizeof(int));
        for (int r=0;r<9;r++){
            if (board[r][c] == '.') continue;
            freqe[ board[r][c] - '0' ] += 1; 
        }
        for (int i=1;i<=9;i++){
            if (freqe[i]>1) return false;
        }
    }

    for (int i=0;i<9;i+=3){
        for(int j=0;j<9;j+=3){
            
            memset (freqe , 0 , 10*sizeof(int));

            for(int r=i;r<i+3;r++){
                for(int c=j;c<j+3;c++){
                    if (board[r][c] == '.') continue;

                    freqe[ board[r][c] - '0'] += 1;
                }
            }
            for (int x=1;x<=9;x++){
                if (freqe[x]>1) return false;
            }
        }
    }

    return true;
}