#ifndef EXPRESSIONTOKENIZER_HPP
# define EXPRESSIONTOKENIZER_HPP

# include "Interfaces/ITokenizer.hpp"
# include <vector>
# include <string>
# include <unordered_map>
# include <unordered_set>

class ExpressionTokenizer : public ITokenizer<std::vector<IToken *>, std::string>
{
std::unordered_map<std::string, IToken *> nonterminalTokens;
std::unordered_set<char> metacharacters; /* characters that should be skipped */
typedef typename std::string::iterator StringIterator;
virtual IToken *createToken(const std::string &token) override;
virtual std::string aggregateToken(StringIterator &current, StringIterator limit) override;
public:
    ExpressionTokenizer();
};

#endif
