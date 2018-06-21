#pragma once
#include "Libery.h"

class Music
{
public:
	Music() {
		Author = " ";
		Singer = " ";
		Name = " ";
		Genre = 0;
		Time = 0;
		Quality = 0;
	}
	void SetAll(char *autor, char*singer, char*name, int genre, double time, int quality) {
		Author = autor;
		Singer = singer;
		Name = name;
		Genre = genre;
		Time = time;
		Quality = quality;
	}
	friend ostream & operator<<(ostream & os, Music b)
	{
		os << b.Author << "\t" << b.Singer << "\t" << b.Name << "\t" << b.Genre << "\t" << b.Time << "\t" << b.Quality << endl;
		return os;
	}

	friend istream & operator >> (istream & is, Music & b)
	{
		is >> b.Author >> b.Singer >> b.Name >> b.Genre >> b.Time >> b.Quality;
		return is;
	}

	void print() {
		/*cout << "Автор: " << Author << "\n";
		cout << "Имя: " << Name << "\n";
		cout << "Певец : " << Singer << "\n";*/
		cout << "Время: " << Time<< "\n";
		cout << "Жанр: " << Genre << "\n";
		cout << "Качество: " << Quality << "\n";
		cout << "\n";
	}

	string getAuthor()const {
		return Author;
	}
	string getSinger()const {
		return Singer;
	}
	string getName()const {
		return Name;
	}
	int getGenre()const {
		return Genre;
	}
	double getTime()const {
		return Time;
	}
	int getQuality()const {
		return Quality;
	}
	void setAuthor(string Author) {
		this->Author = Author;
	}
	void setSinger(string Singer) {
		this->Singer = Singer;
	}
	void setName(string Name) {
		this->Name = Name;
	}
	void setGenre(int Genre) {
		this->Genre = Genre;
	}
	void setTime(double Time) {
		this->Time = Time;
	}
	void setTime(int Quality) {
		this->Quality = Quality;
	}


protected:
	string Author;
	string Singer;
	string Name;
	int Genre;
	double Time;
	int Quality;
};
