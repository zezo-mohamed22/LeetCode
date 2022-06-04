class MyHashMap {
public:
    int freq[(int)1e6+5];
    MyHashMap() {
        fill(freq,1000000+freq,-1);    
    }
    void put(int key, int value) {
            freq[key]=value ;    
    }
    
    int get(int key) {
        return freq[key]; 
    }
    
    void remove(int key) {
        freq[key]=-1; 
    }
};
