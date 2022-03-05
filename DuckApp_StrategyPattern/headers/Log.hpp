#ifndef LOG_HPP
# define LOG_HPP

# include <string>

namespace DuckNamespace
{

class Log
{
public:
    /* naming and functionality similar to Java, prints with newline */
    static void println(const std::string &message = "");
};

}

#endif
