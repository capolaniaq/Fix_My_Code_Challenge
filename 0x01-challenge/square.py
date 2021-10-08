#!/usr/bin/python3
"""Module that declare the square class"""


class Square():
    """class square"""
    width = 0
    height = 0

    def __init__(self, *args, **kwargs):
        """self items"""
        for key, value in kwargs.items():
            setattr(self, key, value)

    def area_of_my_square(self):
        """ Area of the square """
        return self.width * self.height

    def PermiterOfMySquare(self):
        """perimeter of the square"""
        return (self.width * 2) + (self.height * 2)

    def __str__(self):
        """print the format"""
        return "{}/{}".format(self.width, self.height)

if __name__ == "__main__":

    s = Square(width=12, height=9)
    print(s)
    print(s.area_of_my_square())
    print(s.PermiterOfMySquare())
