#include "pch.h"
#include "Hangman.h"

int main()
{
	string file_name;
	std::string word;
	//setlocale (LC_ALL, "bulgarian");
	char choice;

	do
	{
		//shishi();
		logo1();
		cout << "\n\n\n\n\n\t\t\t\t\tChoose a category:";
		cout << "\n\n\t\t\t\t\t1. Animals:";
		cout << "\n\n\t\t\t\t\t2. Countries:";
		cout << "\n\n\t\t\t\t\t3. Foods and drinks:";
		cout << "\n\n\t\t\t\t\t4. Car models";
		cout << "\n\n\t\t\t\t\t5. Exit:";
		cout << "\n\n\t\t\t\t\tYour choice: ";
		cin.get(choice);
		cin.clear();
		cin.ignore(256, '\n');
		switch (choice)
		{
		case '1':
		{
			file_name = "Animals.txt";
			break;
		}
		case '2':
		{
			file_name = "Countries.txt";
			break;
		}
		case '3':
		{
			file_name = "Foods and Drinks.txt";
			break;
		}
		case '4':
		{
			file_name = "Model cars.txt";
			break;
		}
		case '5':
		{
			cout << endl<< "\t\t\t\t\t	Come and play again soon!" << endl << endl;
			return 0;
		}
		}
		if (choice >= '1' && choice <= '4')
		{
			system("cls");
			clearguess();
			readWord(file_name, word);
			char* charword = new char[word.size() + 1];
			formatWord(word, charword);

			char guess_char;
			int number_ofErrors = 0;
			//string hangman;
			vector <char> available;
			fillWithAlphabets(available);
			while (number_ofErrors != 8 && match(word, charword) == false)
			{
				if (number_ofErrors > 0)
				{
					if (number_ofErrors == 1) hangman1();
					if (number_ofErrors == 2) hangman2();
					if (number_ofErrors == 3) hangman3();
					if (number_ofErrors == 4) hangman4();
					if (number_ofErrors == 5) hangman5();
					if (number_ofErrors == 6) hangman6();
					if (number_ofErrors == 7) hangman7();
					cout << endl << endl;
				}

				printWord(charword, word.size() + 1);
				printAvailable(available);
				printGuessed();

				std::cout << "Input an alphabet: ";
				cin >> guess_char;
				cin.clear();
				cin.ignore(256, '\n');
				capitalToSmall(guess_char);
				if (guess_char >= 97 && guess_char <= 122)
				{
					guessedToVector(guess_char, number_ofErrors);
					searchInWord(word, charword, guess_char, number_ofErrors);
					deleteGuessed(available, guess_char);

					if (number_ofErrors == 8)
					{
						system("cls");
						hangman8();
						printWord(charword, word.size() + 1);
						printAvailable(available);
						printGuessed();
						cout << "You've lost! The word was: " << word << endl;
						system("pause");
						system("cls");
						break;
					}
					if (match(word, charword) == true)
					{
						system("cls");
						printWord(charword, word.size() + 1);
						printAvailable(available);
						printGuessed();

						cout << endl;
						cout << "t/t/Congratulations! You have guessed the word!" << endl;
						system("pause");
						system("cls");
						break;
					}
				}
				//system("pause");
				system("cls");
			}
		}
		else
		{
			system("cls");
		}	    
	} while (choice != 5);
}
