#ifndef TATAILLE_SIZE_H
#define TATAILLE_SIZE_H

namespace tataille
{
   class Size
   {
   public:
      int width;
      int height;
      
      Size() :
         width(0),
         height(0)
      {
      }
      
      Size(int w, int h) :
         width(w),
         height(h)
      {
      }
      
      Size(const Size& copy) :
         width(copy.width),
         height(copy.height)
      {
      }
      
      Size& operator=(const Size& copy)
      {
         if (this == &copy) {
            return *this;
         }
         
         width = copy.width;
         height = copy.height;
         
         return *this;
      }
   };
}

#endif
