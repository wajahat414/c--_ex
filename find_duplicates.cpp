
#include "common.h"
#include <vector>

void StringHelper ::removeDuplicates(string str)
{
    unsigned long size = str.size();
    vector<string> words;
    string word;
    for (unsigned long i = 0; i < size; i++)
    {

        if (str[i] != ' ' && i != size - 1)
        {
            word += str[i];
        }
        else
        {
            if (i == size - 1)
            {
                word += str[i];
            }
            cout << word << endl;
            words.push_back(word);
            word = "";
        }
    }

    size_t numOfWords = words.size();

    for (size_t i = 0; i < numOfWords - 1; ++i)
    {

        if (words[i].contains(words[i + 1]))
        {
            ptrdiff_t itemToremove = static_cast<std::vector<std::string>::iterator::difference_type>(i + 1);

            words.erase(words.begin() + itemToremove);

            numOfWords = words.size();
        }
        else if (words[i + 1].contains(words[i]))
        {
            ptrdiff_t itemToremove = static_cast<std::vector<std::string>::iterator::difference_type>(i);

            words.erase(words.begin() + itemToremove);
            numOfWords = words.size();
            --i;
        }
    }
    cout << "The resultant string after removing duplication is " << endl;

    for (auto val : words)
    {
        cout << val << " ";
    }
}
