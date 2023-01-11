class Calculator:
    
    def __init__(self,fi,se):
        self.first=fi
        self.secound=se 


    def setDate(self,fi,se):
        self.first=fi 
        self.secound = se

    def add(self):
        return self.first+self.secound

    def sub(self):
        return self.first-self.secound

    def mul(self):
        return self.first*self.secound

    def div(self):
        return self.first/self.secound

