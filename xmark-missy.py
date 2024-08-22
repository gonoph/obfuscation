#!/usr/bin/python3

class missy:
    '''missy class to create an output using recursion'''
    def __init__(self, output=[], start=0, end=5):
        self.output=output
        self.start=start
        self.end=end
    def elliott(self):
        '''threadsafe recursive method to create a quarter of the output. returns a new object'''
        if self.start >= self.end:
            return missy(self.output, self.start, self.end)
        line='#'
        if self.start:
            line+=' ' * (self.start-1) + '#' + ' ' * (self.end-1-self.start)
        else:
            line+='#' * 4
        return missy(self.output+[line], self.start+1, self.end).elliott()
    def flip_it(self):
        '''threadsafe method to flip and append lines. returns a new object'''
        return missy(list(map(lambda x: x+x[::-1], self.output)), self.start, self.end)
    def reverse_it(self):
        '''threadsafe method to reverse and append the output. returns a new object'''
        return missy(self.output+self.output[-2::-1], self.start, self.end)
    def __repr__(self):
        return f'missy({self.output}, {self.start}, {self.end})'
    def __str__(self):
        return '\n'.join(self.output)

print(missy().elliott().flip_it().reverse_it())
