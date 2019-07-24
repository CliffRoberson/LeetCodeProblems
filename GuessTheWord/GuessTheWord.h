#pragma once

#include "../std_lib_facilities.h"


// This is the Master's API interface.
// You should not implement it, or speculate about its implementation
class Master {

  public:
	  int numOfGuesses = 0;
	  string answer = { "hbaczn" };
	  int guess(string word)
	  {
		  numOfGuesses++;
		  int count = 0;
		  for (int i = 0; i < answer.size(); i++)
		  {
			  if (word[i] == answer[i])
			  {
				  count++;
			  }
		  }
		  if (count == 0)
			  return -1;
		  else if (count == 6)
			  cout << "word found!!";
		  else
			  return count;
	  }
};

class Solution {
public:
	void findSecretWord(vector<string>& wordlist, Master& master) {

		//use a random number
		srand(time(0));
		int guessIndex = rand() % wordlist.size();
		string currentGuess = wordlist[guessIndex];
		int response = master.guess(currentGuess);
		while (response < 6)
		{
			
			if (response == -1)
			{
				for (int i=0;i<wordlist.size();i++)
				{
					string curWord = wordlist[i];
					for (int j = 0; j < 6; j++)
					{
						if (curWord[j] == currentGuess[j])
						{
							wordlist.erase(wordlist.begin() + i);
							j = 6;
						}							
					}										
				}
			}
			else if (response == 1)
			{
				//one of the 6 characters in curGuess is correct, so keep words which have at least 1 matching letter
				//erase words which do not have a matching letter.
				for (int i = 0; i < wordlist.size(); i++)
				{
					string curWord = wordlist[i];
					int numOfCharsThatMatch = 0;
					for (int j = 0; j < 6; j++)
					{						
						if (curWord[j] == currentGuess[j])
						{
							numOfCharsThatMatch++;
							j = 6; //jumping out of loop because we are only looking for one matching letter
						}
					}
					if (numOfCharsThatMatch < 1)
						wordlist.erase(wordlist.begin() + i);
				}
			}
			else if (response == 2)
			{
				for (int i = 0; i < wordlist.size(); i++)
				{
					string curWord = wordlist[i];
					int numOfCharsThatMatch = 0;
					for (int j = 0; j < 6; j++)
					{
						if (curWord[j] == currentGuess[j])
						{
							numOfCharsThatMatch++;
							if (numOfCharsThatMatch == 2)
								j = 6;
						}
					}
					if (numOfCharsThatMatch < 2)
						wordlist.erase(wordlist.begin() + i);
				}
			}
			else if (response == 3)
			{
				for (int i = 0; i < wordlist.size(); i++)
				{
					string curWord = wordlist[i];
					int numOfCharsThatMatch = 0;
					for (int j = 0; j < 6; j++)
					{
						if (curWord[j] == currentGuess[j])
						{
							numOfCharsThatMatch++;
							if (numOfCharsThatMatch == 3)
								j = 6;
						}
					}
					if (numOfCharsThatMatch < 3)
						wordlist.erase(wordlist.begin() + i);
				}
			}
			else if (response == 4)
			{
				for (int i = 0; i < wordlist.size(); i++)
				{
					string curWord = wordlist[i];
					int numOfCharsThatMatch = 0;
					for (int j = 0; j < 6; j++)
					{
						if (curWord[j] == currentGuess[j])
						{
							numOfCharsThatMatch++;
							if (numOfCharsThatMatch == 4)
								j = 6;
						}
					}
					if (numOfCharsThatMatch < 4)
						wordlist.erase(wordlist.begin() + i);
				}
			}
			else if (response == 5)
			{
				for (int i = 0; i < wordlist.size(); i++)
				{
					string curWord = wordlist[i];
					int numOfCharsThatMatch = 0;
					for (int j = 0; j < 6; j++)
					{
						if (curWord[j] == currentGuess[j])
						{
							numOfCharsThatMatch++;
							if (numOfCharsThatMatch == 5)
								j = 6;
						}
					}
					if (numOfCharsThatMatch < 5)
						wordlist.erase(wordlist.begin() + i);
				}
			}
			else
			{
				return;//word found
			}

			cout << response << endl;
			//for (int i = 0; i < wordlist.size(); i++)
			//	cout << wordlist[i] + " ";

			guessIndex = rand() % wordlist.size();
			currentGuess = wordlist[guessIndex];
			response = master.guess(currentGuess);
		}
	}
};