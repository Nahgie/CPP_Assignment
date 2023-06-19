#include "Board.h"

std::string Board::texts; int Board::text_line = 0;

void Board::add(std::string message) { 
	
	texts += std::to_string(text_line) + " : " + message + '\n';
	text_line++;
}

void Board::print() {

	std::cout << "************* 게시판입니다. *************\n\n" << texts << std::endl; 
}