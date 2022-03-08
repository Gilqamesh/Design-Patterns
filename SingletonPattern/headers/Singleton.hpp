#ifndef SINGLETON_HPP
# define SINGLETON_HPP

# include <mutex>

class Singleton
{
private:
    Singleton();
    static Singleton *singletonInstance;
    static std::mutex singletonInstanceMutex; // to make the singletonInstance creation thread-safe
public:
    static Singleton *getInstance();
    void print();
};

#endif
