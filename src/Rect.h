#ifndef TATAILLE_RECT_H
#define TATAILLE_RECT_H

#include "Point.h"
#include "Size.h"

namespace tataille
{
   class Rect
   {
   public:
      Point origin;
      Size size;
      
      Rect()
      {
      }
      
      Rect(int x, int y, int w, int h) :
         origin(x, y),
         size(w, h)
      {
      }
      
      Rect(const Point& point, const Size& sizeVal) :
         origin(point),
         size(sizeVal)
      {
      }
      
      Rect(const Rect& copy) :
         origin(copy.origin),
         size(copy.size)
      {
      }
      
      Rect& operator=(const Rect& copy)
      {
         if (this == &copy) {
            return *this;
         }
         
         origin = copy.origin;
         size = copy.size;
         
         return *this;
      }
   };
}

#endif
