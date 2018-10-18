#include <iostream>
#include <string> 
#include <main.h>

bool check_win(std::string (&board) [6][7]){
     int counter = 0;  
     for (int i = 0; i < 6; i++){
		for (int j = 0; j < 4; j++){
           // Horizontal 
         if( ((board[i][j] == board[i][j+1]) && (board[i][j+1] == board[i][j+2])))
           return true;  
         //Vertical     
         if((board[i][j] == board[i+1][j]) && (board[i+1][j] == board[i+2][j]))
           return true;  
    }    }
}

