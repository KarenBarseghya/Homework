#include <iostream>
#include <vector>

void input_song();
void input_musicians();
void searchSong();
void searchMusician();
void addtoFavorite();
void removefromFavorite();
void AddMusician();
void AddSong();

class Song
{
    std::string song_name{};
    size_t year{};
    std::string singer_name{};
    size_t song_location{};
public :
    Song();
    std::string get_song_name()const;
    size_t get_year()const;
    std::string get_singer_name()const;
    size_t get_song_location()const;
};

class Musician
{
    std::string name{};
    std::string surname{};
    std::string country{};
    size_t birth_year{};
    std::vector<std::string>songs;
    public:
    std::string get_name()const;
    std::string get_surname()const;
    std::string get_country()const;
    size_t get_birth_year()const;
    void print_songs();
    Musician();
};

struct
{
    std::vector<Song>_Song;
    std::vector<Musician>_Musician;
}favorite;

struct
{
    std::vector<Song>Song_arr;
    std::vector<Musician>Musician_arr;

}cloud;


int main()
{



}

Song::Song()
{
    std::cout << "Please enter song's name : ";
    std::cin >> song_name;
    std::cout << "Please enter song's year : " ;
    std::cin >> year;
    std::cout << "Please enter singer's name : ";
    std::cin >> singer_name;
    std::cout << "Please enter song's location : ";
    std::cin >> song_location;
}

std::string Song::get_song_name()const
{
    return song_name;
}

size_t Song::get_year()const
{
    return year;
}

std::string Song::get_singer_name()const
{
    return singer_name;
}

size_t Song::get_song_location()const
{
    return song_location;
}

Musician::Musician()
{
    std::cout << "Please enter musican's name : ";
    std::cin >> name;
    std::cout << "Please enter musician's surname : ";
    std::cin >> surname;
    std::cout << "Please enter musician's country : ";
    std::cin >> country;
    std::cout << "Please enter musician's birth year : ";
    std::cin >> birth_year;
    int count = 0;
    std::cout << "Please enter count of songs : ";
    std::cin >> count;
    for(int i = 0 ; i < count ; ++i)
    {
        std::string song_name{};
        std::cout << "Please enter song name : ";
        std::cin >> song_name;
        songs.push_back(song_name);
    }
}

std::string Musician::get_name()const
{
    return name;
}

std::string Musician::get_surname()const
{
    return surname;
}

std::string Musician::get_country()const
{
    return country;
}

size_t Musician::get_birth_year()const
{
    return birth_year;
}

void Musician::print_songs()
{
    for(int i = 0 ; i < songs.size() ; ++i)
    {
        std::cout << "song No" << i + 1 << "  " << songs[i] << std::endl;
    }
}

void input_song()
{
    int count = 0;
    std::cout << "Please enter count of songs : ";
    std::cin >> count;
    for(int i = 0 ; i < count ; ++i)
    {
        std::cout << "Description of song No  " << i << std::endl; 
        Song a;
        cloud.Song_arr.push_back(a); 
    }
}

void input_musicians()
{
    int count = 0;
    std::cout << "Please enter count of musicians : ";
    std::cin >> count;
    for(int i = 0 ; i < count ; ++i)
    {
        Musician a;
        cloud.Musician_arr.push_back(a);
    }
}

void searchSong()
{
    std::string name_song;
    std::cout << "Please enter searching song name : ";
    std::cin >> name_song;
    for(int i = 0 ; i < cloud.Song_arr.size() ; ++i)
    {
        if(name_song == cloud.Song_arr[i].get_song_name())
        {
            std::cout << "Song name is  " << cloud.Song_arr[i].get_song_name() << std::endl;
            std::cout << "song's year is  " << cloud.Song_arr[i].get_year() << std::endl;
            std::cout << "Singer name is " << cloud.Song_arr[i].get_singer_name() << std::endl;
            std::cout << "Song location is " << cloud.Song_arr[i].get_song_location() << std::endl;
        }
    
    }
    for(int i = 0 ; i < favorite._Song.size() ; ++i)
    {
        if(name_song == favorite._Song[i].get_song_name())
        {
            std::cout << "Song name is  " << favorite._Song[i].get_song_name() << std::endl;
            std::cout << "song's year is  " << favorite._Song[i].get_year() << std::endl;
            std::cout << "Singer name is " << favorite._Song[i].get_singer_name() << std::endl;
            std::cout << "Song location is " << favorite._Song[i].get_song_location() << std::endl;
        }
    
    }
}

void AddMusician()
{
    Musician a;
    cloud.Musician_arr.push_back(a);
}

void AddSong()
{
    Song a;
    cloud.Song_arr.push_back(a);
}

void searchMusician()
{
    std::string name;
    std::cout << "Please enter searching musician's name : ";
    std::cin >> name;
    for(int i = 0 ; i < cloud.Musician_arr.size() ; ++i)
    {
        if(name == cloud.Musician_arr[i].get_name())
        {
            std::cout << "Name is " << cloud.Musician_arr[i].get_name() << std::endl;
            std::cout << "Surname is " << cloud.Musician_arr[i].get_surname() << std::endl;
            std::cout << "His/Her born country is  " << cloud.Musician_arr[i].get_country() << std::endl;
            std::cout << "He/She was born in  " << cloud.Musician_arr[i].get_birth_year() << std::endl;
            std::cout << "Here His/Her songs " << std::endl ;
            cloud.Musician_arr[i].print_songs();
        }
    }

    for(int i = 0 ; i < favorite._Musician.size() ; ++i)
    {
        if(name == favorite._Musician[i].get_name())
        {
            std::cout << "Name is " << favorite._Musician[i].get_name() << std::endl;
            std::cout << "Surname is " << favorite._Musician[i].get_surname() << std::endl;
            std::cout << "His/Her born country is  " << favorite._Musician[i].get_country() << std::endl;
            std::cout << "He/She was born in  " << favorite._Musician[i].get_birth_year() << std::endl;
            std::cout << "Here His/Her songs " << std::endl ;
            favorite._Musician[i].print_songs();
        }
    }
}

void addtoFavorite()
{
    int count = 0;
    std::cout << "Please enter which Song you want remove from cloud to favorite : ";
    std::cin >> count;
    favorite._Song.push_back(cloud.Song_arr[count]); 
    cloud.Song_arr.erase(cloud.Song_arr.begin() + count);
    std::cout << "Please enter which Musician you want remove from cloud to favorite : ";
    std::cin >> count;
    favorite._Musician.push_back(cloud.Musician_arr[count]);
    cloud.Musician_arr.erase(cloud.Musician_arr.begin() + count);
}

void removefromFavorite()
{
    int count = 0;
    std::cout << "Please enter which Musician you want remove from favorite : ";
    std::cin >> count;
    cloud.Musician_arr.insert(favorite._Musician.begin() + count , favorite._Musician[count]);
    favorite._Musician.erase(favorite._Musician.begin() + count);
    std::cout << "Please enter which song you want remove from favorite : ";
    std::cin >> count;
    cloud.Song_arr.insert(favorite._Song.begin() + count , favorite._Song[count]);
    favorite._Song.erase(favorite._Song.begin() + count);
}