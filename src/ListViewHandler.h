// Copyright Paul Dardeau, SwampBits LLC 2014
// BSD License

#ifndef TATAILLE_LISTVIEWHANDLER_H
#define TATAILLE_LISTVIEWHANDLER_H


namespace tataille
{
   class ListViewHandler
   {
   public:
      virtual ~ListViewHandler() {}
      
      virtual void listViewRowSelected(int rowIndex) = 0;
   };
}
