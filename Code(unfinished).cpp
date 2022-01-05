#include<iostream>
#include<iomanip>

using namespace std;

void output(string map[][20]);
void read(string map[][20]); // bad idea
void write(string map[][20]);

const int row = 20;
const int col = 20;

int main()
{
    string map[row][col];
    int turn;
    char spawn = 'y';
    int xcoord = 0;
    int ycoord = 0;
    
    for(int i = 0; i < row; i++)
    {    
        for(int j = 0; j < col; j++)
        {
            map[i][j] = "⬛";
        }
    }
    
    cout << "How many turns do you want?" << endl;
    cin >> turn;
    
    while(spawn == 'y')
    {
        cout << "Do you want to place a live cell?(y/n)" << endl;
        cin >> spawn;
        
        if(spawn == 'y')
        {
            cout << "Enter x coordinate (1 - 20): ";
            cin >> xcoord;
            cout << endl << "Enter y coordinate (1 - 20): ";
            cin >> ycoord;
            
            map[ycoord - 1][xcoord - 1] = "🟨";
        }
    }
    output(map);
    
    return 0;
}
void output(string map[][20])
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << setw(1) << map[i][j];
        }
        cout << endl;
    }
    read(map);
}
void read(string map[][20])
{
    int score = 0;
    
    for(int i = 0; i < row; i++)
    {    
        for(int j = 0; j < col; j++)
        {
            if(map[row + 1][col + 1] == "🟨")
            {
                cout << score;
            }
        }
    }
}
void write(string map[][20])
{
    
}
