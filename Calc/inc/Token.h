#pragma once
#include "../includes.h"

namespace calcParser
{
	enum TokenType
	{
		NUMBER,
		PLUS,
		MINUS,
		MUL,
		DIV,
		EOP
	};

	class Token
	{
	public:
		Token(TokenType type, string text);
		void SetType(TokenType type);
		void SetText(string text);
		TokenType GetType();
		string GetText();
	private:
		TokenType type;
		string text;
	};
}