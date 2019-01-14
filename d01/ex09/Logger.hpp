#ifndef LOGGER_H
# define LOGGER_H

# <string>

class Logger
{

    public:
        Logger(std::string _fileName);

    private:
        void        logToConsole(std::string str);
        void        logToFile(std::string str);
        std::string makeLogEntry(std::string message);

        std::string _fileName;

};

#endif