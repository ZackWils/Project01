#pragma once
#include <string>

class Patient {
private:
    std::string name;
    std::string ailment;
    short severity;
    short timeCriticality;
    short contagiousness;

public:
    //Getters
    inline std::string getName() { return name; }
    inline std::string getAilment() { return ailment; }
    inline short getSeverity() { return severity; }
    inline short getTimeCriticality() { return timeCriticality; }
    inline short getContagiousness() { return contagiousness; }
    //Setters
    inline void setName(std::string str) { name = str; }
    inline void setAilment(std::string str) { ailment = str; }
    inline void setSeverity(short num) { severity = num; }
    inline void setTimeCriticality(short num) { timeCriticality = num; }
    inline void setContagiousness(short num) { contagiousness = num; }

    //Constructors
    Patient() : name(""), ailment(""), severity(1), timeCriticality(1), contagiousness(0) {}
    Patient(std::string str1, std::string str2, short num1, short num2, short num3)
        : name(str1), ailment(str2), severity(num1), timeCriticality(num2), contagiousness(num3) {}

    //Calculating priority
    inline short getPriority() { return getSeverity() + getTimeCriticality() + getContagiousness(); }
    //Comparing patients by priority
    inline bool operator>(Patient rhs) { return this->getPriority() > rhs.getPriority(); }
};
