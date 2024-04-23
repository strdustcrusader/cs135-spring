#include <iostream>
#include <string>
using namespace std;

//  CLASS TIME + FUNCTIONS
class Time { 
public:
    int h;
    int m;
};

void printTime(Time time) {
    cout << time.h << ":" << time.m;
}

int minutesSinceMidnight(Time time) {
    return time.h * 60 + time.m; // since midnight is 00:00, only need to calculate minutes
}

int minutesUntil(Time earlier, Time later) {
    return (later.h * 60 + later.m) - (earlier.h * 60 + earlier.m); // finds difference
}

Time addMinutes(Time time0, int min) {
    int total = minutesSinceMidnight(time0) + min;
    Time newTime = {(total / 60), (total % 60)};
    return newTime;
}

// TIME FUNCTIONS END ( ´-ω･)︻┻┳══━一 :｡･:*:･ﾟ’★,｡･:*:･ﾟ’☆ ✴==≡눈٩(`皿´҂)ง		

// CLASS MOVIE
enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

// MOVIE + TIMESLOT FUNCTIONS
void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts) {
    printMovie(ts.movie);
    cout << " [starts at ";
    printTime(ts.startTime);
    Time endTime = addMinutes(ts.startTime, ts.movie.duration);
    cout << ", ends by ";
    printTime(endTime);
    cout << "]";
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie) {
    Time nextMovieStart = addMinutes(ts.startTime, ts.movie.duration);
    TimeSlot nextMovieTimeSlot;
    nextMovieTimeSlot.movie = nextMovie;
    nextMovieTimeSlot.startTime = nextMovieStart;
    return nextMovieTimeSlot;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2) {
    if (minutesSinceMidnight(ts1.startTime) < minutesSinceMidnight(ts2.startTime)) {
        return minutesSinceMidnight(addMinutes(ts1.startTime, ts1.movie.duration)) > minutesSinceMidnight(ts2.startTime);
    } else if (minutesSinceMidnight(ts2.startTime) < minutesSinceMidnight(ts1.startTime)) {
        return minutesSinceMidnight(addMinutes(ts2.startTime, ts2.movie.duration)) > minutesSinceMidnight(ts1.startTime);
    }
    return true;
}


// MOVIE + TIMESLOT FUNCTIONS END ｀、ヽ｀ヽ｀、ヽ(ノ＞＜)ノ ｀、ヽ｀☂ヽ｀、ヽ	

// MAIN TEST
 int main()
{
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    Movie movie3 = {"Black Panther", ACTION, 134};
    
    // Extra 2 movies
    Movie movie4 = {"Perfect Blue", ACTION, 81};
    Movie movie5 = {"Spider-man: Into The Spider-verse", ACTION, 117};

    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie2, {12, 15}}; 
    TimeSlot evening = {movie2, {16, 45}}; 
    
    printTimeSlot(morning);
    cout << endl;
    printTimeSlot(daytime);
    cout << endl;
    printTimeSlot(evening);
    cout << endl;
}

// (´･ᴗ･ ` )
// (´･ᴗ･ ` )