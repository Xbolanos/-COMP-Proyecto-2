%defines 
%{
	#pragma warning(disable: 4996)
	#include <iostream>
	#include <cmath>
	extern int yylex();
	extern void yyerror(char const* msj)

%}
%%
	/* rule section
%%
void yyerror