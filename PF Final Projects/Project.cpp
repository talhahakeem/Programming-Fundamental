 /*                                
   Kinza Batool
  SU-92-BSCSM-F23-293
   Section 1-F
 "Tic Tac Toe Game"
*/

#include <iostream>
using namespace std;
//Global Variables
char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}}; 
 string n_1=" ";
 string n_2=" ";
 int row;
 int column;
 char token='X';
 bool tie=false;

void function_1() {
   // Structure of the game
    cout << "    |       |    \n";
    cout << " " << space[0][0] << "  |  " << space[0][1] << "    |  " << space[0][2] << "  \n";
    cout << "____|_______|____\n";
    cout << "    |       |    \n";
    cout << " " << space[1][0] << "  |  " << space[1][1] << "    |  " << space[1][2] << "  \n";
    cout << "____|_______|____\n";
    cout << "    |       |    \n";
    cout << " " << space[2][0] << "  |  " << space[2][1] << "    |  " << space[2][2] << "  \n";
    cout << "    |       |    \n";
}



void function_2()  //for input from user
{
 int digit;
 if (token=='X')
 {
    cout<<n_1<<" "<<"Please enter:";
    cin>>digit;
 }
 if (token=='O')
 {
    cout<<n_2<<" "<<"Please enter:";
    cin>>digit;
 }
 if (digit==1)
 {
    row=0;
    column=0;
 }
 if (digit==2)
 {
    row=0;
    column=1;
 }
 if (digit==3)
 {
    row=0;
    column=2;
 }
 if (digit==4)
 {
    row=1;
    column=0;
 }
 if (digit==5)
 {
    row=1;
    column=1;
 }
 if (digit==6)
  {
    row=1;
    column=2;
  }
 if (digit==7)
  {
    row=2;
    column=0;
  }
 if (digit==8)
  {
    row=2;
    column=1;
  }
 if (digit==9)
  {
    row=2;
    column=2;
  }
  
   if(digit<1 || digit>9)         //to check that the entered digit is valid or not
  {
    cout<<"Invalid !!! "<<endl;
  }

  //to check the empty space if there is
  else if(token=='X' && space[row][column] !='X' && space[row][column]!='O')
 {
    space[row][column]='X';
    token='O';
 }
 else if(token=='O' && space[row][column] !='X' && space[row][column]!='O')
 {
    space[row][column]='O';
    token='X';
 }
 else 
 {
    cout<<"There is no empty space !!"<<endl;
 }
 
}

   bool function_3() //to check game won or tie
 {
    //to check that either any player won or not 
   for (int i=0;i<3;i++)
     {
      //for horizontal rows' elements and verical columns's elements
    if(space[i][0]==space[i][1] && space [i][0]==space[i][2] || space[0][i]==space[1][i] && space [0][i] == space[2][i])
       return true;    
     }
     //for diagonal elements
    if(space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1] == space[2][0])
    {
      return true;
    }
    //every position will be checked to determine that game is finished yet or not  
    for (int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
      {
           
           if (space [i][j]!='X' && space [i][j]!='O')
         {
          return false;   
         }
      }
    }
    // to check tie or not
    if(tie=true)
    {
    return false;
    } 
  } 
 int main() {
    cout << "Enter the name of the first player: ";
    cin >> n_1;
    cout << "Enter the name of the second player: ";
    cin >> n_2;
    cout << n_1 << " (Player 1) will play as X, and " << n_2 << " (Player 2) will play as O.\n";

    while (!function_3()) {
        function_1();
        function_2();
    }

    function_1(); // Display the final and updated state of the board

    if (token == 'X' && !tie) {
        cout << "Wohooo "<< n_2 << " Won the game !!" << endl;
    } else if (token == 'O' && !tie) {
        cout << "Wohooo "<< n_1 << " Won the game !!" << endl;
    } else {
        cout << "Oooppps !!! It's a draw !!" << endl;
    }

    return 0;
}