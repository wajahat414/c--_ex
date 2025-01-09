#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

string test = "I am am good and absolutely and fine. fine";
int main()
{
    vector<string> words;
    map<string, int> duplicateRemovedMap;
    string word = "";
    for (int i = 0; i < test.length(); i++)
    {

        if (test[i] != ' ')
        {
            word.push_back(test[i]);
        }
        else
        {

            words.push_back(word);
            word = "";
        }
    }

    if (!word.empty())
    {
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); i++)
    {
        duplicateRemovedMap[words[i]]=i;
    }

    
    for(int i=0; i<duplicateRemovedMap.size();i++){


    }

    return 0;
}