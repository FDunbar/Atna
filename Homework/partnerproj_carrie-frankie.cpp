//Frankyln Dunbar & Carrie Navio

#include <iostream>
#include <cstdio>
using namespace std;

char morse [][10] = {".-",    "-...",  "-.-.", "-..",  ".",    "..-.",
               "--.",   "....",  "..",   ".---", "-.-",  ".-..",
               "--",    "-.",    "---",  ".--.", "--.-", ".-.",
               "...",   "-",    "..-",  "...-", ".--",  "-..-",
               "-.--",  "--..",  ".--.-",".-.-", "---." };  //character sequence of morse code

char text[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
                       'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'Y',
'W', 'Z'}; //character sequence of morse letters



char *translatetomorse(char text [])
{}
char *translatetotext(char morse [])
{}

int main()
{
	cout << "Input 1 for text to morse, Input 2 for morse to text" << endl;
	int choice;
	cin>>choice;
	char message[1000];
	cout << "Input your message por favor" << endl;
	gets(message);
	char *answer;
	switch(choice){
	
	case 1: answer = translatetomorse(message);
	
	break;
	
	case 2 : answer = translatetotext(message);
	
	break;
	
	default : cout<< "Enter something else man" << endl;
	}
	
	return 0;
}


