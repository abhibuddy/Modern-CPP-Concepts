#include <iostream>
#include <unordered_map>

class TrieNode{
public: 
bool isEndofWord;
std::unordered_map<char,TrieNode*> children;
TrieNode()
{
    isEndofWord = false;
}
};
class Trie
{
private:
TrieNode* root;
public:
Trie(){
    root = new TrieNode;
}
void insert(const std::string& word)
{
TrieNode* currentNode = root;
for(char c:word)
{
    if(currentNode->children.find(c)==currentNode->children.end())
    {
        currentNode->children[c] = new TrieNode();
    }
    currentNode = currentNode->children[c];
}
currentNode->isEndofWord = true;
}
bool search(const std::string& word){
    TrieNode* currentNode = root;
    for(char c: word)
    {
        if(currentNode->children.find(c) == currentNode->children.end())
        {
            return false;
        }
        currentNode = currentNode->children[c];
    }
    return currentNode->isEndofWord;
}
bool startsWith(const std::string& prefix){
TrieNode* currentNode = root;
    for(char c: prefix)
    {
        if(currentNode->children.find(c) == currentNode->children.end())
        {
            return false;
        }
        currentNode = currentNode->children[c];
    }
    return true;
}

};
int main()
{
       Trie trie;

    trie.insert("apple");
    std::cout << std::boolalpha; // Print bools as true/false instead of 1/0
    std::cout << "Search 'apple': " << trie.search("apple") << std::endl;   // true
    std::cout << "Search 'app': " << trie.search("app") << std::endl;       // false
    std::cout << "Starts with 'app': " << trie.startsWith("app") << std::endl; // true
    trie.insert("app");
    std::cout << "Search 'app': " << trie.search("app") << std::endl;       // true

    return 0;
}