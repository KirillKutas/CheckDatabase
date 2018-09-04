#include <iostream>
#include "Source.h"
#include <fstream>
using namespace std;
char specSymbol[] = "£€¶§©®™°±¼½¾×÷ƒΑΒΓΔΕΖΗΘΙΚΛΜΝΞΟΠΡΣΤΥΦΧΨΩαβγδεζηθικλμνξοπρςστυφχψω←↑→↓↔♠♣♥♦\"<&>…′″–—‘’‚“”„«»";
const int spec = 91;
int ns;
/*void FileName(System::String^ fname)
{
	string myString = "";
	for (int i = 0; i < fname->Length; i++)
		myString += (char)fname[i];
	stt = myString.c_str();

}*/
void SelectColumn(char column)
{
	switch (column)
	{
	case 't': {
		ns = 0;
		break;
	}
	case 'c': {
		ns = 5;
		break;
	}
	case 'n': {
		ns = 3;
		break;
	}
	case 'm': {
		ns = 1;
		break;
	}
	case 's': {
		ns = 4;
		break;
	}
	case 'p': {
		ns = 2;
		break;
	}
	}
}





void log_template(System::String^ fname)
{
	string myString = "";
	for (int i = 0; i < fname->Length; i++)
		myString += (char)fname[i];
	const char* stt = myString.c_str();

	setlocale(LC_ALL, "rus");
	int counterColumn = 0;
	char buff[100];
	ofstream fout("Log_Tempalte.txt");
	ifstream fin(stt);
	do
	{
		fin.getline(buff, 100);
		counterColumn++;

		for (int x = 0; x < 100; x++)
		{
			if (buff[x] == '\0')
				break;
			if (buff[0] == ';')
			{
				fout << "Предупреждение! Строка " << counterColumn << " пуста, будет применен стандартный шаблон." << endl;
				break;
			}
			if (buff[x] != ';')
			{
				if (buff[0] == ' ')
				{
					fout << "Ошибка! Строка " << counterColumn << " начинается с пробела." << endl;
					break;
				}
				else
				{
					if ((buff[x + 1] == ';') && (buff[x] == ' '))
					{
						fout << "Ошибка! Строка " << counterColumn << " заканчивается пробелом." << endl;
					}
				}
				for (int c = 0; c < spec ; c++)//Проверка наличия спец символов
				{
					if (buff[x] == specSymbol[c])
					{
						fout << "Ошибка! Строка " << counterColumn << " содержит спец символы." << endl;
						break;
					}
				}
			}
			else
			{
				break;
			}
		}
	} while (buff[0] != '\0');

	fout.close();
	fin.close();

}
void log_mail(System::String^ fname)
{
	string myString = "";
	for (int i = 0; i < fname->Length; i++)
		myString += (char)fname[i];
	const char* stt = myString.c_str();

	setlocale(LC_ALL, "rus");
	int a = 0;//счетчик для ';'
	int zz = 0;//для проверки @
	char buff[100];
	int counterColumn = 0;
	ofstream fout("Log_Mail.txt");
	ifstream fin(stt);
	do
	{
		fin.getline(buff, 100);
		counterColumn++;
		a = 0;
		zz = 0;


		for (int x = 0; x < 100; x++)
		{
			if (buff[x] == '\0')
				break;
			if (buff[x] == ';')
			{
				a++;
			}
			if (a == 1)
			{
				if (buff[x] == '@')
					zz++;
				if ((buff[x + 1] == ';') && (buff[x] == ';'))
				{
					fout << "Ошибка! Строка " << counterColumn << " пуста." << endl;
					break;
				}
				if ((buff[x + 1] == ' ') && (buff[x] == ';'))
				{
					fout << "Ошибка! Строка " << counterColumn << " начинается с пробела." << endl;
					break;
				}
				else
				{
					if ((buff[x + 1] == ';') && (buff[x] == ' '))
					{
						fout << "Ошибка! Строка " << counterColumn << " заканчивается пробелом." << endl;
					}
					for (int c = 0; c < spec; c++)//Проверка наличия спец символов
					{
						if (buff[x] == specSymbol[c])
						{
							fout << "Ошибка! Строка " << counterColumn << " содержит спец символы." << endl;
							break;
						}
					}
				}
				if ((zz == 0) && (buff[x + 1] == ';'))
				{
					fout << "Ошибка! В строке " << counterColumn << " отсутствует @." << endl;
				}
				
			}

		}
		
	} while (buff[0] != '\0');

	fout.close();
	fin.close();

}
void log_photoName(System::String^ fname)
{
	string myString = "";
	for (int i = 0; i < fname->Length; i++)
		myString += (char)fname[i];
	const char* stt = myString.c_str();

	setlocale(LC_ALL, "rus");
	int a = 0;//счетчик для ';'
	char buff[100];
	int counterColumn = 0;
	ofstream fout("Log_PhotoName.txt");
	ifstream fin(stt);
	do
	{
		fin.getline(buff, 100);
		counterColumn++;
		a = 0;


		for (int x = 0; x < 100; x++)
		{
			if (buff[x] == '\0')
				break;
			if (buff[x] == ';')
			{
				a++;
			}
			if (a == 2)
			{
				if ((buff[x + 1] == ';') && (buff[x] == ';'))
				{
					fout << "Ошибка! Строка " << counterColumn << " пуста." << endl;
					break;
				}
				if ((buff[x + 1] == ' ') && (buff[x] == ';'))
				{
					fout << "Ошибка! Строка " << counterColumn << " начинается с пробела." << endl;
					break;
				}
				else
				{
					if ((buff[x + 1] == ';') && (buff[x] == ' '))
					{
						fout << "Ошибка! Строка " << counterColumn << " заканчивается пробелом." << endl;
					}
					for (int c = 0; c < spec; c++)//Проверка наличия спец символов
					{
						if (buff[x] == specSymbol[c])
						{
							fout << "Ошибка! Строка " << counterColumn << " содержит спец символы." << endl;
							break;
						}
					}
				}

			}

		}

	} while (buff[0] != '\0');


	fout.close();
	fin.close();
}
void log_text1(System::String^ fname)
{
	string myString = "";
	for (int i = 0; i < fname->Length; i++)
		myString += (char)fname[i];
	const char* stt = myString.c_str();

	setlocale(LC_ALL, "rus");
	int a = 0;//счетчик для ';'
	char buff[100];
	int counterColumn = 0;
	ofstream fout("Log_text1.txt");
	ifstream fin(stt);
	do
	{
		fin.getline(buff, 100);
		counterColumn++;
		a = 0;


		for (int x = 0; x < 100; x++)
		{
			if (buff[x] == '\0')
				break;
			if (buff[x] == ';')
			{
				a++;
			}
			if (a == 4)
			{
				if ((buff[x + 1] == ';') && (buff[x] == ';'))
				{
					fout << "Ошибка! Строка " << counterColumn << " пуста." << endl;
					break;
				}
				if ((buff[x + 1] == ' ') && (buff[x] == ';'))
				{
					fout << "Ошибка! Строка " << counterColumn << " начинается с пробела." << endl;
					break;
				}
				else
				{
					if ((buff[x + 1] == ';') && (buff[x] == ' '))
					{
						fout << "Ошибка! Строка " << counterColumn << " заканчивается пробелом." << endl;
					}
					for (int c = 0; c < spec; c++)//Проверка наличия спец символов
					{
						if (buff[x] == specSymbol[c])
						{
							fout << "Ошибка! Строка " << counterColumn << " содержит спец символы." << endl;
							break;
						}
					}
				}

			}

		}

	} while (buff[0] != '\0');


	fout.close();
	fin.close();
}
void log_text2(System::String^ fname)
{
	string myString = "";
	for (int i = 0; i < fname->Length; i++)
		myString += (char)fname[i];
	const char* stt = myString.c_str();

	setlocale(LC_ALL, "rus");
	int a = 0;//счетчик для ';'
	char buff[100];
	int counterColumn = 0;
	ofstream fout("Log_text2.txt");
	ifstream fin(stt);
	do
	{
		fin.getline(buff, 100);
		counterColumn++;
		a = 0;


		for (int x = 0; x < 100; x++)
		{
			if (buff[x] == '\0')
				break;
			if (buff[x] == ';')
			{
				a++;
			}
			if (a == 3)
			{
				if ((buff[x + 1] == ';') && (buff[x] == ';'))
				{
					fout << "Ошибка! Строка " << counterColumn << " пуста." << endl;
					break;
				}
				if ((buff[x + 1] == ' ') && (buff[x] == ';'))
				{
					fout << "Ошибка! Строка " << counterColumn << " начинается с пробела." << endl;
					break;
				}
				else
				{
					if ((buff[x + 1] == ';') && (buff[x] == ' '))
					{
						fout << "Ошибка! Строка " << counterColumn << " заканчивается пробелом." << endl;
					}
					for (int c = 0; c < spec; c++)//Проверка наличия спец символов
					{
						if (buff[x] == specSymbol[c])
						{
							fout << "Ошибка! Строка " << counterColumn << " содержит спец символы." << endl;
							break;
						}
					}
				}

			}

		}

	} while (buff[0] != '\0');


	fout.close();
	fin.close();
}
void log_text3(System::String^ fname)
{
	string myString = "";
	for (int i = 0; i < fname->Length; i++)
		myString += (char)fname[i];
	const char* stt = myString.c_str();

	setlocale(LC_ALL, "rus");
	int a = 0;//счетчик для ';'
	char buff[100];
	int counterColumn = 0;
	ofstream fout("Log_text3.txt");
	ifstream fin(stt);
	do
	{
		fin.getline(buff, 100);
		counterColumn++;
		a = 0;


		for (int x = 0; x < 100; x++)
		{
			if (buff[x] == '\0')
				break;
			if (buff[x] == ';')
			{
				a++;
			}
			if ((a == 5))
			{
				if ((buff[x + 1] == ';') && (buff[x] == ';'))
				{
					fout << "Ошибка! Строка " << counterColumn << " пуста." << endl;
					break;
				}
				if ((buff[x + 1] == ' ') && (buff[x] == ';'))
				{
					fout << "Ошибка! Строка " << counterColumn << " начинается с пробела." << endl;
					break;
				}
				else
				{
					if ((buff[x + 1] == '\0') && (buff[x] == ' '))
					{
						fout << "Ошибка! Строка " << counterColumn << " заканчивается пробелом." << endl;
					}
					for (int c = 0; c < spec; c++)//Проверка наличия спец символов
					{
						if (buff[x] == specSymbol[c])
						{
							fout << "Ошибка! Строка " << counterColumn << " содержит спец символы." << endl;
							break;
						}
					}
				}

			}

		}

	} while (buff[0] != '\0');


	fout.close();
	fin.close();
}
void Savelog(System::String^ fname)
{
	
	switch (ns)
	{
	case 0:
	{
		log_template(fname);
		break;
	}
	case 1:
	{
		log_mail(fname);
		break;
	}
	case 2:
	{
		log_photoName(fname);
		break;
	}
	case 3:
	{
		log_text1(fname);
		break;
	}
	case 4:
	{
		log_text2(fname);
		break;
	}
	case 5:
	{
		log_text3(fname);
		break;
	}
	}
	
}



