#include "../../inc/calcParser/Token.h"

namespace calcParser
{
	Token::Token(TokenType type, string text)
	{
		this->type = type;
		this->text = text;
	}

	void Token::SetType(TokenType type)
	{
		this->type = type;
	}

	void Token::SetText(string text)
	{
		this->text = text;
	}

	TokenType Token::GetType()
	{
		return type;
	}

	string Token::GetText()
	{
		return text;
	}
}