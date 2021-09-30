#include<bits/stdc++.h>
using namespace std;

class Solution {

    struct Trie{
        char val;
        bool endsHere;
        Trie* child[58];
    };
    Trie* root;
    
    Trie* getNode(int index){
        Trie* newNode = new Trie();
        newNode->val = index+'A';
        newNode->endsHere = false;
        for(int i=0;i<58;i++){
            newNode->child[i] = NULL;
        }
        return newNode;
    }
    
public:
    bool search(Trie* root, vector<vector<char>>& board, int i, int j, int r, int c){
        if(i<0 || i==r || j<0 || j==c) return false;
        for(int i=0;i<58;i++){
            if(root->child[i]!=NULL){
                root = root->child[i];
                break;
            }
        }
        // root = root->child[board[i][j] - 'A'];
        if(root==NULL) return false;
        // cout<<root->val<<" ";
        if(root->val != board[i][j]) return false;
        
        if(root->endsHere) return true;
        char ch = board[i][j];
        board[i][j] = '$';
        
        bool ans = (
            search(root, board, i, j+1, r, c) ||
            search(root, board, i+1, j, r, c) ||
            search(root, board, i, j-1, r, c) ||
            search(root, board, i-1, j, r, c)
        );
        board[i][j] = ch;
        return ans;
        
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        root = getNode('/'-'A');
        int r=board.size(), c=board[0].size();
        
        Trie* curr=root;
        int index;
        for(int i=0;i<word.length();i++){
            index = word[i]-'A';
            // cout<<index<<" ";
            if(curr->child[index]==NULL){
                curr->child[index] = getNode(index);
            }
            curr = curr->child[index];
        }
        curr->endsHere = true;
        
        bool ans=false;
        // root = root->child[word[i]='a'];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j] == word[0] && search(root, board, i, j, r, c)){
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    vector<vector<int>> board={{"A","B","C","E"},
                               {"S","F","C","S"},
                               {"A","D","E","E"}};
    string word = "ABCCED";
    Solution s;
    if(s.exist(board, word)){
       cout<<"Exist<<endl;
    }
    else cout<<"Not Exist"<<endl;
    return 0;
}