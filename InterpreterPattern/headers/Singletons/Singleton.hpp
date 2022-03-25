#ifndef SINGLETON_HPP
# define SINGLETON_HPP

# include <mutex>

template <typename T>
class Singleton
{
static T *thisInstance;
static std::mutex thisInstanceMutex;
Singleton();
public:
    static T *getInstance()
    {
        if (thisInstance == nullptr)
        {
            thisInstanceMutex.lock();
            thisInstance = new T();
            thisInstanceMutex.unlock();
        }
        return (thisInstance);
    }
};

template <typename T>
T *Singleton<T>::thisInstance = nullptr;

template <typename T>
std::mutex Singleton<T>::thisInstanceMutex;

#endif
