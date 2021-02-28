#include <iostream>
#include <Windows.h>
using namespace std;

void menu()
{
	system("Color b");
cout <<	"  ____  _____  __  _      ___ ___  ____  ____     ___  ____      \n";
cout << "/    ||     ||  |/ ]    |   |   ||    ||    \   /  _]|    \      \n";
cout << "|  o  ||   __||  ' /     | _   _ | |  | |  _  | /  [_ |  D  )     \n";
cout << "|     ||  |_  |    \     |  \_/  | |  | |  |  ||    _]|    /     \n";
cout << "|  _  ||   _] |     |    |   |   | |  | |  |  ||   [_ |    \    \n";
cout << "|  |  ||  |   |  .  |    |   |   | |  | |  |  ||     ||  .  \    \n";
cout << "|__|__||__|   |__|\_|    |___|___||____||__|__||_____||__|\_|    \n\n";                                                      
	cout << "Auto Miner by Jordan/CLOUT3D\n\n\n";
	cout << "Press 'X' to enable and 'C' to disable.\n\n";
}

void clicker()
{
	bool click = false; //sets left click to false

	while (true)
	{
		//Left Click
		if (GetAsyncKeyState('X')) //toggle on
		{
			system("Color 0a");
			cout << "AFK Miner: ON\n\n";
			click = true; 
			Sleep(500);
		}
		else if (GetAsyncKeyState('C')) //toggle off
		{
			exit(-1);
			
		}
		if (click == true) 
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			Sleep(1000);
		}
		
	}
}		

int main()
{
	menu();
	clicker();

	return 0;
}
