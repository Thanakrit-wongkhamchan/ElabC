#include <stdio.h>

#define BOARD_SIZE    8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    
 int numPieces, x, y, i, j;
    char pieceChar;
    int board[BOARD_SIZE][BOARD_SIZE];

    for (i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            board[i][j] = ' ';
        }
    }

    scanf("%d", &numPieces);
    for (i = 0; i < numPieces; i++)
    {
        scanf("\n%c(%d, %d)", &pieceChar, &x, &y);
        setPieceOnTable(board, pieceChar, x, y);
    }

    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");

    for (i = 0; i < BOARD_SIZE; i++)
    {
        printf("%d|", i);
        for (j = 0; j < BOARD_SIZE; j++)
        {
            printf("%c|", board[i][j]);
        }
        printf("\n");
    }

}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos )
{
    
board[yPos][xPos] = piece;

}