#include <iostream>
using namespace std;

const int rows = 6;
const int cols = 7;

char board[rows * cols];

void initialize_board()
{
    for (int i = 0; i < rows * cols; ++i)
    {
        board[i] = ' ';
    }
}

void print_board()
{
    cout << "-----------------------------\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "| " << board[i * cols + j] << " ";
        }
        cout << "|\n";
    }
    cout << "-----------------------------\n";
    for (int j = 0; j < cols; ++j)
    {
        cout << "  " << j << " ";
    }
    cout << "\n";
}

bool the_move_is_valid_or_not(int col)
{
    return col >= 0 && col < cols && board[col] == ' ';
}

int drop_piece(int col, char player_piece)
{
    for (int i = rows - 1; i >= 0; --i)
    {
        if (board[i * cols + col] == ' ')
        {
            board[i * cols + col] = player_piece;
            return i;
        }
    }
    return -1;
}

bool check_win_direction(int starting_row, int starting_column, int changing_row, int changing_col, char player_piece)
{
    for (int i = 0; i < 4; ++i)
    {
        int r = starting_row + i * changing_row;
        int c = starting_column + i * changing_col;
        if (board[r * cols + c] != player_piece)
        {
            return false;
        }
    }
    return true;
}

bool check_win(int row, int col, char player_piece)
{
    for (int i = 0; i <= cols - 4; ++i)
    {
        if (check_win_direction(row, i, 0, 1, player_piece))
        {
            return true;
        }
    }

    for (int i = 0; i <= rows - 4; ++i)
    {
        if (check_win_direction(i, col, 1, 0, player_piece))
        {
            return true;
        }
    }

    for (int i = 0; i <= rows - 4; ++i)
    {
        for (int j = 0; j <= cols - 4; ++j)
        {
            if (check_win_direction(i, j, 1, 1, player_piece))
            {
                return true;
            }
        }
    }

    for (int i = 0; i <= rows - 4; ++i)
    {
        for (int j = 3; j < cols; ++j)
        {
            if (check_win_direction(i, j, 1, -1, player_piece))
            {
                return true;
            }
        }
    }

    return false;
}

bool board_is_full_or_not()
{
    for (int i = 0; i < cols; ++i)
    {
        if (board[i] == ' ')
        {
            return false;
        }
    }
    return true;
}

bool play_again()
{
    char choice;
    cout << "Do you want to play again? (y/n): ";
    cin >> choice;
    return (choice == 'y' || choice == 'Y');
}

void play_connect_4_game()
{
    char player1[50], player2[50];

    cout << "Welcome to Connect Four!\n";

    cout << "Enter Player 1's name: ";
    cin >> player1;
    cout << "Enter Player 2's name: ";
    cin >> player2;

    char current_player = 'X';

    do
    {
        initialize_board();

        while (true)
        {
            print_board();

            int col;
            cout << "Player " << ((current_player == 'X') ? player1 : player2) << "'s turn. Enter column (0-6): ";
            cin >> col;

            if (the_move_is_valid_or_not(col))
            {
                int row = drop_piece(col, current_player);

                if (check_win(row, col, current_player))
                {
                    print_board();
                    if (current_player == 'X')
                        cout << "Player X wins! Congratulations, " << player1 << "!\n";
                    else
                        cout << "Player O wins! Congratulations, " << player2 << "!\n";
                    break;
                }

                if (board_is_full_or_not())
                {
                    print_board();
                    cout << "It's a draw!\n";
                    break;
                }

                current_player = (current_player == 'X') ? 'O' : 'X';
            }
            else
            {
                cout << "Invalid move. Please choose a valid column.\n";
            }
        }
    } while (play_again());
}

int main()
{
    play_connect_4_game();
    return 0;
}