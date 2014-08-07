#ifndef TATAILLE_TABVIEWHANDLER_H
#define TATAILLE_TABVIEWHANDLER_H


namespace tataille
{
   class TabViewHandler
   {
   public:
      virtual ~TabViewHandler() {}
      
      virtual void tabSelected(int tabIndex) = 0;
   };
}
