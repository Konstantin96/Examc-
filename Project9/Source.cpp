#include "MusicFile.h"

int main() {
	setlocale(LC_ALL, "ru");

	Music a;
	a.SetAll("autor", "singer", "song", 1, 3.45, 10);
	File b;
	b.SetAll(100, "file", "ext");
	MusicFile c;
	c.Music::SetAll("autor", "singer", "song", 2, 2, 2);

	cout << c.print << endl;
	system("pause");
	return 0;
}