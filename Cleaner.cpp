#include <iostream>
#include <filesystem>
#include <Windows.h>
#include <chrono> //sleep
#include <thread> //sleep
#include <string>

int main()
{
	system("color 07");

	std::cout << R"(LogsClear                          
)" << '\n';
	std::cout << "Log Cleaner para League of Legends." << std::endl;
	system("PAUSE");
	std::cout << "[-] Parando todos processos Riot Games ..." << std::endl;
	std::system("taskkill -f -im riot*");
	std::system("taskkill -f -im league*");
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	std::cout << "[-] Deletando tudo de  Riot/League logs..." << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	std::system("rd /s /q \"%userprofile%\\AppData\\Local\\Riot Games\"");
	std::system("rd /s /q \"C:\\Riot Games\\League of Legends\\Config\\Champions\"");
	std::system("rd /s /q \"C:\\Riot Games\\League of Legends\\Config\\Global\"");
	std::system("rd /s /q \"C:\\Riot Games\\League of Legends\\Logs\"");
	std::system("del \"C:\\ProgramData\\Riot Games\\machine.cfg\" /f /q");
	std::system("del \"C:\\Riot Games\\League of Legends\\Config\\input.ini\" /f /q");
	std::system("del \"C:\\Riot Games\\League of Legends\\Config\\ItemSets.json\" /f /q");
	std::system("del \"C:\\Riot Games\\League of Legends\\Config\\LCUAccountPreferences.yaml\" /f /q");
	std::system("del \"C:\\Riot Games\\League of Legends\\Config\\LCULocalPreferences.yaml\" /f /q");
	std::system("del \"C:\\Riot Games\\League of Legends\\Config\\LeagueClientSettings.yaml\" /f /q");
	std::system("del \"C:\\Riot Games\\League of Legends\\Config\\PerksPreferences.yaml\" /f /q");
	std::system("del \"C:\\Users\\%username%\\AppData\\Local\\Riot Games\Riot Client\Logs\" /f /q");
	std::system("cls");
	std::cout << "Concluido" << std::endl;
	system("PAUSE");
	return 0;
}
