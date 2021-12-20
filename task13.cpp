#include<iostream>
using namespace std;
int main()
{
	string player1,player2;
	cout<<"enter player name:";
	cin>>player1>>player2;
	if(player1 == "rock" && player2 == "scissors")
	{
		cout<<"the winner is player1:";
	}
	else if(player1=="scissors" && player2 == "paper")
	{
		cout<<"the winner is player1";
	}
	else if(player1 == "paper" && player2 =="rock")
	{
		cout<<"the winner is player1:";
	}
	else if(player2 == "rock" && player1 == "scissors")
	{
		cout<<"the winner is player2:";
	}
	else if(player2=="scissors" && player1 == "paper")
	{
		cout<<"the winner is player2";
	}
	else if(player2 == "paper" && player1 =="rock")
	{
		cout<<"the winner is player2:";
	}
	else if(player1=="rock"&& player2=="rock")
	{
		cout<<"draw";
	}
	else if(player1=="scissors"&& player2=="scissors")
	{
		cout<<"draw";
	}
	else if(player1=="paper"&& player2=="paper")
	{
		cout<<"draw";
	}
	else
	{
		cout<<"wring input:";
	}
	
}
