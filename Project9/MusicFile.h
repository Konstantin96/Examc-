#include "Music.h"
#include "File.h"

class MusicFile:public Music,public File
{
public:
	void PrintMusicFile() {
		Music::print();
		File::print();
	}

private:

};

