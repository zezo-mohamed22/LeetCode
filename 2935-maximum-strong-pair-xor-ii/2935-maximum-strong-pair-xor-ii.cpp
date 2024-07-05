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
    int maximumStrongPairXor(vector<int> &nums) {
        Trie trie;
        sort(nums.begin(),nums.end());
        int ans = 0, n = nums.size();
        for (int l = 0, r = 0; l < n; l++) {
            while (nums[l] - nums[r] > nums[r]) {
                trie.del(nums[r]);
                r++;
            }
            ans = max(ans, trie.getMax(nums[l]));
            trie.insert(nums[l]);
        }
        return ans;
    }
};