#pragma once
#include  <iostream>
#include  <cstdlib>
#include  <iomanip>
#include  <string>
#include  <vector>
#include  <list>
#include  <windows.h>
#include  <cmath>
#include  <conio.h>
#include  <windowsx.h>
#include  <ctime>
#include  <fstream>
using  namespace  std;
vector <char> guessed_Alphabets;
void clearguess() // deletes the vector;
{
	while (!guessed_Alphabets.empty())
	{
		guessed_Alphabets.pop_back();
	}
}

void hangman1()
{
	cout << "     " << char(201) << "=====================" << char(187) << "  " << endl;
	cout << "     " << char(186) << "	                   " << char(186) << "  " << endl;
	cout << "     " << char(186) << "	                   " << char(186) << "  " << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "=====" << char(202) << "======" << endl;
	//system("pause");

}
void hangman2()
{
	cout << "     " << char(201) << "==========" << char(203) << "==========" << char(187) << "     " << endl;
	cout << "     " << char(186) << "	        " << char(186) << "          " << char(186) << "    " << endl;
	cout << "     " << char(186) << "	                   " << char(186) << "  " << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "=====" << char(202) << "======" << endl;
}
void hangman3()
{
	cout << "     " << char(201) << "==========" << char(203) << "==========" << char(187) << "     " << endl;
	cout << "     " << char(186) << "	        " << char(186) << "          " << char(186) << "    " << endl;
	cout << "     " << char(186) << "         " << char(201) << char(202) << char(187) << "         " << char(186) << endl;
	cout << "     " << char(186) << "	       " << char(200) << char(203) << char(188) << " " << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "=====" << char(202) << "======" << endl;

}
void hangman4()
{
	cout << "     " << char(201) << "==========" << char(203) << "==========" << char(187) << "     " << endl;
	cout << "     " << char(186) << "	        " << char(186) << "          " << char(186) << "    " << endl;
	cout << "     " << char(186) << "         " << char(201) << char(202) << char(187) << "         " << char(186) << endl;
	cout << "     " << char(186) << "	       " << char(200) << char(203) << char(188) << " " << endl;
	cout << "     " << char(186) << "	   " << char(201) << "====" << char(202) << "====" << char(187) << endl;
	cout << "     " << char(186) << "     " << char(186) << "         " << char(186) << endl;
	cout << "     " << char(186) << "     " << char(186) << "         " << char(186) << endl;
	cout << "     " << char(186) << "     " << char(186) << "         " << char(186) << endl;
	cout << "     " << char(186) << "     " << char(186) << "         " << char(186) << endl;
	cout << "     " << char(186) << "     " << char(200) << "=========" << char(188) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "=====" << char(202) << "======" << endl;
}
void hangman5()
{
	cout << "     " << char(201) << "==========" << char(203) << "==========" << char(187) << "     " << endl;
	cout << "     " << char(186) << "	        " << char(186) << "          " << char(186) << "    " << endl;
	cout << "     " << char(186) << "         " << char(201) << char(202) << char(187) << "         " << char(186) << endl;
	cout << "     " << char(186) << "  \\|/    " << char(200) << char(203) << char(188) << endl;
	cout << "     " << char(186) << "	 " << char(186) << " " << char(201) << "====" << char(202) << "====" << char(187) << endl;
	cout << "     " << char(186) << "   " << char(186) << " " << char(186) << "         " << char(186) << endl;
	cout << "     " << char(186) << "   " << char(200) << "=" << char(188) << "         " << char(186) << endl;
	cout << "     " << char(186) << "	   " << char(186) << "         " << char(186) << endl;
	cout << "     " << char(186) << "	   " << char(186) << "         " << char(186) << endl;
	cout << "     " << char(186) << "     " << char(200) << "=========" << char(188) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "=====" << char(202) << "======" << endl;
}
void hangman6()
{
	cout << "     " << char(201) << "==========" << char(203) << "==========" << char(187) << "     " << endl;
	cout << "     " << char(186) << "	        " << char(186) << "          " << char(186) << "    " << endl;
	cout << "     " << char(186) << "         " << char(201) << char(202) << char(187) << "         " << char(186) << endl;
	cout << "     " << char(186) << "  \\|/    " << char(200) << char(203) << char(188) << "    \\|/" << endl;
	cout << "     " << char(186) << "	 " << char(186) << " " << char(201) << "====" << char(202) << "====" << char(187) << " " << char(186) << endl;
	cout << "     " << char(186) << "   " << char(186) << " " << char(186) << "         " << char(186) << " " << char(186) << endl;
	cout << "     " << char(186) << "   " << char(200) << "=" << char(188) << "         " << char(200) << "=" << char(188) << endl;
	cout << "     " << char(186) << "	   " << char(186) << "         " << char(186) << endl;
	cout << "     " << char(186) << "	   " << char(186) << "         " << char(186) << endl;
	cout << "     " << char(186) << "     " << char(200) << "=========" << char(188) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "     " << char(186) << endl;
	cout << "=====" << char(202) << "======" << endl;
}
void hangman7()
{
	cout << "     " << char(201) << "==========" << char(203) << "==========" << char(187) << "     " << endl;
	cout << "     " << char(186) << "	        " << char(186) << "          " << char(186) << "    " << endl;
	cout << "     " << char(186) << "         " << char(201) << char(202) << char(187) << "         " << char(186) << endl;
	cout << "     " << char(186) << "  \\|/    " << char(200) << char(203) << char(188) << "    \\|/" << endl;
	cout << "     " << char(186) << "	 " << char(186) << " " << char(201) << "====" << char(202) << "====" << char(187) << " " << char(186) << endl;
	cout << "     " << char(186) << "   " << char(186) << " " << char(186) << "         " << char(186) << " " << char(186) << endl;
	cout << "     " << char(186) << "   " << char(200) << "=" << char(188) << "         " << char(200) << "=" << char(188) << endl;
	cout << "     " << char(186) << "	   " << char(186) << "         " << char(186) << endl;
	cout << "     " << char(186) << "	   " << char(186) << "         " << char(186) << endl;
	cout << "     " << char(186) << "     " << char(200) << "=" << char(203) << "=======" << char(188) << endl;
	cout << "     " << char(186) << "       " << char(186) << endl;
	cout << "     " << char(186) << "    .==" << char(188) << endl;
	cout << "     " << char(186) << endl;
	cout << "=====" << char(202) << "======" << endl;
}
void hangman8()
{
	cout << "     " << char(201) << "==========" << char(203) << "==========" << char(187) << "     " << endl;
	cout << "     " << char(186) << "	        " << char(186) << "          " << char(186) << "    " << endl;
	cout << "     " << char(186) << "         " << char(201) << char(202) << char(187) << "         " << char(186) << endl;
	cout << "     " << char(186) << "  \\|/    " << char(200) << char(203) << char(188) << "    \\|/" << endl;
	cout << "     " << char(186) << "	 " << char(186) << " " << char(201) << "====" << char(202) << "====" << char(187) << " " << char(186) << endl;
	cout << "     " << char(186) << "   " << char(186) << " " << char(186) << "         " << char(186) << " " << char(186) << endl;
	cout << "     " << char(186) << "   " << char(200) << "=" << char(188) << "         " << char(200) << "=" << char(188) << endl;
	cout << "     " << char(186) << "	   " << char(186) << "         " << char(186) << endl;
	cout << "     " << char(186) << "	   " << char(186) << "         " << char(186) << endl;
	cout << "     " << char(186) << "     " << char(200) << "=" << char(203) << "=====" << char(203) << "=" << char(188) << endl;
	cout << "     " << char(186) << "       " << char(186) << "     " << char(186) << endl;
	cout << "     " << char(186) << "    .==" << char(188) << "     " << char(200) << "==." << endl;
	cout << "     " << char(186) << endl;
	cout << "=====" << char(202) << "======" << endl;
}

