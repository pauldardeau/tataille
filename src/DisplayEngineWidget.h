#ifndef TATAILLE_DISPLAYENGINEWIDGET_H
#define TATAILLE_DISPLAYENGINEWIDGET_H

namespace tataille
{
   class Point;
   class Rect;
   class Size;
   
   class DisplayEngineWidget
   {
   public:
      DisplayEngineWidget() {}
      virtual ~DisplayEngineWidget() {}

      virtual void setVisible(bool isVisible) = 0;
      virtual bool setSize(const Size& controlSize) = 0;
      virtual bool setPos(const Point& point) = 0;
      virtual bool setRect(const Rect& rect) = 0;

   };
}

#endif
