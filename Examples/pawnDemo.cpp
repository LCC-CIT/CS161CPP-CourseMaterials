#include <iostream>
using namespace std;

class pawn
{
    int row, moves;
    char column;
    bool isWhite;

    public:
    pawn()
    {
        row = 1;
        column = 'A';
        moves = 0;
        isWhite = true;
        cout << "In default constructor" << endl;
    }

    pawn(int r, char c, bool w)
    {
        row = r;
        column = c;
        moves = 0;
        isWhite = w;
    }
    pawn(bool w)
    {
        if (w)
            row = 0;
        else
            row = 7;
        column = 'A';
        moves = 0;
        isWhite = w;
    }

    void getPosition(int& r, char& col)
    {
        r = row;
        col = column;
    }
    void setBlack()
    {
        isWhite = false;
    }

    void move(int rows)
    {

        if ((moves == 0 && rows > 2) || (moves > 0 && rows > 1))
            cout << "Illegale move!" << endl;
        else
        {
            if (!isWhite)
                rows *= -1;
            row += rows;
            moves++;
        }
    }
};

int main()
{
    // test getPosition
    int row = 0;
    char column = 'A';
    pawn p1;
    p1.getPosition(row, column);
    cout << "Row: " << row << "  Column: " << column << endl;

    // test move
    p1.move(3); // Illegal!
    p1.getPosition(row, column);
    cout << "Row: " << row << "  Col: " << column << endl;
    p1.move(2); // Legal
    p1.getPosition(row, column);
    cout << "Row: " << row << "  Col: " << column << endl;
    p1.move(2); // Illegal!
    p1.getPosition(row, column);
    cout << "Row: " << row << "  Col: " << column << endl;
    p1.move(1); // Legal
    p1.getPosition(row, column);
    cout << "Row: " << row << "  Col: " << column << endl;

    p1.setBlack();
    p1.move(2); // Illegal!
    p1.getPosition(row, column);
    cout << "Row: " << row << "  Col: " << column << endl;
    p1.move(1); // Legal
    p1.getPosition(row, column);
    cout << "Row: " << row << "  Col: " << column << endl;

    cout << "Black Pawn" << endl;
    pawn p2(7,'A', false);
    p2.getPosition(row, column);
    cout << "Row: " << row << "  Col: " << column << endl;
    p2.move(2); // Legal!
    p2.getPosition(row, column);
    cout << "Row: " << row << "  Col: " << column << endl;

    cout << "Black Pawn #2" << endl;
    pawn p3(false);
    p3.getPosition(row, column);
    cout << "Row: " << row << "  Col: " << column << endl;
    p3.move(2); // Legal!
    p3.getPosition(row, column);
    cout << "Row: " << row << "  Col: " << column << endl;



    return 0;
}
