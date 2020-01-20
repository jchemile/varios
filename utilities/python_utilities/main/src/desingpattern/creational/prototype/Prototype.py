from abc import ABC, abstractmethod

class Prototype(ABC):
    def clone(self):
        pass

class MyObject(Prototype):
    def __init__(self, arg1, arg2):
        self.field1 = arg1
        self.field2 = arg2

    def __operation__(self):
        self.performed__operation = True

    def clone(self):
        obj = MyObject(self.field1, self.field2)
        obj.performed__operation = self.performed__operation
        return obj
