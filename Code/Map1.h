#pragma once
std::string TileMap1[18][51] = {
	{"S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S"},
	{"S", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "m", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "S"},
	{"S", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "S"},
	{"S", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "S"},
	{"S", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "m", "S"},
	{"S", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "d", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "S", "S"},
	{"S", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "d", "k", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "e"},
	{"S", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "k", "k", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "e"},
	{"S", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "k", "k", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "m", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "e"},
	{"S", "d", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "k", "k", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "S", " ", " ", " ", " ", " ", " ", " ", " ", "d", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "S", "S"},
	{"S", "k", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "k", "k", " ", " ", " ", " ", " ", " ", "S", " ", " ", " ", "S", " ", " ", " ", " ", " ", " ", " ", " ", "k", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "S"},
	{"S", "k", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "k", "k", " ", " ", " ", " ", " ", " ", "S", "L", "L", "L", "S", " ", " ", " ", " ", " ", " ", " ", " ", "k", " ", " ", " ", " ", " ", " ", " ", "S", " ", " ", " ", " ", " ", "S"},
	{"S", "k", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "k", "k", " ", " ", " ", " ", " ", " ", "S", "L", "L", "L", "S", " ", " ", " ", " ", " ", " ", " ", " ", "k", "m", " ", " ", "h", " ", " ", " ", "S", " ", " ", " ", " ", " ", "S"},
	{"S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", " ", " ", " ", " ", "S"},
	{"S", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "j", "j", "j", "j", " ", " ", " ", "S"},
	{"S", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "f", "M", "f", "f", "f", "M", "f", "f", "f", "f", "f", "M", "f", "M", "f", "f", "f", "f", "f", "f", "f", "f", "f", "M", "f", "f", "f", "f", "f", "f", "f", "j", "j", "j", "j", "j", " ", "m", "S"},
	{"S", "f", "f", "f", "f", "M", "f", "M", "f", "M", "f", "M", "f", "f", "f", "M", "f", "f", "f", "M", "f", "M", "f", "f", "f", "f", "f", "M", "f", "M", "f", "M", "f", "M", "f", "f", "f", "M", "f", "f", "f", "f", "f", "j", "j", "j", "j", "j", "j", "S", "S"},
	{"S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S"},

};