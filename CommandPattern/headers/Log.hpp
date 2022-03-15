#ifndef LOG_HPP
# define LOG_HPP

# include <string>

namespace RemoteNamespace
{

class Log
{
public:
    static void print(const std::string &message);
    /* naming and functionality similar to Java, prints with newline */
    static void println(const std::string &message = "");
};

}

#endif
