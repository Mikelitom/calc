#pragma once

enum class TokenType
{	
	Number,
	Identifier,

	Operator,
	Delimiter,
	Assignment,

	EndOfInput,
	Invalid
};