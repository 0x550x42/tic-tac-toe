/*
Objective   : This program lets the user play a game called TIC-TAC-TOE
Programmer  : Udit Bhatnagar
Lang 		: C++98
Date        : 02-Jan-2012
*/

/*
Notes:-
>>also mention the sign that the winner chose along with his name
>>display thank you or bye on leaving
>>save game
>>please wait/processing message display
>>game rules and how to play at the beginning
>>display previous move by the player
*/

using namespace std;
#include<iostream>  //for consolein and consoleout
#include<stdio.h>   //for using gets function
#include<stdlib.h>  //for using system("cls") function
#include<conio.h>   //for using getchar function
#include<iomanip>   //for using setw function

/*
The following line gives a declaration of the matrix, all flags and the global variables
*/
char game_board[5][5] = {'1', '|', '2', '|', '3', '-', '-', '-', '-', '-', '4', '|', '5', '|', '6', '-', '-', '-', '-', '-', '7', '|', '8', '|', '9'};
int game = 1, flag_1 = 1, flag_2 = 1, flag_3 = 1, flag_4[9] = {1, 1, 1, 1, 1, 1, 1, 1, 1}, index;
char player1[50], player2[50];
/*****************************************************************************************************************************/
/*
Function to dispaly welcome message at the starting of program
*/
void startup_1(void) throw()
{
    system("cls");

    long double delay;
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(70) << "XOXOXOXOXOXOXOXOXOXOXOXOXOXOXO" << endl;
    cout << setw(70) << "OXOXOXOXOXOXOXOXOXOXOXOXOXOXOX" << endl;
    cout << setw(70) << "XOXOXOXOXOXOXOXOXOXOXOXOXOXOXO" << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            XOXOXOX           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            XOXOXOX           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            XOXOXOX           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;

    for(delay = 0; delay < 99999000; ++delay);

    system("cls");
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(70) << "XOXOXOXOXOXOXOXOXOXOXOXOXOXO  " << endl;
    cout << setw(70) << "OXOXOXOXOXOXOXOXOXOXOXOXOXOX  " << endl;
    cout << setw(70) << "XOXOXOXOXOXOXOXOXOXOXOXOXOXO  " << endl;
    cout << setw(70) << "           OXOXOXO            " << endl;
    cout << setw(70) << "           XOXOXOX            " << endl;
    cout << setw(70) << "           OXOXOXO            " << endl;
    cout << setw(70) << "           XOXOXOX            " << endl;
    cout << setw(70) << "           OXOXOXO            " << endl;
    cout << setw(70) << "           XOXOXOX            " << endl;
    cout << setw(70) << "           OXOXOXO            " << endl;
    cout << setw(70) << "           XOXOXOX            " << endl;
    cout << setw(70) << "XOXOXOXOXOXOXOXOXOXOXOXOXOXO  " << endl;
    cout << setw(70) << "OXOXOXOXOXOXOXOXOXOXOXOXOXOX  " << endl;
    cout << setw(70) << "XOXOXOXOXOXOXOXOXOXOXOXOXOXO  " << endl;

    for(delay = 0; delay < 99999000; ++delay);

    system("cls");
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(70) << "          XOXOXOXOXOXO       " << endl;
    cout << setw(70) << "        OXOXOXOXOXOXOXOXO    " << endl;
    cout << setw(70) << "      XOXOXOX         XOXOX  " << endl;
    cout << setw(70) << "      OXOXOX                 " << endl;
    cout << setw(70) << "      XOXOXO                 " << endl;
    cout << setw(70) << "      OXOXOX                 " << endl;
    cout << setw(70) << "      XOXOXO                 " << endl;
    cout << setw(70) << "      OXOXOX                 " << endl;
    cout << setw(70) << "      XOXOXO                 " << endl;
    cout << setw(70) << "      OXOXOX                 " << endl;
    cout << setw(70) << "      XOXOXO          XOXOX  " << endl;
    cout << setw(70) << "        OXOXOXOXOXOXOXOXO    " << endl;
    cout << setw(70) << "          XOXOXOXOXOXOX      " << endl;

    for(delay = 0; delay < 99999000; ++delay);

    system("cls");
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(70) << "XOXOXOXOXOXOXOXOXOXOXOXOXOXOXO" << endl;
    cout << setw(70) << "OXOXOXOXOXOXOXOXOXOXOXOXOXOXOX" << endl;
    cout << setw(70) << "XOXOXOXOXOXOXOXOXOXOXOXOXOXOXO" << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            XOXOXOX           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            XOXOXOX           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            XOXOXOX           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;

    for(delay = 0; delay < 99999000; ++delay);

    system("cls");
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(70) << "         XOXOXOXOXOXOXO       " << endl;
    cout << setw(70) << "       OXOXOXOXOXOXOXOXOX     " << endl;
    cout << setw(70) << "     OXOXOXOXOXOXOXOXOXOXOX   " << endl;
    cout << setw(70) << "     XOXOXO          XOXOXO   " << endl;
    cout << setw(70) << "     OXOXOX          OXOXOX   " << endl;
    cout << setw(70) << "     XOXOXO          XOXOXO   " << endl;
    cout << setw(70) << "     OXOXOX          OXOXOX   " << endl;
    cout << setw(70) << "     XOXOXOXOXOXOXOXOXOXOXO   " << endl;
    cout << setw(70) << "     OXOXOXOXOXOXOXOXOXOXOX   " << endl;
    cout << setw(70) << "     XOXOXOXOXOXOXOXOXOXOXO   " << endl;
    cout << setw(70) << "     OXOXOX          XOXOXO   " << endl;
    cout << setw(70) << "     XOXOXO          OXOXOX   " << endl;
    cout << setw(70) << "     OXOXOX          XOXOXO   " << endl;
    cout << setw(70) << "     XOXOXO          OXOXOX   " << endl;

    for(delay = 0; delay < 99999000; ++delay);

    system("cls");
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(70) << "          XOXOXOXOXOXO       " << endl;
    cout << setw(70) << "        OXOXOXOXOXOXOXOXO    " << endl;
    cout << setw(70) << "      XOXOXOX         XOXOX  " << endl;
    cout << setw(70) << "      OXOXOX                 " << endl;
    cout << setw(70) << "      XOXOXO                 " << endl;
    cout << setw(70) << "      OXOXOX                 " << endl;
    cout << setw(70) << "      XOXOXO                 " << endl;
    cout << setw(70) << "      OXOXOX                 " << endl;
    cout << setw(70) << "      XOXOXO                 " << endl;
    cout << setw(70) << "      OXOXOX                 " << endl;
    cout << setw(70) << "      XOXOXO          XOXOX  " << endl;
    cout << setw(70) << "        OXOXOXOXOXOXOXOXO    " << endl;
    cout << setw(70) << "          XOXOXOXOXOXOX      " << endl;

    for(delay = 0; delay < 99999000; ++delay);

    system("cls");
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(70) << "XOXOXOXOXOXOXOXOXOXOXOXOXOXOXO" << endl;
    cout << setw(70) << "OXOXOXOXOXOXOXOXOXOXOXOXOXOXOX" << endl;
    cout << setw(70) << "XOXOXOXOXOXOXOXOXOXOXOXOXOXOXO" << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            XOXOXOX           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            XOXOXOX           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            XOXOXOX           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;
    cout << setw(70) << "            OXOXOXO           " << endl;

    for(delay = 0; delay < 99999000; ++delay);

    system("cls");
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(70) << "         OXOXOXOXOXOXO        " << endl;
    cout << setw(70) << "       XOXOXOXOXOXOXOXOX      " << endl;
    cout << setw(70) << "      XOXOXOXOXOXOXOXOXOX     " << endl;
    cout << setw(70) << "     XOXOX           XOXOX    " << endl;
    cout << setw(70) << "     OXOXO           OXOXO    " << endl;
    cout << setw(70) << "     XOXOX           XOXOX    " << endl;
    cout << setw(70) << "     OXOXO           OXOXO    " << endl;
    cout << setw(70) << "     XOXOX           XOXOX    " << endl;
    cout << setw(70) << "     OXOXO           OXOXO    " << endl;
    cout << setw(70) << "     XOXOX           XOXOX    " << endl;
    cout << setw(70) << "     OXOXO           OXOXO    " << endl;
    cout << setw(70) << "      OXOXOXOXOXOXOXOXOXO     " << endl;
    cout << setw(70) << "       OXOXOXOXOXOXOXOXO      " << endl;
    cout << setw(70) << "         XOXOXOXOXOXOX        " << endl;

    for(delay = 0; delay < 99999000; ++delay);

    system("cls");
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(70) << "    OXOXOXOXOXOXOXOXOXOXO     " << endl;
    cout << setw(70) << "    XOXOXOXOXOXOXOXOXOXOX     " << endl;
    cout << setw(70) << "    OXOXOXOXOXOXOXOXOXOXO     " << endl;
    cout << setw(70) << "    XOXOXOX                   " << endl;
    cout << setw(70) << "    OXOXOXO                   " << endl;
    cout << setw(70) << "    XOXOXOXOXOXOXOXOXOXOX     " << endl;
    cout << setw(70) << "    OXOXOXOXOXOXOXOXOXOXO     " << endl;
    cout << setw(70) << "    XOXOXOXOXOXOXOXOXOXOX     " << endl;
    cout << setw(70) << "    OXOXOXO                   " << endl;
    cout << setw(70) << "    XOXOXOX                   " << endl;
    cout << setw(70) << "    OXOXOXO                   " << endl;
    cout << setw(70) << "    XOXOXOXOXOXOXOXOXOXOX     " << endl;
    cout << setw(70) << "    OXOXOXOXOXOXOXOXOXOXO     " << endl;
    cout << setw(70) << "    XOXOXOXOXOXOXOXOXOXOX     " << endl;

    for(delay = 0; delay < 99999000; ++delay);

    system("cls");
    return;
}
/*****************************************************************************************************************************/
/*
Function to dispaly welcome message at the starting of program
*/
void startup_2(void) throw()
{
    system("cls");

    long double delay;
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(94) << "  XOXOXOXOXOXOXOXOXOXOXOXO  XOXOXOXOXOXOXOXOXOXOXOXO       XOXOXOXOXOXO     " << endl;
    cout << setw(94) << "  OXOXOXOXOXOXOXOXOXOXOXOX  OXOXOXOXOXOXOXOXOXOXOXOX     OXOXOXOXOXOXOXOXO  " << endl;
    cout << setw(94) << "  XOXOXOXOXOXOXOXOXOXOXOXO  XOXOXOXOXOXOXOXOXOXOXOXO   XOXOXOX         XOXOX" << endl;
    cout << setw(94) << "           OXOXOXO                    OXOXOXO          OXOXOX               " << endl;
    cout << setw(94) << "           XOXOXOX                    XOXOXOX          XOXOXO               " << endl;
    cout << setw(94) << "           OXOXOXO                    OXOXOXO          OXOXOX               " << endl;
    cout << setw(94) << "           XOXOXOX                    XOXOXOX          XOXOXO               " << endl;
    cout << setw(94) << "           OXOXOXO                    OXOXOXO          OXOXOX               " << endl;
    cout << setw(94) << "           XOXOXOX                    XOXOXOX          XOXOXO               " << endl;
    cout << setw(94) << "           OXOXOXO                    OXOXOXO          OXOXOX               " << endl;
    cout << setw(94) << "           OXOXOXO           XOXOXOXOXOXOXOXOXOXOXOXO  XOXOXO          XOXOX" << endl;
    cout << setw(94) << "           OXOXOXO           OXOXOXOXOXOXOXOXOXOXOXOX     OXOXOXOXOXOXOXOXO " << endl;
    cout << setw(94) << "           OXOXOXO           XOXOXOXOXOXOXOXOXOXOXOXO       XOXOXOXOXOXOX   " << endl;

    for(delay = 0; delay < 99999000; delay++);

    system("cls");
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(94) << "  XOXOXOXOXOXOXOXOXOXOXOXO    XOXOXOXOXOXOXOXOXOXO         XOXOXOXOXOXO     " << endl;
    cout << setw(94) << "  OXOXOXOXOXOXOXOXOXOXOXOX   XOXOXOXOXOXOXOXOXOXOXO      OXOXOXOXOXOXOXOXO  " << endl;
    cout << setw(94) << "  XOXOXOXOXOXOXOXOXOXOXOXO  XOXOXOXOXOXOXOXOXOXOXOXO   XOXOXOX         XOXOX" << endl;
    cout << setw(94) << "           OXOXOXO          OXOXOX            OXOXOX   OXOXOX               " << endl;
    cout << setw(94) << "           XOXOXOX          XOXOXO            XOXOXO   XOXOXO               " << endl;
    cout << setw(94) << "           OXOXOXO          OXOXOX            OXOXOX   OXOXOX               " << endl;
    cout << setw(94) << "           XOXOXOX          XOXOXO            XOXOXO   XOXOXO               " << endl;
    cout << setw(94) << "           OXOXOXO          OXOXOXOXOXOXOXOXOXOXOXOX   OXOXOX               " << endl;
    cout << setw(94) << "           XOXOXOX          XOXOXOXOXOXOXOXOXOXOXOXO   XOXOXO               " << endl;
    cout << setw(94) << "           OXOXOXO          OXOXOXOXOXOXOXOXOXOXOXOX   OXOXOX               " << endl;
    cout << setw(94) << "           OXOXOXO          OXOXOX            OXOXOX   XOXOXO          XOXOX" << endl;
    cout << setw(94) << "           OXOXOXO          XOXOXO            XOXOXO      OXOXOXOXOXOXOXOXO " << endl;
    cout << setw(94) << "           OXOXOXO          OXOXOX            OXOXOX        XOXOXOXOXOXOX   " << endl;

    for(delay = 0; delay < 99999000; delay++);

    system("cls");
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(94) << "  XOXOXOXOXOXOXOXOXOXOXOXO     OXOXOXOXOXOXOXOXOX      XOXOXOXOXOXOXOXOXOXOX" << endl;
    cout << setw(94) << "  OXOXOXOXOXOXOXOXOXOXOXOX    OXOXOXOXOXOXOXOXOXOX     OXOXOXOXOXOXOXOXOXOXO" << endl;
    cout << setw(94) << "  XOXOXOXOXOXOXOXOXOXOXOXO   OXOXOXOXOXOXOXOXOXOXOX    XOXOXOXOXOXOXOXOXOXOX" << endl;
    cout << setw(94) << "           OXOXOXO          OXOXOX            OXOXOX   OXOXOX               " << endl;
    cout << setw(94) << "           XOXOXOX          XOXOXO            XOXOXO   XOXOXO               " << endl;
    cout << setw(94) << "           OXOXOXO          OXOXOX            OXOXOX   OXOXOXOXOXOXOXOXOXOXO" << endl;
    cout << setw(94) << "           XOXOXOX          XOXOXO            XOXOXO   XOXOXOXOXOXOXOXOXOXOX" << endl;
    cout << setw(94) << "           OXOXOXO          OXOXOX            OXOXOX   OXOXOXOXOXOXOXOXOXOXO" << endl;
    cout << setw(94) << "           XOXOXOX          XOXOXO            XOXOXO   XOXOXO               " << endl;
    cout << setw(94) << "           OXOXOXO          OXOXOX            OXOXOX   OXOXOX               " << endl;
    cout << setw(94) << "           OXOXOXO           XOXOXOXOXOXOXOXOXOXOXO    XOXOXOXOXOXOXOXOXOXOX" << endl;
    cout << setw(94) << "           OXOXOXO            XOXOXOXOXOXOXOXOXOXO     OXOXOXOXOXOXOXOXOXOXO" << endl;
    cout << setw(94) << "           OXOXOXO             XOXOXOXOXOXOXOXOXO      XOXOXOXOXOXOXOXOXOXOX" << endl;

    for(delay = 0; delay < 99999000; delay++);

    system("cls");
    return;
}
/*****************************************************************************************************************************/
/*
Function to reset matrix and flags for a new game
*/
void game_reset(void) throw()
{
    int a, b, nums = 49;

    for(a = 0; a <= 4; a += 2)
    {
        for(b = 0; b <= 4; b += 2)
        {
            game_board[a][b] = nums;
            ++nums;
        }
    }

    for(a = 0; a < 9; ++a)
    {
        flag_4[a] = 1;
    }

    return;
}
/****************************************************************************************************************************/
/*
Function to accept players' names
*/
void player_names_accepter(void) throw()
{
    cout << "Hi guys! May I know your names please?\n";
    cout << "\nWho wants sign X: ";
    gets(player1);
    cout << "Who wants sign O: ";
    gets(player2);
    system("cls");
    return;
}
/*****************************************************************************************************************************/
/*
Function to print the game board in matrix form after each turn
*/
void display_game_board(void) throw()
{
    for(int a = 0; a < 5; ++a)
    {
        cout << '\n' << '\t' << '\t' << '\t' << '\t' << '\t' << '\t';

        for(int b = 0; b < 5; ++b)
        {
            cout << ' ' << game_board[a][b];
        }
    }

    cout << endl << endl << "Sign for ";

    for(index = 0; player1[index] != '\0'; ++index)
    {
        cout << player1[index];
    }

    cout << ": X" << endl <<
         "Sign for ";

    for(index = 0; player2[index] != '\0'; ++index)
    {
        cout << player2[index];
    }

    cout << ": O" << endl;
    return;
}
/*****************************************************************************************************************************/
/*
This function checks each input made by the user for errors and then inserts the correct input into the matrix
*/
void check_and_insert(char move_in, int switch_player) throw()
{
    char ins, move;

    if(switch_player == 1)
        ins = 'X';
    else
        ins = 'O';

check:

    switch(move_in)
    {
        case '1':

            if(game_board[0][0] != 'X' && game_board[0][0] != 'O')
            {
                game_board[0][0] = ins;
                flag_4[0] = 0;
            }
            else
            {
                flag_3 = 0;
            }

            break;

        case '2':

            if(game_board[0][2] != 'X' && game_board[0][2] != 'O')
            {
                game_board[0][2] = ins;
                flag_4[1] = 0;
            }
            else
            {
                flag_3 = 0;
            }

            break;

        case '3':

            if(game_board[0][4] != 'X' && game_board[0][4] != 'O')
            {
                game_board[0][4] = ins;
                flag_4[2] = 0;
            }
            else
            {
                flag_3 = 0;
            }

            break;

        case '4':

            if(game_board[2][0] != 'X' && game_board[2][0] != 'O')
            {
                game_board[2][0] = ins;
                flag_4[3] = 0;
            }
            else
            {
                flag_3 = 0;
            }

            break;

        case '5':

            if(game_board[2][2] != 'X' && game_board[2][2] != 'O')
            {
                game_board[2][2] = ins;
                flag_4[4] = 0;
            }
            else
            {
                flag_3 = 0;
            }

            break;

        case '6':

            if(game_board[2][4] != 'X' && game_board[2][4] != 'O')
            {
                game_board[2][4] = ins;
                flag_4[5] = 0;
            }
            else
            {
                flag_3 = 0;
            }

            break;

        case '7':

            if(game_board[4][0] != 'X' && game_board[4][0] != 'O')
            {
                game_board[4][0] = ins;
                flag_4[6] = 0;
            }
            else
            {
                flag_3 = 0;
            }

            break;

        case '8':

            if(game_board[4][2] != 'X' && game_board[4][2] != 'O')
            {
                game_board[4][2] = ins;
                flag_4[7] = 0;
            }
            else
            {
                flag_3 = 0;
            }

            break;

        case '9':

            if(game_board[4][4] != 'X' && game_board[4][4] != 'O')
            {
                game_board[4][4] = ins;
                flag_4[8] = 0;
            }
            else
            {
                flag_3 = 0;
            }

            break;
    }

    if(flag_3 == 0) //flag_3=0 means column already holds either X or O
    {
        cout << "\nSorry... this column has already been used. Please choose a different column: ";
        move = getchar();
        cout << move;
check_2:

        if(move >= 49 && move <= 57)
        {
            flag_3 = 1;
            move_in = move;
            goto check;
        }
        else
        {
            cout << "\nPlease enter a number only from those appearing on the board: ";
            move = getchar();
            cout << move;
            goto check_2;
        }
    }

    else
    {
        return;
    }
}
/*****************************************************************************************************************************/
/*
This function helps to keep a regular check on the board to see if it is completely filled or not
*/
void board_full_check(void) throw()
{
    if(flag_4[0] == 0 && flag_4[1] == 0 && flag_4[2] == 0 && flag_4[3] == 0 && flag_4[4] == 0 && flag_4[5] == 0 && flag_4[6] == 0 && flag_4[7] == 0 && flag_4[8] == 0)
    {
        flag_2 = 0;
        game = 0;
        return;
    }

    else
    {
        return;
    }
}
/*****************************************************************************************************************************/
/*
This function keeps a check if a player has won the game
*/
void check_for_the_winner(void) throw()
{
    if(game_board[0][0] == game_board[0][2] && game_board[0][2] == game_board[0][4])
    {
        game = 0;
        flag_1 = 0;
        return;
    }
    else if(game_board[2][0] == game_board[2][2] && game_board[2][2] == game_board[2][4])
    {
        game = 0;
        flag_1 = 0;
        return;
    }
    else if(game_board[4][0] == game_board[4][2] && game_board[4][2] == game_board[4][4])
    {
        game = 0;
        flag_1 = 0;
        return;
    }
    else if(game_board[0][0] == game_board[2][0] && game_board[2][0] == game_board[4][0])
    {
        game = 0;
        flag_1 = 0;
        return;
    }
    else if(game_board[0][2] == game_board[2][2] && game_board[2][2] == game_board[4][2])
    {
        game = 0;
        flag_1 = 0;
        return;
    }
    else if(game_board[0][4] == game_board[2][4] && game_board[2][4] == game_board[4][4])
    {
        game = 0;
        flag_1 = 0;
        return;
    }
    else if(game_board[0][0] == game_board[2][2] && game_board[2][2] == game_board[4][4])
    {
        game = 0;
        flag_1 = 0;
        return;
    }
    else if(game_board[0][4] == game_board[2][2] && game_board[2][2] == game_board[4][0])
    {
        game = 0;
        flag_1 = 0;
        return;
    }
    else
    {
        return;
    }
}
/*****************************************************************************************************************************/
int main() throw()
{
    system("cls");  //Call to system("cls") function for clearing the screen

    char move, wish;
    int switch_player;

    /*
    The following two function calls (startup_1() and startup_2()) are meant for displaying text messages
    at the beginning of game. These can be toggled on and off using // as done in startup_1
    */

    //startup_1();
    startup_2();

play_on:

    player_names_accepter();
    display_game_board();

    switch_player = 1;

    do
    {
        if(switch_player == 1)
        {
            cout << "\nMake your move ";

            for(index = 0; player1[index] != '\0'; ++index)
            {
                cout << player1[index];
            }

            cout << ": ";
        }
        else
        {
            cout << "\nMake your move ";

            for(index = 0; player2[index] != '\0'; ++index)
            {
                cout << player2[index];
            }

            cout << ": ";
        }

        move = getchar();
        cout << move;
check:

        if(move >= 49 && move <= 57)
        {
            check_and_insert(move, switch_player);  //Call to function check_and_insert with args
        }
        else
        {
            system("cls");
            display_game_board();
            cout << "\nPlease enter a number only from those appearing on the board: ";
            move = getchar();
            cout << move;
            goto check;
        }

        check_for_the_winner(); //Call to function check_for_the_winner

        if(flag_1)  //If flag_1 remains unaltered by function check_for_the_winner
        {
            system("cls");
            display_game_board();
            board_full_check();

            if(flag_2)  //If flag_2 remains unaltered by the function board_full_check
            {
                if(switch_player == 1)
                {
                    switch_player = 2;
                }
                else
                {
                    switch_player = 1;
                }
            }
        }
        else
        {
            system("cls");
            display_game_board();
        }

    }while(game);

    if(flag_1 == 0) //If a player has won
    {
        flag_1 = 1;

        if(switch_player == 1)
        {
            cout << "\nCongratulations ";

            for(index = 0; player1[index] != '\0'; ++index)
            {
                cout << player1[index];
            }

            cout << " !! You have won the game !! :D" << endl;
        }
        else
        {
            cout << "\nCongratulations ";

            for(index = 0; player2[index] != '\0'; ++index)
            {
                cout << player2[index];
            }

            cout << " !! You have won the game !! :D" << endl;
        }

        cout << endl << "I hope you guys enjoyed playing..." << endl;
        cout << endl << "Options:" << endl;
        cout << "Press Y if you wish to play again" << endl;
        cout << "Press N if you wish to quit" << endl;
        cout << "Your choice: ";
        wish = getchar();
        cout << wish;
check_2:

        if(wish == 'Y' || wish == 'y')  //Checking for correct input in variable (wish)
        {
            cout << "Resetting your game now...";
            game_reset();   //Call to function game_reset
            system("cls");
            game = 1;   //Restore game flag value
            goto play_on;   //Control transfer to label play_on
        }

        else if(wish == 'N' || wish == 'n')
        {
            system("cls");
            cout << "Bye! See you soon! :D" << endl;
        }

        else    //In case of invalid input
        {
            cout << "\nPlease press either Y/N: ";
            wish = getchar();
            cout << wish;
            goto check_2;
        }
    }

    else if(flag_2 == 0)
    {
        flag_2 = 1;
        cout << endl << "Hey !! It's a tie !! :)" << endl;
        cout << endl << "I hope you guys enjoyed playing..." << endl;
        cout << endl << "Options:" << endl;
        cout << "Press Y if you wish to play again" << endl;
        cout << "Press N if you wish to quit" << endl;
        cout << "Your choice: ";
        wish = getchar();
        cout << wish;
check_3:

        if(wish == 'Y' || wish == 'y')
        {
            cout << "Resetting your game now..." << endl;
            game_reset();
            system("cls");
            game = 1;
            goto play_on;
        }

        else if(wish == 'N' || wish == 'n')
        {
            system("cls");
            cout << "Bye! See you soon! :D";
        }

        else
        {
            cout << "\nPlease press either Y/N: ";
            wish = getchar();
            cout << wish;
            goto check_3;
        }
    }

    return 0;
}
