class node: 
    def __init__(self): 
        self.data = 0
        self.next = None

def main(): 
    
    L = node() 
    L.data = 10 
    L.next = node() 
    L.next.data = 20 
    L.next.next = node() 
    L.next.next.data = 30 

main() 