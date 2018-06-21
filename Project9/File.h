#pragma once
#include "Libery.h"

class File
{
public:
	File() {
		Size = 0;
		Name = " ";
		Ext = " "; //расширение
	}
	void SetAll(unsigned size,char*name,char*ext ) {
		Size = size;
		Name=name;
		Ext= ext;
	}

	friend ostream & operator<<(ostream & os, File b)
	{
		os << b.Size << "\t" << b.Name << "\t" << b.Ext << endl;
		return os;
	}

	friend istream & operator >> (istream & is, File & b)
	{
		is >> b.Size >> b.Name >> b.Ext ;
		return is;
	}

	unsigned getSize() {
		return Size;
	}
	string getName() {
		return Name;
	}
	string getExt() {
		return Ext;
	}

	void setSize(unsigned size) {
		this->Size=size;
	}
	void setSize(string Name) {
		this->Name = Name;
	}
	void setExt(string Ext) {
		this->Ext = Ext;
	}

	void print() {
		cout << "Размер файла: " << Size << "\n";
		/*cout << "Имя файла: " << Name << "\n";
		cout << "Расширение : " << Ext << "\n";*/
		cout << "\n";
	}


protected:
	unsigned Size;
	string Name;
	string Ext;
};
