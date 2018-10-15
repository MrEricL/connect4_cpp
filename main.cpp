#include <iostream>
#include <string>

std::string display_board(std::string board [6][7]){
	std::string ret = "";
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 7; j++){
			ret+=board[i][j];
		}
		ret+="\n";
	}
	return ret;
}

int main(int argc, char const *argv[])
{
	std::string board[6][7];
	std::cout << display_board(board) << "\n";
	int player = 0;

	return 0;
}