void fillWithAlphabets(vector <char>& a) // filling up a vector with all the alphabets;
{
	for (int i = 97; i < 123; i++)
	{
		a.push_back(char(i));
	}

}
void printAvailable(vector <char> available) // prints available letters;
{
	cout << "             " << "Available letters are:" << endl;
	cout << "             ";
	int size_ofVector = available.size();
	for (int i = 0; i < size_ofVector / 2; i++)
	{
		cout << available[i] << " ";
	}
	cout << endl;
	cout << "             ";
	for (int i = size_ofVector / 2; i < size_ofVector; i++)
	{
		cout << available[i] << " ";
	}
	cout << endl;
}
void deleteGuessed(vector <char>& toDelete, char b) // delete the guessed alphabet;
{
	int size_ofVector = toDelete.size();
	for (int i = 0; i < size_ofVector; i++)
	{
		if (toDelete[i] == b)
		{
			toDelete.erase(toDelete.begin() + i);
			size_ofVector--;
		}
	}
}
void guessedToVector(char guessAlphabet, int& br) // fills the vector p with guessed letters;
{
	bool if_true = false;
	int size_ofVector = guessed_Alphabets.size();
	for (int i = 0; i < size_ofVector; i++)
	{
		if (guessAlphabet == guessed_Alphabets[i])
		{
			if_true = true;
			cout << "You have already chosen this letter!" << endl;
			Sleep(1200);
			break;
		}
	}
	if (if_true == false)
	{
		guessed_Alphabets.push_back(guessAlphabet);
	}
}
void printGuessed() // prints guessed letters;

