#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
class Box
{
//l,b,h are integers representing the dimensions of the box
private:
    int l, b, h;
// The class should have the following functions : 
public:
// Constructors: 
// Box();
    Box()
    {
        l = b = h = 0;
    }
// Box(int,int,int);
    Box(int x, int y, int z)
    {
        l = x;
        b = y;
        h = z;
    }
// Box(Box);
    Box(Box &boxxy)
    {
        l = boxxy.getLength();
        b = boxxy.getBreadth();
        h = boxxy.getHeight();
    }

// int getLength(); // Return box's length
    int getLength(){    return l;   }
// int getBreadth (); // Return box's breadth
    int getBreadth(){   return b;   }
// int getHeight ();  //Return box's height
    int getHeight(){    return h;   }
// long long CalculateVolume(); // Return the volume of the box
    long long CalculateVolume(){    return 1LL * l * b * h;   }

//Overload operator < as specified
//bool operator<(Box& b)
    bool operator < (Box &boxxy)
    {
        return (l < boxxy.getLength()) || (b < boxxy.getBreadth() && l == boxxy.getLength()) ||             (h < boxxy.getHeight() && b == boxxy.getBreadth() && l == boxxy.getLength());
    }
};
//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
    ostream& operator<<(ostream& out, Box& boxxy)
    {
      out << boxxy.getLength() << " " << boxxy.getBreadth() << " " << boxxy.getHeight();
          return out;
    }

