#ifndef IPARSER_HPP
# define IPARSER_HPP

template <class NodeType, class IterableType>
class IParser
{
NodeType *root;
typedef typename IterableType::iterator InputIt;
public:
    IParser() : root(nullptr) { }
    virtual ~IParser() = default;
    void link(InputIt firstToken, InputIt lastToken)
    {
        root = parseToken(firstToken, lastToken);
    }
    inline NodeType *getRoot() const { return (root); }
protected:
    /*
     * Delegates the responsibility to create the AST to
     * the concrete implementation
     */
    virtual NodeType *parseToken(InputIt firstToken, InputIt lastToken) = 0;
};

#endif
