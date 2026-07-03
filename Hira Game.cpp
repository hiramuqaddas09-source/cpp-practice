#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char turn = 'O';
int row, column;
bool draw = false;

void display_board() {

    system("cls");

    

    cout << "     Tic Tac Toe Game\n";
    cout << "Player 1 [X]  -  Player 2 [O]\n\n";

    cout << "         |     |     \n";
    cout << "      " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << " \n";
    cout << "    ____ |_____|_____\n";
    cout << "         |     |     \n";
    cout << "      " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << " \n";
    cout << "    ____ |_____|_____\n";
    cout << "         |     |     \n";
    cout << "      " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << " \n";
    cout << "         |     |     \n";
}

void player_turn() {
    int choice;
    while (true) {
        if (turn == 'X')
            cout << "\nPlayer 1 [X] Turn: ";
        else
            cout << "\nPlayer 2 [O] Turn: ";

        cin >> choice;

        switch (choice) {
            case 1: row = 0; column = 0; break;
            case 2: row = 0; column = 1; break;
            case 3: row = 0; column = 2; break;
            case 4: row = 1; column = 0; break;
            case 5: row = 1; column = 1; break;
            case 6: row = 1; column = 2; break;
            case 7: row = 2; column = 0; break;
            case 8: row = 2; column = 1; break;
            case 9: row = 2; column = 2; break;
            default:
                cout << "Invalid choice! Try again.\n";
                continue;
        }

        if (board[row][column] != 'X' && board[row][column] != 'O') {
            board[row][column] = turn;
            turn = (turn == 'X') ? 'O' : 'X';
            break;
        } else {
            cout << "Box already filled! Choose another.\n";
        }
    }
    display_board();
}

bool gameover() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == board[i][1] && board[i][0] == board[i][2]) || 
            (board[0][i] == board[1][i] && board[0][i] == board[2][i]))
            return false;
    }

    // Check diagonals
    if ((board[0][0] == board[1][1] && board[0][0] == board[2][2]) || 
        (board[0][2] == board[1][1] && board[0][2] == board[2][0]))
        return false;

    // Check for any empty cell
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;

    draw = true;
    return false;
}

int main() {
    display_board();
    while (gameover()) {
        player_turn();
    }

    if (!draw) {
        if (turn == 'X')
            cout << "Player 2 [O] Wins! Congratulations!\n";
        else
            cout << "Player 1 [X] Wins! Congratulations!\n";
    } else {
        cout << "Game Draw!\n";
    }

    return 0;
}
