class TrieNode {
public:
    TrieNode *child[2];
    int count;

    TrieNode() {
        child[0] = nullptr;
        child[1] = nullptr;
        count = 0;
    }
};

class Trie {
private:
    TrieNode *root;
public:
    Trie() {
        root = new TrieNode();
    }

    void insert(int num) {
        TrieNode *current = root;

        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            if (!current->child[bit]) {
                current->child[bit] = new TrieNode();
            }
            current = current->child[bit];
            current->count++;
        }
    }

    void del(int num) {
        TrieNode *current = root;
        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            if (current->child[bit]) {
                current = current->child[bit];
                current->count--;
            }
        }
    }

    int getMax(int num) {
        TrieNode *current = root;
        int ans = 0;
        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            if (current->child[1 - bit] && current->child[1 - bit]->count > 0) {
                current = current->child[1 - bit];
                ans += (1 << i);

            } else if (current->child[bit]) {
                current = current->child[bit];
            }
        }
        return ans;
    }
};

class Solution {
public:
    int findMaximumXOR(vector<int> &nums) {
        Trie trie;
        for (auto &it: nums)trie.insert(it);
        int ans = 0;
        for (auto &it: nums) {
            ans = max(ans, trie.getMax(it));
        }
        return ans;
    }
};