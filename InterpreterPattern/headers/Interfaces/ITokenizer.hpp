#ifndef ITOKENIZER_HPP
# define ITOKENIZER_HPP

# include <string>
# include <vector>

class IToken;

/* Template Method */

template <class ContainerType, class IterableType>
class ITokenizer
{
ContainerType compiledData;
typedef typename ContainerType::value_type ValueType;
typedef typename IterableType::iterator InputIt;
public:
    typedef typename ContainerType::iterator iterator;
    virtual ~ITokenizer() = default;
    void compile(InputIt first, InputIt last)
    {
        while (first != last)
        {
            IterableType token = aggregateToken(first, last);
            compiledData.push_back(createToken(token));
        }
    }
    inline iterator begin() { return (compiledData.begin()); }
    inline iterator end()   { return (compiledData.end()); }
protected:
    /*
     * Delegates the responsibility to create a token to a factory
     */
    virtual IToken *createToken(const IterableType &token) = 0;

    /*
     * Aggregates a single token from the 'current' position and returns it
     */
    virtual IterableType aggregateToken(InputIt &current, InputIt limit) = 0;
};

#endif
