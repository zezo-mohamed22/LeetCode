class MyCircularQueue {
public:

    
    struct ListNode
    {
        int val;
        
        ListNode* next;
        
        ListNode(int x)
        {
            val = x;
            
            next = NULL;
        }
    };
    
    ListNode* front = NULL;    
    ListNode* rear = NULL;
    
    int max_size;
    
    int curr_size = 0;
    
    MyCircularQueue(int k) {
        
        max_size = k;
    }
    
    bool enQueue(int value) {
        
        if(curr_size < max_size)
        {
            ListNode* new_node = new ListNode(value);
            
            if(front == NULL) 
            {
                front = new_node;
                
                rear = new_node;
            }
                        
            else
            {
                rear -> next = new_node;
                
                rear = new_node;
            }
            
            curr_size++;
            
            return true;
        }
        
        return false;
    }
    
    bool deQueue() {
        
        
        if(curr_size > 0)
        {
            ListNode* temp = front;
            
            
            front = front -> next;
            
            
            temp -> next = NULL;
            
            delete temp;
            
            curr_size--;
            
            return true;
        }
        
        return false;
    }
    
    int Front() {
        
        if(curr_size > 0)
            return front -> val;
        
        return -1;
    }
    
    int Rear() {
        
        if(curr_size > 0)
            return rear -> val;
        
        return -1;
    }
    
    bool isEmpty() {
        
        return curr_size == 0;
    }
    
    bool isFull() {
        
        return curr_size == max_size;
    }
};