{
	cout << "             " << "Letters that are used so far:" << endl;
	cout << "             ";
	int size_ofVector = guessed_Alphabets.size();
	for (int i = 0; i < size_ofVector; i++)
	{
		cout << guessed_Alphabets[i] << " ";
	}
	cout << endl;
}
void logo1() // prints the logo of the game;
{
	cout << "      ___           ___           ___           ___           ___           ___           ___    " << endl;
	cout << "     /\\__\\         /\\  \\         /\\__\\         /\\  \\         /\\__\\         /\\  \\         /\\__\\   " << endl;
	cout << "    /:/  /        /::\\  \\       /::|  |       /::\\  \\       /::|  |       /::\\  \\       /::|  |  " << endl;
	cout << "   /:/__/        /:/\\:\\  \\     /:|:|  |      /:/\\:\\  \\     /:|:|  |      /:/\\:\\  \\     /:|:|  |  " << endl;
	cout << "  /::\\  \\ ___   /::\\~\\:\\  \\   /:/|:|  |__   /:/  \\:\\  \\   /:/|:|__|__   /::\\~\\:\\  \\   /:/|:|  |__ " << endl;
	cout << " /:/\\:\\  /\\__\\ /:/\\:\\ \\:\\__\\ /:/ |:| /\\__\\ /:/__/_\\:\\__\\ /:/ |::::\\__\\ /:/\\:\\ \\:\\__\\ /:/ |:| /\\__\\" << endl;
	cout << " \\/__\\:\\/:/  / \\/__\\:\\/:/  / \\/__|:|/:/  / \\:\\  /\\ \\/__/ \\/__/~~/:/  / \\/__\\:\\/:/  / \\/__|:|/:/  /" << endl;
	cout << "      \\::/  /       \\::/  /      |:/:/  /   \\:\\ \\:\\__\\         /:/  /       \\::/  /      |:/:/  / " << endl;
	cout << "      /:/  /        /:/  /       |::/  /     \\:\\/:/  /        /:/  /        /:/  /       |::/  /  " << endl;
	cout << "      \\/__/         \\/__/         \\/__/       \\__/__/         \\/__/         \\/__/         \\/__/    " << endl;
}
void shishi() // unused logo;
{
	cout << endl << "  " << "/" << "----------------------" << "\\";
	cout << endl << "  " << "|" << " " << "/" << "------------------" << "\\" << " " << "|" << endl;
	cout << "  " << "|" << " " << "|" << " " << "Let's" << "            " << "|" << " " << "|" << endl;
	cout << "  " << "|" << " " << "|" << " " << "   " << "Hang          " << "|" << " " << "|" << endl;
	cout << "  " << "|" << " " << "|" << " " << "   " << "   " << "Делян" << "      " << "|" << " " << "|" << endl;
	cout << "  " << "|" << " " << "|" << " " << "   " << "   " << "   " << "Пеевски" << " " << "|" << " " << "|" << endl;
	cout << "  " << "|" << " " << "\\" << "------------------" << "/" << " " << "|" << endl;
	cout << "  " << "\\" << "----------------------" << "/";
}
void printWord(char* guess_word, int word_length) // prints the alphabets of the word to guess;

{
	for (int i = 0; i < word_length; i++)
	{
		cout << guess_word[i] << " ";
	}
	cout << endl;
}
void searchInWord(string word, char* charword, char guess, int& state_ofHangman) // searching an alphabet in the world to guess
{
	int word_size = word.size();
	bool dali1 = false;
	for (int i = 1; i < word_size - 1; i++)
	{
		if (guess == word[i])
		{
			if (charword[i] != guess)
			{
				charword[i] = guess;
				dali1 = true;
			}
		}
	}
	if (dali1 == false) state_ofHangman++;
	//writechar(charword,n);
}
void readWord(string name_ofFile, string& word_toGuess) // opens the file and reads a random word to guess from there;
{
	fstream f(name_ofFile.c_str(), ios::in);
	srand(time(0));
	int random = rand() % 25 + 1;
	for (int i = 1; i <= random; i++)
	{
		getline(f, word_toGuess);
	}
}
void formatWord(string string_word, char* char_word) // format the word to guess;

{
	int size = string_word.size();
	for (int i = 0; i < size; i++)
	{
		if (i == 0 || i == size - 1) char_word[i] = string_word[i];
		else
		{
			if (string_word[i] == ' ') char_word[i] = ' ';
			else char_word[i] = '_';
		}
		char_word[size] = '\0';
	}
}
bool match(string word, char* charword) // check if the word is guessed;
{
	string temp = std::string(charword);
	return word == temp;
}
void capitalToSmall(char& letter)
{
	if (letter >= 65 && letter <= 90)
	{
		letter += 32;
	}
}
// Errors:
// 1. default case in switch - done!
// 2. differing capital from small letters - done!
// 3. read only alphabets - done!
// 4. read only 1 symbol by time - done!
// 5.
// 6.