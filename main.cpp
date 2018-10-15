#include <iostream>
#include <string>

std::string display_board(std::string board [6][7]){
	std::string ret = "\n";
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 7; j++){
			ret+=board[i][j];
		}
		ret+="\n";
	}
	return ret+"\n";
}

//check for valid
void take_turn(int col, std::string (&board) [6][7], std::string token){
	int row = 0;
	for (int i = 5; i >= 0; i--){
		if (board[i][col] == "[ ]"){
			row = i;
			break;
		}
	}
	board[row][col] = token;
}

void fill_board(std::string (&board) [6][7]){
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 7; j++){
			board[i][j] = "[ ]";
		}
	}
}


int main(int argc, char const *argv[])
{
	std::string board[6][7];
	fill_board(board);
	int player = 0;
	std::string s[4] = {"[X]", "[O]", "Player 1's move.\n","Player 2's move.\n"};

	for (int turn = 0; turn < 42; turn ++){
		std::cout << display_board(board);
		std:: cout << ((player == 0) ? s[player+2] : s[player+2]);

		int col_move = 0;

		while (col_move <= 0 or col_move > 7){
			std::cin >> col_move;
		}
		take_turn(col_move, board, s[player]);


		player = (player == 0) ? 1 : 0;

	}


	return 0;
}