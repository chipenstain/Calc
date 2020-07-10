#include "../../inc/calcParser/Lexer.h"

namespace calcParser
{
	Lexer::Lexer(string input)
	{
		this->input = input;
	}

	vector<Token> Lexer::LexParse()
	{
		while (currentPosition < input.length())
		{
			char cur = Peek(0);

			if (isdigit(cur))
			{
				string text = "";
				char cur2 = Peek(0);
				while (isdigit(cur2))
				{
					text += cur2;
					cur2 = NextChar();
				}
				AddToken(NUMBER, text);
			}

			else if (cur == '+')
			{
				AddToken(PLUS);
			}
			else if (cur == '-')
			{
				AddToken(MINUS);
			}
			else if (cur == '*')
			{
				AddToken(MUL);
			}
			else if (cur == '/')
			{
				AddToken(DIV);
			}
			else
			{
				NextChar();
			}
		}
		return tokens;
	}

	void Lexer::AddToken(TokenType type)
	{
		tokens.push_back(Token(type, ""));
	}

	void Lexer::AddToken(TokenType type, string text)
	{
		tokens.push_back(Token(type, text));
	}

	char Lexer::Peek(int position)
	{
		int pos = currentPosition + position;
		if (pos >= input.length()) return '\0';
		return input[pos];
	}

	char Lexer::NextChar()
	{
		currentPosition++;
		return Peek(0);
	}
}