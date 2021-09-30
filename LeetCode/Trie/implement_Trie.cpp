class Trie {
public:
    /** Initialize your data structure here. */
    struct TrieNode{
        char value;
        int count;
        int endsHere;
        TrieNode *child[26];
    };
    
    TrieNode *getNode(int index) {
        TrieNode *newNode = new TrieNode();
        newNode->value = 'a' + index;
        newNode->count = newNode->endsHere = 0;
        for(int i=0;i<26;i++)
            newNode->child[i]=NULL;
        return newNode;
    }
    TrieNode *root;
    
    Trie(){
        root = getNode('/' - 'a');
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode *curr = root;
        int index;
        for(int i=0;i<word.size();i++)
        {
            index = word[i]-'a';
            if(curr->child[index]==NULL)
                curr->child[index] = getNode(index);
            curr->child[index]->count++;
            curr = curr->child[index];
        }
        curr->endsHere++;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        
        TrieNode *curr = root;
        int index;
        for(int i=0;i<word.size();i++)
        {
            index= word[i] - 'a';
            if(curr->child[index]==NULL)
                return false;
            curr = curr->child[index];
        }
        return (curr->endsHere > 0);
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode *curr = root;
        int index;
        for(int i=0;i<prefix.size();i++)
        {
            index = prefix[i]- 'a';
            if(curr->child[index]==NULL)
                return false;
            curr=curr->child[index];
        }
        return (curr->count>0);
    }
};