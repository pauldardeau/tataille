#ifndef TATAILLE_POINT_H
#define TATAILLE_POINT_H

namespace tataille
{
   class Point
   {
   public:
      int x;
      int y;
      
      Point() :
         x(0),
         y(0)
      {
      }
      
      Point(int xVal, int yVal) :
         x(xVal),
         y(yVal)
      {
      }
      
      Point(const Point& copy) :
         x(copy.x),
         y(copy.y)
      {
      }
      
      Point& operator=(const Point& copy)
      {
         if (this == &copy) {
            return *this;
         }
         
         x = copy.x;
         y = copy.y;
         
         return *this;
      }
   };
}

#endif
