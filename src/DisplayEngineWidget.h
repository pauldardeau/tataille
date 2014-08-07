// Copyright Paul Dardeau, SwampBits LLC 2014
// BSD License

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
      virtual void setSize(const Size& controlSize) = 0;
      virtual void setPos(const Point& point) = 0;
      virtual void setRect(const Rect& rect) = 0;
      virtual void setFocus() = 0;
      virtual void setEnabled(bool isEnabled) = 0;

   };
}

#endif
