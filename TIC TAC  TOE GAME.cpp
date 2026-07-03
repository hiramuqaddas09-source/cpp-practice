 #include<iostream>
using namespace std;
char board[3][3]={{'1','2','3',},{'4','5','6',},{'7','8','9',},};
char turn='O';
int row,column;
bool draw = false;
void disaply_board( )
{
	system("cls");
cout<<"\n\n\t This is  T I C   T A C    T O E    Game!"<<endl;
cout<<"\n\tplayer1[X]";
cout<<"\n\tPlayer2[O]\n";

}
  void player_turn()
{
     int choice;
    if(turn=='X')
        cout<<"\t\nEnter your location to mark[1-9] Player1 turn[X]:";
	if(turn=='O')
	   cout<<"\t\nEnter your location to mark[1-9]  Player2 turn[O]:";
	   cin>>choice;
	switch(choice){
		case 1:row=0; column=0;break;
		case 2:row=0; column=1;break;
		case 3:row=0; column=2;break;
		case 4:row=1; column=0;break;
		case 5:row=1; column=1;break;
		case 6:row=1; column=2;break;
		case 7:row=2; column=0;break;
		case 8:row=2; column=1;break;
		case 9:row=2; column=2;break;
		default:
			cout<<"invalid Choice:";
			break;
      }
         if(turn=='X'&& board[row][column]!='X'&& board[row][column]!='O')
         {
	      board[row][column]='X';
	     turn='O';
	      }
	     else if(turn=='O'&& board[row][column]!='X'&& board[row][column]!='O')
	     {
	     board[row][column]='O';
	     turn='X';
	     }
	     else
	     {
		 cout<<"Box already filed! Try again!!\n\n";
	     player_turn();
	    }
	    display_board ();
  }
  bool gameover()
  {
  	// any win
  	for(int i=0;i<3;i++)
  	if(board[i][0]==board[i][1] && board[i][0]==board[i][2] ||board[0][i]==board[1][i] && board[0][i]==board[2][i])
  	return false;
	if(board[0][0]==board[1][1]&&board[0][0]==board[2][2] || board[0][2]==board[1][1] &&board[0][0]==board[2][0])
  	return false;
  	//game continue
  	for(int i=0;i<3;i++)
  	for(int j=0;j<3;j++)
  	if(board[i][j]!='X' && board[i][j]!='O')
  	return true;
  	//game draw
  	draw = true;
  	return false;
  			
  }
  
int main()
{
	while(gameover())
	{
    board();
    player_turn();
	gameover();
    }

if(turn='X' && draw ==false )
cout<<"Player2 [O] Wins!! Congratulations\n";
else if(turn='O' && draw ==false )
cout<<"Player1 [X] Wins!! Congratulations\n";
else
cout<<"Game is Draw!!\n";
}
