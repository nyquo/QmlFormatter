#include "CommandLineParser.hpp"
#include <algorithm>
#include <string>

CommandLineParser::CommandLineParser(int& argc, char** argv)
{
    for (int i = 1; i < argc; ++i)
    {
        this->m_tokens.push_back(std::string(argv[i]));
    }
}

const std::string& CommandLineParser::getCmdOption(const std::string& option) const
{
    auto it = std::find(m_tokens.begin(), m_tokens.end(), option);
    if (it != m_tokens.end() && ++it != m_tokens.end())
    {
        return *it;
    }
    static const std::string s_empty_string("");
    return s_empty_string;
}