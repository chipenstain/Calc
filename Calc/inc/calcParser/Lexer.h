#pragma once
#include "../includes.h"
#include "Token.h"

namespace calcParser
{
	class Lexer
	{
	public:
		Lexer(string input);
		vector<Token> LexParse();
	private:
		string input;
		vector<Token> tokens;
		int currentPosition = 0;

		void AddToken(TokenType type);
		void AddToken(TokenType type, string text);
		char Peek(int position);
		char NextChar();
	};
}